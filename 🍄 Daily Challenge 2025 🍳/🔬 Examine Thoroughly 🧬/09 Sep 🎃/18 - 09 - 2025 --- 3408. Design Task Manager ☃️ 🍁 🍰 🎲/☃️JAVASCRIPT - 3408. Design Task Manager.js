//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3408

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var TaskManager = function (tasks) {
      //      Map to store each task's [userId, priority]
      this.tasks = new Map();

      //      Max-heap priority queue: sorts by highest priority, if tie use higher taskId
      this.queue = new PriorityQueue((a, b) => {
            if (a[1] !== b[1]) return b[1] - a[1];           //      Higher priority first
            return b[0] - a[0];                              //      Higher taskId for equal priority
      });

      //      Add initial tasks to TaskManager
      for (const [userId, taskId, prio] of tasks) {
            this.add(userId, taskId, prio);
      }
};

TaskManager.prototype.add = function (userId, taskId, priority) {
      //      Add or update taskId with its userId and priority
      this.tasks.set(taskId, [userId, priority]);
      //      Push [taskId, priority] into the queue for ordering
      this.queue.enqueue([taskId, priority]);
};

TaskManager.prototype.edit = function (taskId, newPriority) {
      //      Retrieve userId to update priority
      const [userId] = this.tasks.get(taskId);
      //      Update the entry by using add method
      this.add(userId, taskId, newPriority);
};

TaskManager.prototype.rmv = function (taskId) {
      //      Remove taskId from tasks list
      this.tasks.delete(taskId);
};

TaskManager.prototype.execTop = function () {
      //      If no tasks, clear and return -1
      if (this.queue.isEmpty()) {
            this.tasks.clear();
            return -1;
      }

      //      Try to find the valid highest priority task
      let [taskId, prio] = this.queue.dequeue();

      //      Skip outdated or removed tasks in the queue
      while (!this.queue.isEmpty() && (!this.tasks.has(taskId) || prio !== this.tasks.get(taskId)[1])) {
            [taskId, prio] = this.queue.dequeue();
      }

      //      If taskId is valid and priority matches, remove and return userId
      if (this.tasks.has(taskId) && prio === this.tasks.get(taskId)[1]) {
            const userId = this.tasks.get(taskId)[0];
            this.tasks.delete(taskId);
            return userId;
      }

      //      If no valid task found, clear all and return -1
      this.tasks.clear();
      return -1;
};
