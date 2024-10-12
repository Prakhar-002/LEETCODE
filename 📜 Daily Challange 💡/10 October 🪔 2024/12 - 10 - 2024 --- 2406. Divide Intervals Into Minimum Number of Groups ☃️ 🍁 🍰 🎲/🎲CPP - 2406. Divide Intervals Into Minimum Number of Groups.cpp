//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2406

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(intervals)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int minGroups(vector<vector<int>>& intervals) {
            // `startPoints` vector stores the start points of each interval
            vector<int> startPoints;
            // `endPoints` vector stores the end points of each interval
            vector<int> endPoints;

            // `for` loop populates these vectors by iterating over the `intervals` vector
            for (const auto& interval : intervals) {
                  // store the starting point in `startPoints` vector
                  startPoints.push_back(interval[0]);
                  // store the ending point in `endPoints` vector
                  endPoints.push_back(interval[1]);
            }

            // sort the `startPoints` vector
            sort(startPoints.begin(), startPoints.end());
            // sort the `endPoints` vector
            sort(endPoints.begin(), endPoints.end());

            // `sIdx` pointer used to iterate over the sorted `startPoints` vector
            int sIdx = 0;
            // `eIdx` pointer used to iterate over the sorted `endPoints` vector
            int eIdx = 0;

            int groups = 0;
            int intersections = 0;

            // loop continues until all intervals (start points) have been processed
            while (sIdx < intervals.size()) {
                  // if the current start point is earlier or equal to the current end point
                  if (startPoints[sIdx] <= endPoints[eIdx]) {
                        // means a new interval is starting before the last one ends
                        intersections++; // thus increasing the number of "intersections"
                        // start pointer is incremented to process the next interval
                        sIdx++;
                  }
                  // If not, an interval has ended before a new one starts
                  else {
                        // count of "intersections" decreases
                        intersections--;
                        // and the end pointer is incremented
                        eIdx++;
                  }

                  // `groups` variable is updated to hold the maximum number of intersections seen so far
                  groups = max(groups, intersections);
            }

            // returns `groups`, which now holds the minimum number of groups required
            return groups;
      }
};

