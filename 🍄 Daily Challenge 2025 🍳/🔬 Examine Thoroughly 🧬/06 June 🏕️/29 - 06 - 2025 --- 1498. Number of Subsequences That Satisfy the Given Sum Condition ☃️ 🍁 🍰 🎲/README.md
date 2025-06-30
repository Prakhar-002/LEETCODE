# 1498. Number of Subsequences That Satisfy the Given Sum Condition

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/?envType=daily-question&envId=2025-06-29"><strong>➥ ☢️ 1498 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` and an integer `target`.

### Your objective is to return the number of *non-empty* subsequences of `nums` that satisfy the following condition:

- The sum of the *minimum* element and the *maximum* element in the subsequence is less than or equal to `target`.

### Since the answer may be too large, return it modulo 10<sup>9</sup> + 7 (which is 1000000007).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [3,5,6,7], target = 9

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤
There are 4 subsequences that satisfy the condition:

[3] -> Min value + max value <= target (3 + 3 <= 9)
[3,5] -> (3 + 5 <= 9)
[3,5,6] -> (3 + 6 <= 9)
[3,6] -> (3 + 6 <= 9)

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3,3,6,8], target = 10

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation` ➤
There are 6 subsequences that satisfy the condition. (nums can have repeated numbers).

[3],  [3],  [3,3],  [3,6],  [3,6],  [3,3,6]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,3,3,4,6,7], target = 12

  ### 📤 `Output`  ➤ 61

  ### 🔦 `Explanation` ➤ 
There are 63 non-empty subsequences, two of them do not satisfy the condition ([6,7], [7]).

Number of valid subsequences (63 - 2 = 61).

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 10<sup>5</sup> </br>

🔹 1 <= nums[i] <= 10<sup>6</sup> </br>

🔹 1 <= target <= 10<sup>6</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Two Pointers**  </br>

🔸 **Binary Search**  </br>

🔸 **Sorting**  </br>

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
