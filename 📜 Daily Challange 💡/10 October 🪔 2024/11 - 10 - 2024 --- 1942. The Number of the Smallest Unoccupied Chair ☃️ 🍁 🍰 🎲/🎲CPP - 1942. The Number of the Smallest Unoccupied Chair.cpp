//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1942

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(times)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Solution {
public:
      // Function to determine the smallest chair the targetFriend will sit on
      int smallestChair(vector<vector<int>>& times, int targetFriend) {
            // Create a vector of tuples where each tuple contains (arrival time, leaving time, index of friend)
            vector<tuple<int, int, int>> timesWithIndex;
            for (int i = 0; i < times.size(); ++i) {
                  timesWithIndex.emplace_back(times[i][0], times[i][1], i);
            }

            // Sort the times by arrival time to process the friends in order of arrival
            sort(timesWithIndex.begin(), timesWithIndex.end());

            // This priority queue will store the chairs currently in use as (leave time, chair)
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> used_chair;
            // Priority queue of available chairs (sorted by index)
            priority_queue<int, vector<int>, greater<int>> available_chair;
            for (int i = 0; i < times.size(); ++i) {
                  available_chair.push(i);
            }

            for (const auto& [arrivalTime, leavingTime, idx] : timesWithIndex) {
                  // Release all chairs for friends who have already left before the current friend's arrival
                  while (!used_chair.empty() && used_chair.top().first <= arrivalTime) {
                        // Remove the chair of the friend who left
                        int chair = used_chair.top().second;
                        used_chair.pop();
                        // Add the chair back to the available chairs heap
                        available_chair.push(chair);
                  }

                  // Assign the smallest available chair to the current friend
                  int chair = available_chair.top();
                  available_chair.pop();
                  // Push the current chair along with the friend's leaving time into the used_chair heap
                  used_chair.push({leavingTime, chair});

                  // If the current friend is the targetFriend, return the chair assigned to them
                  if (idx == targetFriend) {
                        return chair;
                  }
            }

            // This line should never be reached if the input is valid
            return -1;
      }
};

