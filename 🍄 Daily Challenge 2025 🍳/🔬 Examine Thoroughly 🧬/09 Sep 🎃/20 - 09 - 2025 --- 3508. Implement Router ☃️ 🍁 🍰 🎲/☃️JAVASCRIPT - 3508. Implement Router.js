//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3508

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(memoryLimit)

//? 🧺 Space complexity ➺ O(n)

class Router {
      /**
       * Initialize Router with a memory limit.
       * @param {number} memoryLimit - Max number of packets stored.
       * Time complexity: O(1)
       */
      constructor(memoryLimit) {
            this.size = memoryLimit;
            this.packets = new Map();    // key (encoded) -> [source, destination, timestamp]
            this.counts = new Map();     // destination -> array of timestamps
            this.queue = [];             // FIFO order of keys to track insertion order
      }

      /**
       * Encode source, destination, and timestamp into a unique BigInt key.
       * @private
       * @param {number} source
       * @param {number} destination
       * @param {number} timestamp
       * @returns {string} - Encoded key as string to use in Map
       */
      _encode(source, destination, timestamp) {
            return (BigInt(source) << 40n) | (BigInt(destination) << 20n) | BigInt(timestamp);
      }

      /**
       * Add a packet if not duplicate. Evict oldest if at size limit.
       * Time complexity: O(1) amortized
       * @param {number} source
       * @param {number} destination
       * @param {number} timestamp
       * @returns {boolean} - True if added, false if duplicate
       */
      addPacket(source, destination, timestamp) {
            const key = this._encode(source, destination, timestamp).toString();

            if (this.packets.has(key)) return false;   // Duplicate packet

            if (this.packets.size >= this.size) {
                  this.forwardPacket();                // Evict oldest packet
            }

            this.packets.set(key, [source, destination, timestamp]);
            this.queue.push(key);

            if (!this.counts.has(destination)) {
                  this.counts.set(destination, []);
            }
            this.counts.get(destination).push(timestamp);

            return true;
      }

      /**
       * Forward (remove) oldest packet in FIFO order.
       * Time complexity: O(1)
       * @returns {Array|[]} - Packet array or empty if none
       */
      forwardPacket() {
            if (this.packets.size === 0) return [];

            const key = this.queue.shift();
            const packet = this.packets.get(key);
            this.packets.delete(key);

            const destination = packet[1];
            this.counts.get(destination).shift(); // Remove earliest timestamp

            return packet;
      }

      /**
       * Count packets for a destination within a time range.
       * Uses binary searches.
       * Time complexity: O(log n)
       * @param {number} destination
       * @param {number} startTime
       * @param {number} endTime
       * @returns {number} - Count of matching packets
       */
      getCount(destination, startTime, endTime) {
            if (!this.counts.has(destination)) return 0;

            const timestamps = this.counts.get(destination);
            if (timestamps.length === 0) return 0;

            // Binary search lower bound: first index with value >= target
            const lowerBound = (arr, target) => {
                  let low = 0, high = arr.length;
                  while (low < high) {
                        const mid = Math.floor((low + high) / 2);
                        if (arr[mid] < target) low = mid + 1;
                        else high = mid;
                  }
                  return low;
            };

            // Binary search upper bound: first index with value > target
            const upperBound = (arr, target) => {
                  let low = 0, high = arr.length;
                  while (low < high) {
                        const mid = Math.floor((low + high) / 2);
                        if (arr[mid] <= target) low = mid + 1;
                        else high = mid;
                  }
                  return low;
            };

            const left = lowerBound(timestamps, startTime);
            const right = upperBound(timestamps, endTime);

            return right - left;
      }
}
