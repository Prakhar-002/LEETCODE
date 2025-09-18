//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3408

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class TaskManager {
      // Priority queue for tasks (max-heap by priority, then taskId)
      private PriorityQueue<int[]> heap;
      // Map from taskId to its priority
      private Map<Integer, Integer> taskPriority;
      // Map from taskId to its owner userId
      private Map<Integer, Integer> taskOwner;

      public TaskManager(List<List<Integer>> tasks) {
            heap = new PriorityQueue<>((a, b) -> {
                  if (a[0] != b[0])
                        return b[0] - a[0]; // Higher priority first
                  return b[1] - a[1]; // Higher taskId first
            });

            taskPriority = new HashMap<>();
            taskOwner = new HashMap<>();
            // Add initial tasks
            for (List<Integer> t : tasks) {
                  add(t.get(0), t.get(1), t.get(2));
            }
      }

      public void add(int userId, int taskId, int priority) {
            // Push new task (-priority for max-heap, -taskId for tie-break)
            heap.offer(new int[] { priority, taskId });
            taskPriority.put(taskId, priority);
            taskOwner.put(taskId, userId);
      }

      public void edit(int taskId, int newPriority) {
            // Push updated task priority
            heap.offer(new int[] { newPriority, taskId });
            taskPriority.put(taskId, newPriority);
      }

      public void rmv(int taskId) {
            // Mark the task as removed by setting priority to -1
            taskPriority.put(taskId, -1);
      }

      public int execTop() {
            // Execute the highest priority valid task
            while (!heap.isEmpty()) {
                  int[] task = heap.poll();
                  int priority = task[0], id = task[1];
                  if (taskPriority.getOrDefault(id, -2) == priority) {
                        taskPriority.put(id, -1); // Mark as executed (removed)
                        return taskOwner.getOrDefault(id, -1);
                  }
            }

            return -1;
      }
}
