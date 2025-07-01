# 2202. Maximize the Topmost Element After K Moves

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximize-the-topmost-element-after-k-moves/description/"><strong>➥ ☢️ 2202 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums` representing a pile of elements. `nums[0]` is the topmost element.

### In a single move, you can perform one of the following actions:

1. Remove the topmost element of the pile (if the pile is not empty).
2. If you have previously removed elements, add any one of those removed elements back to the top of the pile.

### You are also given an integer `k` representing the *exact* number of moves you must perform.

### The goal is to determine the *maximum* value that can be at the top of the pile after performing exactly `k` moves. If it's impossible to have a non-empty pile after `k` moves, return -1.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [5,2,2,4,0,6], k = 4

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤
One of the ways we can end with 5 at the top of the pile after 4 moves is as follows:

- Step 1: Remove the topmost element = 5. The pile becomes [2,2,4,0,6].
- Step 2: Remove the topmost element = 2. The pile becomes [2,4,0,6].
- Step 3: Remove the topmost element = 2. The pile becomes [4,0,6].
- Step 4: Add 5 back onto the pile. The pile becomes [5,4,0,6].

Note that this is not the only way to end with 5 at the top of the pile. It can be shown that 5 is the largest answer possible after 4 moves.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2], k = 1

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤
In the first move, our only option is to pop the topmost element of the pile.
Since it is not possible to obtain a non-empty pile after one move, we return -1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 10<sup>5</sup> </br>

🔹 0 <= nums[i], k <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
