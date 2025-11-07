//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2528

//? ⌚ Time complexity ➺ O(n lod D) 👉🏻  n = len(stations)

//? 🧺 Space complexity ➺ O(n)

import java.util.Arrays;

class Solution {

      public long maxPower(int[] stations, int r, int k) {
            int n = stations.length;
            // cnt array implements difference array technique for range updates
            long[] cnt = new long[n + 1];

            // Construct the difference array based on initial station powers and radius r
            for (int i = 0; i < n; i++) {
                  int left = Math.max(0, i - r); // Left boundary for influence range
                  int right = Math.min(n, i + r + 1); // Right boundary (+1 for exclusive end)
                  cnt[left] += stations[i]; // Add power at start of range
                  cnt[right] -= stations[i]; // Remove power after end of range
            }

            // Initialize binary search bounds:
            // lo: minimum power among stations
            // hi: sum of all powers plus k (max achievable power)
            long lo = Arrays.stream(stations).min().getAsInt();
            long hi = Arrays.stream(stations).asLongStream().sum() + k;
            long res = 0;

            // Binary search to find maximum minimum power achievable in all cities
            while (lo <= hi) {
                  long mid = lo + (hi - lo) / 2;
                  if (check(cnt, mid, r, k)) {
                        res = mid; // mid is achievable, try for higher
                        lo = mid + 1;
                  } else {
                        hi = mid - 1; // mid not achievable, try lower
                  }
            }
            return res;
      }

      // Check whether minimum power val can be attained using k added stations
      private boolean check(long[] cnt, long val, int r, int k) {
            int n = cnt.length - 1;
            long[] diff = cnt.clone(); // Clone to simulate adding stations
            long sum = 0; // Running sum of power at each city
            long remaining = k; // Stations left to add

            for (int i = 0; i < n; i++) {
                  sum += diff[i]; // Update power at city i using difference array
                  if (sum < val) {
                        long add = val - sum; // Additional stations needed at i
                        if (remaining < add) { // If not enough stations left, fail check
                              return false;
                        }
                        remaining -= add; // Use needed stations
                        int end = Math.min(n, i + 2 * r + 1); // Update point where influence ends
                        diff[end] -= add; // Subtract added stations influence after end
                        sum += add; // Update current city's power
                  }
            }
            return true; // Successfully achieved minimum power val for all cities
      }
}
