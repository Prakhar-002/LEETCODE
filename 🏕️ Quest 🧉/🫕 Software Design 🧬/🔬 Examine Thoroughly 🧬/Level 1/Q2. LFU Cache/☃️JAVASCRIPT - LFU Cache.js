//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L1 Q2

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var LFUCache = function (capacity) {
      /**
       * LFU Cache: O(1) get/put using key→Node + freq→DLL mapping
       * Evicts LFU+LRU (Least Frequently Used, Least Recently Used)
       */
      this.capacity = capacity;
      this.cache = new Map();           // key → Node
      this.freqMap = new Map();         // freq → DoublyLinkedList
      this.minFreq = 0;

      // Node class for doubly linked lists
      this.Node = class {
            constructor(key, val, freq = 1) {
                  this.key = key;
                  this.val = val;
                  this.freq = freq;
                  this.prev = null;
                  this.next = null;
            }
      };
};

LFUCache.prototype._createDLL = function () {
      /**
       * Create circular doubly linked list with sentinels
       * head → MRU nodes → ... → LRU nodes → tail
       */
      const head = new this.Node(0, 0);
      const tail = new this.Node(0, 0);
      head.next = tail;
      tail.prev = head;
      return { head, tail, size: 0 };
};

LFUCache.prototype._addAtHead = function (dll, node) {
      /**
       * Add node after head (MRU position) - O(1)
       */
      const nxt = dll.head.next;
      dll.head.next = node;
      node.next = nxt;
      node.prev = dll.head;
      nxt.prev = node;
      dll.size++;
};

LFUCache.prototype._removeNode = function (dll, node) {
      /**
       * Remove arbitrary node from DLL - O(1)
       */
      node.prev.next = node.next;
      node.next.prev = node.prev;
      dll.size--;
};

LFUCache.prototype._removeFromTail = function (dll) {
      /**
       * Remove LRU node (before tail) - O(1)
       */
      if (dll.size === 0) return null;
      const lru = dll.tail.prev;
      this._removeNode(dll, lru);
      return lru;
};

LFUCache.prototype._updateFreq = function (node) {
      /**
       * Frequency hop: old_freq → remove → new_freq (MRU)
       * Updates minFreq if old frequency list empties
       */
      const freq = node.freq;
      const dll = this.freqMap.get(freq);
      this._removeNode(dll, node);

      if (freq === this.minFreq && dll.size === 0) {
            this.minFreq++;
      }

      node.freq++;
      if (!this.freqMap.has(node.freq)) {
            this.freqMap.set(node.freq, this._createDLL());
      }
      this._addAtHead(this.freqMap.get(node.freq), node);
};

LFUCache.prototype.get = function (key) {
      /**
       * Get value if exists, update frequency/recency - O(1)
       */
      if (!this.cache.has(key)) return -1;

      const node = this.cache.get(key);
      this._updateFreq(node);
      return node.val;
};

LFUCache.prototype.put = function (key, value) {
      /**
       * Put key-value with LFU+LRU eviction if over capacity - O(1)
       */
      if (this.capacity === 0) return;

      if (this.cache.has(key)) {
            // Update existing: change value + frequency hop
            const node = this.cache.get(key);
            node.val = value;
            this._updateFreq(node);
      } else {
            // Evict LFU+LRU if full
            if (this.cache.size >= this.capacity) {
                  const lfuDLL = this.freqMap.get(this.minFreq);
                  const evictNode = this._removeFromTail(lfuDLL);
                  this.cache.delete(evictNode.key);
            }

            // Add new node at freq=1 (MRU)
            const newNode = new this.Node(key, value);
            this.cache.set(key, newNode);

            if (!this.freqMap.has(1)) {
                  this.freqMap.set(1, this._createDLL());
            }
            this._addAtHead(this.freqMap.get(1), newNode);
            this.minFreq = 1;
      }
};
