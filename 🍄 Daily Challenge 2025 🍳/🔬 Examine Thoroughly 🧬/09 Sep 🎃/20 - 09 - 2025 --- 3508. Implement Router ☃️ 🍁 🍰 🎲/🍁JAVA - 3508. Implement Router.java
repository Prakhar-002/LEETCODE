//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3508

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(memoryLimit)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Router {
      private final int size; // Maximum memory limit for packets
      private final Map<Integer, List<Integer>> counts; // Destination -> list of packet timestamps
      private final Map<Long, int[]> packets; // Encoded packet key -> [source, destination, timestamp]
      private final Queue<Long> queue; // Queue storing encoded packet keys in order

      // O(1)
      public Router(final int memoryLimit) {
            this.size = memoryLimit;
            this.packets = new HashMap<>();
            this.counts = new HashMap<>();
            this.queue = new LinkedList<>();
      }

      // O(1) amortized
      public boolean addPacket(final int source, final int destination, final int timestamp) {
            final long key = encode(source, destination, timestamp);

            if (packets.containsKey(key))
                  return false; // Packet already present, skip

            if (packets.size() >= size)
                  forwardPacket(); // Evict oldest packet if memory is full

            packets.put(key, new int[] { source, destination, timestamp });
            queue.offer(key);

            counts.putIfAbsent(destination, new ArrayList<>());
            counts.get(destination).add(timestamp);

            return true;
      }

      // O(1)
      public int[] forwardPacket() {
            if (packets.isEmpty())
                  return new int[] {}; // Return empty if no packets to forward

            final long key = queue.poll(); // Get oldest packet key
            final int[] packet = packets.remove(key); // Remove from map

            if (packet == null)
                  return new int[] {}; // Defensive null check

            final int destination = packet[1];
            final List<Integer> list = counts.get(destination);

            list.remove(0); // Remove the oldest timestamp for the destination

            return packet;
      }

      // O(log n) due to binary search
      public int getCount(final int destination, final int startTime, final int endTime) {
            final List<Integer> list = counts.get(destination);
            if (list == null || list.isEmpty())
                  return 0; // No packets for destination

            final int left = lowerBound(list, startTime);
            final int right = upperBound(list, endTime);

            return right - left; // Count of packets in time range
      }

      // Encode packet attributes into a single long key (bit-shifting)
      private long encode(final int source, final int destination, final int timestamp) {
            return ((long) source << 40) | ((long) destination << 20) | timestamp;
      }

      // Finds first index of element >= target using binary search
      private int lowerBound(final List<Integer> list, final int target) {
            int low = 0, high = list.size();

            while (low < high) {
                  final int mid = (low + high) >>> 1;
                  if (list.get(mid) < target)
                        low = mid + 1;
                  else
                        high = mid;
            }

            return low;
      }

      // Finds first index of element > target using binary search
      private int upperBound(final List<Integer> list, final int target) {
            int low = 0, high = list.size();

            while (low < high) {
                  final int mid = (low + high) >>> 1;

                  if (list.get(mid) <= target)
                        low = mid + 1;
                  else
                        high = mid;
            }

            return low;
      }
}
