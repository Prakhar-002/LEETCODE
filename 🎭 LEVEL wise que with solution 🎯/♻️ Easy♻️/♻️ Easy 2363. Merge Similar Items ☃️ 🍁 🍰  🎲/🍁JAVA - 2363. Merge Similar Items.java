// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2363

// ? ⌚ Time complexity ➺ O(n + m + k log k) 👉🏻 n = len(items1) m = len(items2)

// ? 🧺 Space complexity ➺ O(n + m) 👉🏻 k = No.of unique value

class Solution {
      public List<List<Integer>> mergeSimilarItems(int[][] items1, int[][] items2) {
            // Map to store weight sums for each value
            Map<Integer, Integer> val_to_wei = new TreeMap<>();

            // Process the first list and add weights to corresponding values
            for (int[] item : items1) {
                  int value = item[0];
                  int weight = item[1];
                  val_to_wei.put(value, val_to_wei.getOrDefault(value, 0) + weight);
            }

            // Process the second list and add weights to corresponding values
            for (int[] item : items2) {
                  int value = item[0];
                  int weight = item[1];
                  val_to_wei.put(value, val_to_wei.getOrDefault(value, 0) + weight);
            }

            // This will hold the final result list
            List<List<Integer>> ret = new ArrayList<>();

            // Iterate through the map (sorted order due to TreeMap) and add to result
            for (Map.Entry<Integer, Integer> entry : val_to_wei.entrySet()) {
                  ret.add(Arrays.asList(entry.getKey(), entry.getValue()));
            }

            // Return the merged and sorted list of items
            return ret;
      }
}
