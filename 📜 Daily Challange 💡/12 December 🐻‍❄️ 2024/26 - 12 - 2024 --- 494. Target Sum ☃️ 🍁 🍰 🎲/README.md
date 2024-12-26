# 494. Target Sum

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/target-sum/description/?envType=daily-question&envId=2024-12-26"><strong>➥ ☢️ 494 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` and an integer `target`.

### You want to build an expression out of nums by adding one of the symbols `'+'` and `'-'` before each integer in nums and then concatenate all the integers.

- For example, if `nums = [2, 1]`, you can add a `'+'` before `2` and a `'-'` before `1` and concatenate them to build the expression `"+2-1"`.

### Return *the number of different `expressions` that you can build*, which evaluates to `target`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,1,1,1,1], target = 3

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ There are 5 ways to assign symbols to make the sum of nums be target 3.

    -1 + 1 + 1 + 1 + 1 = 3
    +1 - 1 + 1 + 1 + 1 = 3
    +1 + 1 - 1 + 1 + 1 = 3
    +1 + 1 + 1 - 1 + 1 = 3
    +1 + 1 + 1 + 1 - 1 = 3

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1], target = 1

  ### 📤 `Output`  ➤ 1

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [1,2,3,4,5], target = 7

  ### 📤 `Output`  ➤ 2

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 20`** </br>

🔹 **`0 <= nums[i] <= 1000`** </br>

🔹 **`0 <= sum(nums[i]) <= 1000`** </br>

🔹 **`-1000 <= target <= 1000`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Backtracking**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
