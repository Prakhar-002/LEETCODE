// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.2 Q2

// ? ⌚ Time complexity ➺ O(n log n) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

import java.util.*;

public class Solution {
      public List<List<Integer>> kSmallestPairs(int[] nums1, int[] nums2, int k) {
            // Return empty list if input arrays are empty (no pairs possible)
            if (nums1.length == 0 || nums2.length == 0) {
                  return new ArrayList<>();
            }

            // Min-heap to store triples [sum, index in nums1, index in nums2]
            // Heap is ordered by sum for efficient extraction of smallest pair sums
            PriorityQueue<int[]> heap = new PriorityQueue<>((a, b) -> a[0] - b[0]);

            // Set to keep track of visited (i,j) pairs to avoid duplicates
            Set<String> visited = new HashSet<>();

            // Initialize heap with the smallest pair (nums1[0] + nums2[0], indices 0,0)
            heap.offer(new int[]{nums1[0] + nums2[0], 0, 0});
            visited.add("0,0"); // Mark initial pair as visited

            // List to store resulting k smallest pairs
            List<List<Integer>> result = new ArrayList<>();

            // Loop until heap is empty or we have found k pairs
            while (!heap.isEmpty() && result.size() < k) {
                  // Extract the pair with the smallest sum
                  int[] current = heap.poll();
                  int sum = current[0], i = current[1], j = current[2];
                  
                  // Add the actual pair (nums1[i], nums2[j]) to result list
                  result.add(Arrays.asList(nums1[i], nums2[j]));

                  // Check if next element in nums2 array can generate new pair (i, j+1)
                  if (j + 1 < nums2.length) {
                        String nextPair = i + "," + (j + 1);
                        // If not visited before, add to visited and push to heap
                        if (!visited.contains(nextPair)) {
                              visited.add(nextPair);
                              heap.offer(new int[]{nums1[i] + nums2[j + 1], i, j + 1});
                        }
                  }

                  // Check if next element in nums1 array can generate new pair (i+1, j)
                  if (i + 1 < nums1.length) {
                        String nextPair = (i + 1) + "," + j;
                        // If not visited before, add to visited and push to heap
                        if (!visited.contains(nextPair)) {
                              visited.add(nextPair);
                              heap.offer(new int[]{nums1[i + 1] + nums2[j], i + 1, j});
                        }
                  }
            }

            // Return list of k smallest pairs found
            return result;
      }
}
