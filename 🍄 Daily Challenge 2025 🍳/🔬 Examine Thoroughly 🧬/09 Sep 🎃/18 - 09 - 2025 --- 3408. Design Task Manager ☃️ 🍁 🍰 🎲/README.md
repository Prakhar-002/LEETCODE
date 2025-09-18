# 3408. Design Task Manager

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/design-task-manager/description/?envType=daily-question&envId=2025-09-18"><strong>➥ ☢️ 3408 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is a task management system that allows users to manage their tasks, each associated with a priority. The system should efficiently handle adding, modifying, executing, and removing tasks.

### Implement the TaskManager class:

- `TaskManager(vector<vector<int>>& tasks)` initializes the task manager with a list of user-task-priority triples. Each element in the input list is of the form `[userId, taskId, priority]`, which adds a task to the specified user with the given priority.

- `void add(int userId, int taskId, int priority)` adds a task with the specified `taskId` and `priority` to the user with `userId`. It is guaranteed that `taskId` does not exist in the system.

- `void edit(int taskId, int newPriority)` updates the priority of the existing `taskId` to `newPriority`. It is guaranteed that `taskId` exists in the system.

- `void rmv(int taskId)` removes the task identified by `taskId` from the system. It is guaranteed that `taskId` exists in the system.

- `int execTop()` executes the task with the highest priority across all users. If there are multiple tasks with the same highest priority, execute the one with the highest `taskId`. After executing, the `taskId` is removed from the system. Return the `userId` associated with the executed task. If no tasks are available, return -1.

### Note that a user may be assigned multiple tasks.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `["TaskManager", "add", "edit", "execTop", "rmv", "add", "execTop"]

```PY
  [
    [
      [[1, 101, 10], [2, 102, 20], [3, 103, 15]]
    ], 
    [4, 104, 5], 
    [102, 8], 
    [], 
    [101], 
    [5, 105, 15], 
    []
  ]`
```

  ### 📤 `Output`  ➤ `[null, null, null, 3, null, null, 5]`

  ### 🔦 `Explanation`  ➤ ➺

```JS
TaskManager taskManager = new TaskManager([[1, 101, 10], [2, 102, 20], [3, 103, 15]]); 
                             // Initializes with three tasks for Users 1, 2, and 3.
taskManager.add(4, 104, 5);  // Adds task 104 with priority 5 for User 4.
taskManager.edit(102, 8);    // Updates priority of task 102 to 8.
taskManager.execTop();       // return 3. Executes task 103 for User 3.
taskManager.rmv(101);        // Removes task 101 from the system.
taskManager.add(5, 105, 15); // Adds task 105 with priority 15 for User 5.
taskManager.execTop();       // return 5. Executes task 105 for User 5.
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= tasks.length <= 10^5` </br>
🔹 `0 <= userId <= 10^5` </br>
🔹 `0 <= taskId <= 10^5` </br>
🔹 `0 <= priority <= 10^9` </br>
🔹 `0 <= newPriority <= 10^9` </br>
🔹 At most `2 * 10^5` calls will be made in total to `add`, `edit`, `rmv`, and `execTop` methods. </br>
🔹 The input is generated such that `taskId` will be valid. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table** </br>
🔸 **Design** </br>
🔸 **Heap (Priority Queue)** </br>
🔸 **Ordered Set** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
