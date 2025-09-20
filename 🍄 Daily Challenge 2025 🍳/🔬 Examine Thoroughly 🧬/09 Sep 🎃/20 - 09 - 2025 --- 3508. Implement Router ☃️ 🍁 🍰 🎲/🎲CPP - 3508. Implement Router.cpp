//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3508

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(memoryLimit)

//? 🧺 Space complexity ➺ O(n)

#include <unordered_map>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Router {
private:
      int size;                                      // Maximum number of packets stored
      unordered_map<long long, vector<int>> packets; // Encoded packet -> {source, destination, timestamp}
      unordered_map<int, vector<int>> counts;        // Destination -> sorted list of timestamps
      queue<long long> q;                            // Queue storing order of packets by encoded key

      // Encode packet attributes into a single long long key for uniqueness
      long long encode(int source, int destination, int timestamp) {
            // Use bit-shifting: high bits for source and destination, low bits for timestamp
            return ((long long)source << 40) | ((long long)destination << 20) | timestamp;
      }

      // Find the first index in 'list' with element >= target (lower bound)
      int lowerBound(vector<int> &list, int target) {
            return (int)(lower_bound(list.begin(), list.end(), target) - list.begin());
      }

      // Find the first index in 'list' with element > target (upper bound)
      int upperBound(vector<int> &list, int target) {
            return (int)(upper_bound(list.begin(), list.end(), target) - list.begin());
      }

public:
      // Initialize Router with memory limit
      Router(int memoryLimit) {
            size = memoryLimit;
      }

      // Add a packet if not already stored; evict oldest if memory full
      // Average time complexity: O(1)
      bool addPacket(int source, int destination, int timestamp) {
            long long key = encode(source, destination, timestamp);

            if (packets.find(key) != packets.end())
                  return false; // Packet already present

            if ((int)packets.size() >= size)
                  forwardPacket(); // Evict oldest packet if memory is full

            packets[key] = {source, destination, timestamp};
            q.push(key);
            counts[destination].push_back(timestamp);

            return true;
      }

      // Forward (evict) the oldest packet
      // Time complexity: O(1)
      vector<int> forwardPacket() {
            if (packets.empty())
                  return {}; // No packets to forward

            long long key = q.front();
            q.pop();

            vector<int> packet = packets[key];
            packets.erase(key);

            int dest = packet[1];
            counts[dest].erase(counts[dest].begin()); // Remove earliest timestamp for destination

            return packet;
      }

      // Count how many packets for a destination lie within [startTime, endTime]
      // Time complexity: O(log n)
      int getCount(int destination, int startTime, int endTime) {
            auto it = counts.find(destination);
            if (it == counts.end() || it->second.empty())
                  return 0;

            vector<int> &list = it->second;

            int left = lowerBound(list, startTime);
            int right = upperBound(list, endTime);

            return right - left;
      }
};
