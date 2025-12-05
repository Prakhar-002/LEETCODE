//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3625

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

class Solution {
public:
      int countTrapezoids(vector<vector<int>> &points) {
            int n = points.size();
            const int INF = 1000000007; // Special value for vertical lines

            // slopeToIntercept: parallel lines (same slope, different intercepts)
            unordered_map<float, vector<float>> slopeToIntercept;
            // midToSlope: lines intersecting at same midpoint
            unordered_map<int, vector<float>> midToSlope;

            long long ans = 0; // Use long long to prevent overflow during calculations

            // Generate all line segments O(N²)
            for (int i = 0; i < n; i++) {
                  int x1 = points[i][0];
                  int y1 = points[i][1];
                  for (int j = i + 1; j < n; j++) {
                        int x2 = points[j][0];
                        int y2 = points[j][1];
                        int dx = x1 - x2;
                        int dy = y1 - y2;

                        float k, b; // slope (k), y-intercept (b)

                        if (x2 == x1) { // Vertical line: infinite slope
                              k = INF;
                              b = x1;
                        }
                        else {
                              k = (float)(y2 - y1) / (x2 - x1);    // Slope m = Δy/Δx
                              b = (float)(y1 * dx - x1 * dy) / dx; // Y-intercept
                        }

                        // Midpoint identifier (scaled integers to avoid float precision)
                        int mid = (x1 + x2) * 10000 + (y1 + y2);

                        slopeToIntercept[k].push_back(b);
                        midToSlope[mid].push_back(k);
                  }
            }

            // PHASE 1: Count trapezoids from PARALLEL lines (ADD)
            for (auto &[_, sti] : slopeToIntercept) {
                  if (sti.size() == 1)
                        continue; // Need ≥2 parallel lines

                  // Group parallel lines by intercept (same b = collinear)
                  map<float, int> cnt;
                  for (float b : sti) {
                        cnt[b]++;
                  }

                  long long totalSum = 0;
                  for (auto &[_, count] : cnt) {
                        // Pairs from different intercepts form trapezoid top/bottom
                        ans += totalSum * count;
                        totalSum += count;
                  }
            }

            // PHASE 2: Subtract invalid cases from INTERSECTING lines (SUBTRACT)
            for (auto &[_, mts] : midToSlope) {
                  if (mts.size() == 1)
                        continue;

                  // Group by slope (same slope + same midpoint = collinear)
                  map<float, int> cnt;
                  for (float k : mts) {
                        cnt[k]++;
                  }

                  long long totalSum = 0;
                  for (auto &[_, count] : cnt) {
                        // Subtract overcounted collinear cases
                        ans -= totalSum * count;
                        totalSum += count;
                  }
            }

            return ans;
      }
};
