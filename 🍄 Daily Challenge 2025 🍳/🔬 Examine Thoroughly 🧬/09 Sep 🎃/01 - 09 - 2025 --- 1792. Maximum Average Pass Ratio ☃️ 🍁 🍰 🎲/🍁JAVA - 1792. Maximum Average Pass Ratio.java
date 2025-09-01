//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1792

//? ⌚ Time complexity ➺ O(k * log(n) + n) 👉🏻  n = len(classes)

//? 🧺 Space complexity ➺ O(n)

import java.util.PriorityQueue;

class Solution {

      // ----------------------------------------------------------
      // Helper class to represent each class's state:
      // - current gain from adding a passing student
      // - number of passes and total students
      // ----------------------------------------------------------
      static class ClassInfo {
            double gain; // Current gain (priority for max heap)
            int passes;
            int total;

            ClassInfo(int passes, int total) {
                  this.passes = passes;
                  this.total = total;
                  this.gain = calcGain(passes, total);
            }
      }

      // ----------------------------------------------------------
      // Calculate gain from adding one passing student:
      // How much does passing ratio improve by adding a passing student?
      // ----------------------------------------------------------
      private static double calcGain(int passes, int total) {
            return ((double) (passes + 1)) / (total + 1) - ((double) passes) / total;
      }

      // ----------------------------------------------------------
      // Build a max heap of classes sorted by gain descending
      // ----------------------------------------------------------
      private PriorityQueue<ClassInfo> buildHeap(int[][] classes) {
            PriorityQueue<ClassInfo> heap = new PriorityQueue<>(
                        (a, b) -> Double.compare(b.gain, a.gain) // max heap by gain
            );
            for (int[] c : classes) {
                  heap.offer(new ClassInfo(c[0], c[1]));
            }
            return heap;
      }

      // ----------------------------------------------------------
      // Assign extra students greedily, always to the class with highest gain
      // Then recalculate gain and reinsert updated class state to heap
      // ----------------------------------------------------------
      private double distributeStudents(PriorityQueue<ClassInfo> heap, int extraStudents, int totalClasses) {
            for (int i = 0; i < extraStudents; i++) {
                  ClassInfo top = heap.poll();
                  top.passes++;
                  top.total++;
                  top.gain = calcGain(top.passes, top.total);
                  heap.offer(top);
            }

            // Calculate average pass ratio across all classes after allocation
            double totalRatio = 0;
            while (!heap.isEmpty()) {
                  ClassInfo ci = heap.poll();
                  totalRatio += (double) ci.passes / ci.total;
            }
            return totalRatio / totalClasses;
      }

      // ----------------------------------------------------------
      // Public method to calculate max average pass ratio
      // ----------------------------------------------------------
      public double maxAverageRatio(int[][] classes, int extraStudents) {
            PriorityQueue<ClassInfo> heap = buildHeap(classes);
            return distributeStudents(heap, extraStudents, classes.length);
      }
}
