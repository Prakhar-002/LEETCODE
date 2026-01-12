//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L5 Q2

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class RangeFreqQuery {
      private Map<Integer, List<Integer>> map;

      public RangeFreqQuery(int[] arr) {
            /**
             * Preprocess: value → sorted list of indices
             * Time: O(N), Space: O(N)
             */
            map = new HashMap<>();
            for (int i = 0; i < arr.length; i++) {
                  map.putIfAbsent(arr[i], new ArrayList<>());
                  map.get(arr[i]).add(i);
            }
      }

      public int query(int left, int right, int value) {
            /**
             * Count occurrences of value in arr[left:right+1]
             * Time: O(log N) via binary search
             */
            if (!map.containsKey(value)) {
                  return 0;
            }

            List<Integer> indices = map.get(value);
            // lower_bound equivalent: first index >= left
            int start = lowerBound(indices, left);
            // lower_bound equivalent: first index >= right+1 (exclusive)
            int end = lowerBound(indices, right + 1);
            return end - start;
      }

      private int lowerBound(List<Integer> list, int target) {
            int l = 0, r = list.size();
            while (l < r) {
                  int mid = l + (r - l) / 2;
                  if (list.get(mid) < target) {
                        l = mid + 1;
                  } else {
                        r = mid;
                  }
            }
            return l;
      }
}
