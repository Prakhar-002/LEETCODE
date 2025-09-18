#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3408

# ? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(n)

import heapq 

class TaskManager(object):
      def __init__(self, tasks):
            # Initialize the heap (priority queue)
            self.heap = []
            # Map each taskId to its priority
            self.taskPriority = {}
            # Map each taskId to its assigned userId
            self.taskOwner = {}
            # Add all initial tasks
            for t in tasks:
                  self.add(t[0], t[1], t[2])

      def add(self, userId, taskId, priority):
            # Push the task into the heap as (-priority, -taskId)
            heapq.heappush(self.heap, (-priority, -taskId))
            # Save the priority for taskId
            self.taskPriority[taskId] = priority
            # Save the userId for taskId
            self.taskOwner[taskId] = userId

      def edit(self, taskId, newPriority):
            # Push the new priority for this taskId into the heap
            heapq.heappush(self.heap, (-newPriority, -taskId))
            # Update the priority mapping for this taskId
            self.taskPriority[taskId] = newPriority

      def rmv(self, taskId):
            # Mark the taskId as removed by setting its priority to -1
            self.taskPriority[taskId] = -1

      def execTop(self):
            # Execute the highest priority, not removed task
            while self.heap:
                  priority, taskId = heapq.heappop(self.heap)
                  p = -priority
                  id = -taskId
                  # If priority matches and the task is not removed, return owner
                  if self.taskPriority.get(id, -2) == p:
                        self.taskPriority[id] = -1
                        return self.taskOwner.get(id, -1)

            # If no valid task, return -1
            return -1
