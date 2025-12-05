//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3625

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

var countTrapezoids = function (points) {
      const n = points.length;
      const INF = 1e9 + 7;  // Special value for vertical lines (infinite slope)

      // slopeToIntercept: group parallel lines (same slope, different intercepts)
      const slopeToIntercept = new Map();
      // midToSlope: group lines intersecting at same midpoint (same mid, different slopes)
      const midToSlope = new Map();

      let ans = 0;  // Final count of valid trapezoids

      // Generate all possible line segments O(n²)
      for (let i = 0; i < n; i++) {
            const [x1, y1] = points[i];
            for (let j = i + 1; j < n; j++) {
                  const [x2, y2] = points[j];
                  const dx = x1 - x2;
                  const dy = y1 - y2;

                  let k, b;  // slope (k), y-intercept (b)

                  if (x2 === x1) {  // Vertical line: infinite slope
                        k = INF;
                        b = x1;       // Use x-coordinate as identifier
                  } else {
                        k = (y2 - y1) / (x2 - x1);  // Slope m = dy/dx
                        b = (y1 * dx - x1 * dy) / dx;  // y-intercept b
                  }

                  // Midpoint identifier (scaled to avoid floating point precision issues)
                  const mid = (x1 + x2) * 10000 + (y1 + y2);

                  // Initialize arrays if not exist
                  if (!slopeToIntercept.has(k)) {
                        slopeToIntercept.set(k, []);
                  }
                  if (!midToSlope.has(mid)) {
                        midToSlope.set(mid, []);
                  }

                  // Group parallel lines and intersecting lines
                  slopeToIntercept.get(k).push(b);
                  midToSlope.get(mid).push(k);
            }
      }

      // PHASE 1: Count trapezoids from PARALLEL line pairs (+)
      // Two parallel lines (same slope) + two transversals = trapezoid top/bottom
      for (const sti of slopeToIntercept.values()) {
            if (sti.length === 1) continue;  // Need ≥2 parallel lines

            // Group parallel lines by intercept (same intercept = collinear)
            const cnt = new Map();
            for (const bVal of sti) {
                  cnt.set(bVal, (cnt.get(bVal) || 0) + 1);
            }

            let totalSum = 0;
            for (const count of cnt.values()) {
                  // Pairs of parallel lines with different intercepts form trapezoid sides
                  ans += totalSum * count;
                  totalSum += count;
            }
      }

      // PHASE 2: Subtract invalid cases from INTERSECTING line pairs (-)
      // Lines intersecting at same midpoint but collinear overcounted trapezoids
      for (const mts of midToSlope.values()) {
            if (mts.length === 1) continue;

            // Group by slope (same slope + same midpoint = collinear)
            const cnt = new Map();
            for (const kVal of mts) {
                  cnt.set(kVal, (cnt.get(kVal) || 0) + 1);
            }

            let totalSum = 0;
            for (const count of cnt.values()) {
                  // Subtract invalid trapezoids (collinear intersecting lines)
                  ans -= totalSum * count;
                  totalSum += count;
            }
      }

      return ans;
};
