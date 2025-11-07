//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2528

//? ⌚ Time complexity ➺ O(n lod D) 👉🏻  n = len(stations)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
      long long maxPower(vector<int>& stations, int r, int k) {
            int n = stations.size();
            // Difference array to efficiently represent range updates for power stations' influence
            vector<long long> cnt(n + 1, 0);

            // Build the difference array based on each station's power and its radius of influence
            for (int i = 0; i < n; i++) {
                  int left = max(0, i - r);
                  int right = min(n, i + r + 1);
                  cnt[left] += stations[i];    // Add power at start of influence range
                  cnt[right] -= stations[i];   // Subtract power after the influence range ends
            }

            // Lambda function to check if minimum power 'val' can be achieved with k additions
            auto check = [&](long long val) -> bool {
                  vector<long long> diff = cnt;  // Copy difference array to simulate additions
                  long long sum = 0;             // Running sum of power at current city
                  long long remaining = k;       // Stations left to add

                  for (int i = 0; i < n; i++) {
                        sum += diff[i];          // Power at city i given difference array
                        if (sum < val) {         // If below desired minimum, need to add stations
                              long long add = val - sum;
                              if (remaining < add) {
                                    return false; // Not enough stations left to add
                              }
                              remaining -= add;
                              int end = min(n, i + 2 * r + 1); // End of added stations' effect
                              diff[end] -= add;    // Remove added power influence after end
                              sum += add;          // Increase current city power
                        }
                  }
                  return true;  // All cities meet or exceed minimum power val
            };

            // Define search space boundaries
            long long lo = *min_element(stations.begin(), stations.end());
            long long hi = accumulate(stations.begin(), stations.end(), 0LL) + k;
            long long res = 0;

            // Binary search over possible minimum power values
            while (lo <= hi) {
                  long long mid = lo + (hi - lo) / 2;
                  if (check(mid)) {
                        res = mid;    // mid feasible; try higher
                        lo = mid + 1;
                  } else {
                        hi = mid - 1; // mid not feasible; try lower
                  }
            }

            return res;  // Maximum achievable minimum power
      }
};
