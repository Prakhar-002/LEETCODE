//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3635

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(landStartTime)

//? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(waterStartTime)

#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:

      // Find earliest finish time when doing all A tasks first, then one B task
      long long solve(vector<int>& startA, vector<int>& durationA,
                        vector<int>& startB, vector<int>& durationB) {

            // Find the earliest time all A tasks can finish
            long long endA = LLONG_MAX;
            for (int i = 0; i < (int)startA.size(); i++) {
                  endA = min(endA, (long long)startA[i] + durationA[i]);
            }

            // Pick the B task that finishes earliest after all A tasks are done
            long long ans = LLONG_MAX;
            for (int i = 0; i < (int)startB.size(); i++) {
                  // Must wait until endA if B hasn't started yet
                  ans = min(ans, max((long long)startB[i], endA) + durationB[i]);
            }

            return ans;
      }

      long long earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
                                    vector<int>& waterStartTime, vector<int>& waterDuration) {
            // Try land tasks first, then a water task
            long long landFirst  = solve(landStartTime, landDuration, waterStartTime, waterDuration);

            // Try water tasks first, then a land task
            long long waterFirst = solve(waterStartTime, waterDuration, landStartTime, landDuration);

            // Return whichever ordering finishes earlier
            return min(landFirst, waterFirst);
      }
};