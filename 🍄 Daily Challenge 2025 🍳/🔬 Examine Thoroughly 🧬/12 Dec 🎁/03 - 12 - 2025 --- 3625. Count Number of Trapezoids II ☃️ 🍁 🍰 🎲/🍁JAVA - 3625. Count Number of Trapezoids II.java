//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3625

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

class Solution {
      public int countTrapezoids(int[][] points) {
            int n = points.length;
            final double INF = 1e9 + 7; // Special value for vertical lines

            // slopeToIntercept: parallel lines (same slope, different intercepts)
            Map<Double, List<Double>> slopeToIntercept = new HashMap<>();
            // midToSlope: lines intersecting at same midpoint
            Map<Integer, List<Double>> midToSlope = new HashMap<>();

            long ans = 0; // Use long to prevent overflow during multiplication

            // Generate all line segments between point pairs O(N²)
            for (int i = 0; i < n; i++) {
                  int x1 = points[i][0];
                  int y1 = points[i][1];
                  for (int j = i + 1; j < n; j++) {
                        int x2 = points[j][0];
                        int y2 = points[j][1];
                        int dx = x1 - x2;
                        int dy = y1 - y2;

                        double k, b; // slope (k), y-intercept (b)

                        if (x2 == x1) { // Vertical line: infinite slope
                              k = INF;
                              b = x1;
                        } else {
                              k = 1.0 * (y2 - y1) / (x2 - x1); // Slope m = Δy/Δx
                              b = 1.0 * (y1 * dx - x1 * dy) / dx; // Y-intercept
                        }

                        // Fix negative zero floating point issues
                        if (k == -0.0)
                              k = 0.0;
                        if (b == -0.0)
                              b = 0.0;

                        // Midpoint identifier (scaled integers for precision)
                        int mid = (x1 + x2) * 10000 + (y1 + y2);

                        // Group parallel lines and intersecting lines
                        slopeToIntercept
                                    .computeIfAbsent(k, key -> new ArrayList<>())
                                    .add(b);
                        midToSlope
                                    .computeIfAbsent(mid, key -> new ArrayList<>())
                                    .add(k);
                  }
            }

            // PHASE 1: Count trapezoids from PARALLEL line pairs (ADD +)
            for (List<Double> sti : slopeToIntercept.values()) {
                  if (sti.size() == 1)
                        continue; // Need ≥2 parallel lines

                  // Group parallel lines by intercept (same b = collinear points)
                  Map<Double, Integer> cnt = new TreeMap<>(); // TreeMap auto-sorts floats
                  for (double b : sti) {
                        cnt.put(b, cnt.getOrDefault(b, 0) + 1);
                  }

                  long totalSum = 0;
                  for (int count : cnt.values()) {
                        // Pairs from different intercepts form trapezoid top/bottom
                        ans += totalSum * count;
                        totalSum += count;
                  }
            }

            // PHASE 2: Subtract invalid cases from INTERSECTING line pairs (SUBTRACT -)
            for (List<Double> mts : midToSlope.values()) {
                  if (mts.size() == 1)
                        continue;

                  // Group lines by slope at same midpoint (same k = collinear)
                  Map<Double, Integer> cnt = new TreeMap<>();
                  for (double k : mts) {
                        cnt.put(k, cnt.getOrDefault(k, 0) + 1);
                  }

                  long totalSum = 0;
                  for (int count : cnt.values()) {
                        // Subtract overcounted collinear intersecting cases
                        ans -= totalSum * count;
                        totalSum += count;
                  }
            }

            return (int) ans;
      }
}
