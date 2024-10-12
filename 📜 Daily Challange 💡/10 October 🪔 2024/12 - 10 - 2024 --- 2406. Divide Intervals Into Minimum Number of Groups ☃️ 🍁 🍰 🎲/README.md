# 2406. Divide Intervals Into Minimum Number of Groups

</br>

<h2 align="center">

<a href="https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/description/?envType=daily-question&envId=2024-10-12"><strong>➥ ☢️ 2406 Leetcode Medium ☢️ </strong></a>

</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 2D integer array `intervals` where `intervals[i] = [left-i, right-i]` represents the `inclusive` interval `[left-i, right-i]`.

### You have to divide the intervals into one or more `groups` such that each interval is in `exactly` one group, and no two intervals that are in the same group `intersect` each other.

### Return *the `minimum` number of groups you need to make*.

### Two intervals `intersect` if there is at least one common number between them. For example, the intervals `[1, 5]` and `[5, 8]` intersect.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ intervals = [[5,10],[6,8],[1,5],[2,3],[1,10]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ We can divide the intervals into the following groups:

    ➺ Group 1: [1, 5], [6, 8].
    ➺ Group 2: [2, 3], [5, 10].
    ➺ Group 3: [1, 10].
    It can be proven that it is not possible to divide the intervals into fewer than 3 groups.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ intervals = [[1,3],[5,6],[8,10],[11,13]]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ None of the intervals overlap, so we can put all of them in one group.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ [[1,5],[5,8],[2,10],[17,20]]

  ### 📤 `Output`  ➤ 3

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= intervals.length <= 10<sup>5</sup>** </br>

🔹 **`intervals[i].length == 2`** </br>

🔹 **1 <= left<sub>i</sub> <= right<sub>i</sub> <= 10<sup>6</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>
🔸 **Greedy**  </br>
🔸 **Sorting**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/12%20-%2010%20-%202024%20---%202406.%20Divide%20Intervals%20Into%20Minimum%20Number%20of%20Groups%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202406.%20Divide%20Intervals%20Into%20Minimum%20Number%20of%20Groups.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/12%20-%2010%20-%202024%20---%202406.%20Divide%20Intervals%20Into%20Minimum%20Number%20of%20Groups%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202406.%20Divide%20Intervals%20Into%20Minimum%20Number%20of%20Groups.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/12%20-%2010%20-%202024%20---%202406.%20Divide%20Intervals%20Into%20Minimum%20Number%20of%20Groups%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202406.%20Divide%20Intervals%20Into%20Minimum%20Number%20of%20Groups.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/12%20-%2010%20-%202024%20---%202406.%20Divide%20Intervals%20Into%20Minimum%20Number%20of%20Groups%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202406.%20Divide%20Intervals%20Into%20Minimum%20Number%20of%20Groups.js) |
