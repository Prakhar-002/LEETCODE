# 2462. Total Cost to Hire K Workers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/total-cost-to-hire-k-workers/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 2462 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `costs`, where `costs[i]` represents the cost of hiring the i<sup>th</sup> worker.

### You are also given two integers, `k` and `candidates`. The objective is to hire exactly `k` workers, following these rules:

1. You will run `k` hiring sessions and hire exactly one worker in each session.

2. In each hiring session, you must choose the worker with the lowest cost from either the first `candidates` workers or the last `candidates` workers. Break ties by selecting the worker with the smallest index.

3. If there are fewer than `candidates` workers remaining, choose the worker with the lowest cost among those remaining. Break ties using the smallest index.

4. A worker can only be chosen (hired) once.

### Your task is to return the *total* cost required to hire exactly `k` workers. Note that the indexing of workers may change during the hiring process as workers are removed from consideration.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ costs = [17,12,10,2,7,2,11,20,8], k = 3, candidates = 4

  ### 📤 `Output`  ➤ 11

  ### 🔦 `Explanation`  ➤ We hire 3 workers in total. The total cost is initially 0.

- In the first hiring round we choose the worker from [17,12,10,2,7,2,11,20,8]. The lowest cost is 2, and we break the tie by the smallest index, which is 3. The total cost = 0 + 2 = 2.
- In the second hiring round we choose the worker from [17,12,10,7,2,11,20,8]. The lowest cost is 2 (index 4). The total cost = 2 + 2 = 4.
- In the third hiring round we choose the worker from [17,12,10,7,11,20,8]. The lowest cost is 7 (index 3). The total cost = 4 + 7 = 11. Notice that the worker with index 3 was common in the first and last four workers.

The total hiring cost is 11.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ costs = [1,2,4,1], k = 3, candidates = 3

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤
We hire 3 workers in total. The total cost is initially 0.

- In the first hiring round we choose the worker from [1,2,4,1]. The lowest cost is 1, and we break the tie by the smallest index, which is 0. The total cost = 0 + 1 = 1. Notice that workers with index 1 and 2 are common in the first and last 3 workers.

- In the second hiring round we choose the worker from [2,4,1]. The lowest cost is 1 (index 2). The total cost = 1 + 1 = 2.

- In the third hiring round there are less than three candidates. We choose the worker from the remaining workers [2,4]. The lowest cost is 2 (index 0). The total cost = 2 + 2 = 4.

The total hiring cost is 4.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ costs = [3, 4, 5, 6, 7, 8], k = 2, candidates = 1

  ### 📤 `Output`  ➤ 11

  ### 🔦 `Explanation`  ➤ Step: by  remove smallest first value or smallest last number form those result we check each level iterate them 'remove as candidate value based and output final result that follows 19-value example;

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ costs = [10, 20, 30, 40, 50, 60, 70], k = 4, candidates = 2

  ### 📤 `Output`  ➤ 100

  ### 🔦 `Explanation`  ➤ After four numbers are 'remove' , iteration then final will be become 10 = is all elements return it is count: to form subset

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= costs.length <= 10<sup>5</sup> </br>
🔹 1 <= costs[i] <= 10<sup>5</sup> </br>
🔹 1 <= k, candidates <= costs.length </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/14%20Heap%20%20Priority%20%26%20Queue/Day%20%E2%9E%BA%2052%20%F0%9F%AA%BB%202462.%20Total%20Cost%20to%20Hire%20K%20Workers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202462.%20Total%20Cost%20to%20Hi.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/14%20Heap%20%20Priority%20%26%20Queue/Day%20%E2%9E%BA%2052%20%F0%9F%AA%BB%202462.%20Total%20Cost%20to%20Hire%20K%20Workers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202462.%20Total%20Cost%20to%20Hire.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/14%20Heap%20%20Priority%20%26%20Queue/Day%20%E2%9E%BA%2052%20%F0%9F%AA%BB%202462.%20Total%20Cost%20to%20Hire%20K%20Workers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202462.%20Total%20Cost%20to%20Hi.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/14%20Heap%20%20Priority%20%26%20Queue/Day%20%E2%9E%BA%2052%20%F0%9F%AA%BB%202462.%20Total%20Cost%20to%20Hire%20K%20Workers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202462.%20Total%20Cost%20t.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/e9f0bdac-3e2f-43d7-bb7c-ae77237abd02" width = "700px" height="462px" />

</h1>
