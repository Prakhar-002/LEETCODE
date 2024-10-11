# 1942. The Number of the Smallest Unoccupied Chair

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/the-number-of-the-smallest-unoccupied-chair/description/?envType=daily-question&envId=2024-10-11"><strong>➥ ☢️ 1942 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is a party where `n` friends numbered from `0` to `n - 1` are attending. There is an `infinite` number of chairs in this party that are numbered from `0` to `infinity`. When a friend arrives at the party, they sit on the unoccupied chair with the `smallest number`.

- For example, if chairs `0`, `1`, and `5` are occupied when a friend comes, they will sit on chair number `2`.

### When a friend leaves the party, their chair becomes unoccupied at the moment they leave. If another friend arrives at that same moment, they can sit in that chair.

### You are given a `0-indexed` 2D integer array `times` where `times[i] = [arrivali, leavingi]`, indicating the arrival and leaving times of the `i-th` friend respectively, and an integer `targetFriend`. All arrival times are `distinct`.

### Return *the `chair number` that the friend numbered `targetFriend` will sit on*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ times = [[1,4],[2,3],[4,6]], targetFriend = 1

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ 

    ➺ Friend 0 arrives at time 1 and sits on chair 0.
    ➺ Friend 1 arrives at time 2 and sits on chair 1.
    ➺ Friend 1 leaves at time 3 and chair 1 becomes empty.
    ➺ Friend 0 leaves at time 4 and chair 0 becomes empty.
    ➺ Friend 2 arrives at time 4 and sits on chair 0.
    Since friend 1 sat on chair 1, we return 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ times = [[3,10],[1,5],[2,6]], targetFriend = 0

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ 

    ➺ Friend 1 arrives at time 1 and sits on chair 0.
    ➺ Friend 2 arrives at time 2 and sits on chair 1.
    ➺ Friend 0 arrives at time 3 and sits on chair 2.
    ➺ Friend 1 leaves at time 5 and chair 0 becomes empty.
    ➺ Friend 2 leaves at time 6 and chair 1 becomes empty.
    ➺ Friend 0 leaves at time 10 and chair 2 becomes empty.
    Since friend 0 sat on chair 2, we return 2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ times = [[1,4],[2,3],[4,6],[8,9],[10,11]], targetFriend = 2

  ### 📤 `Output`  ➤ 0

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == times.length`** </br>

🔹 **2 <= n <= 10<sup>4</sup>** </br>

🔹 **`times[i].length == 2`** </br>

🔹 **1 <= arrivali < leavingi <= 10<sup>5</sup>** </br>

🔹 **`0 <= targetFriend <= n - 1`** </br>

🔹 **Each arrival<sub>i</sub> time is distinct.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Heap (Priority Queue)**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
 

