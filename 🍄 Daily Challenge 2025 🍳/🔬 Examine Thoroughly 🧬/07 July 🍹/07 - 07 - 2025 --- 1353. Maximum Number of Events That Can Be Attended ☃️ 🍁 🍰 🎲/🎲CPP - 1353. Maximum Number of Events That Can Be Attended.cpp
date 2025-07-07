//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1353

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <queue>
#include <algorithm>

class Solution {
public:
      int maxEvents(std::vector<std::vector<int>>& events) {
            // Sort all events by start day
            std::sort(events.begin(), events.end());

            // Min-heap to store end days of active events
            std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

            int n = events.size();   // Total number of events
            int i = 0;               // Pointer to current event
            int day = 1;             // Current day
            int count = 0;           // Number of events attended

            // Loop until all events are processed or heap is not empty
            while (i < n || !pq.empty()) {

                  // If heap is empty and next event starts in the future, jump to that day
                  if (pq.empty() && events[i][0] > day) {
                        day = events[i][0];
                  }

                  // Add all events starting today to the heap
                  while (i < n && events[i][0] <= day) {
                        pq.push(events[i][1]); // Push end day into heap
                        i++;
                  }

                  // Remove events that already ended
                  while (!pq.empty() && pq.top() < day) {
                        pq.pop();
                  }

                  // Attend the event with the earliest end day
                  if (!pq.empty()) {
                        pq.pop();   // Attend this event
                        count++;    // Increase attended event count
                        day++;      // Move to next day
                  }
            }

            return count; // Total attended events
      }
};
