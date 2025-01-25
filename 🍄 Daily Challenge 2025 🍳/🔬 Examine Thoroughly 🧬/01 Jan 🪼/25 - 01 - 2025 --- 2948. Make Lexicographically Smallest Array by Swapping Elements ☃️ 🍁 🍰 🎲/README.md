# 2948. Make Lexicographically Smallest Array by Swapping Elements

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/make-lexicographically-smallest-array-by-swapping-elements/description/?envType=daily-question&envId=2025-01-25"><strong>➥ ☢️ 2948 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed array of positive integers `nums` and a positive integer `limit`.

### In one operation, you can choose any two indices `i` and `j` and swap `nums[i]` and `nums[j]` if `|nums[i] - nums[j]| <= limit`.

### Return *the* `lexicographically smallest array` *that can be obtained by performing the operation any number of times*.

### An array `a` is lexicographically smaller than an array `b` if in the first position where `a` and `b` differ, array `a` has an element that is less than the corresponding element in `b`. For example, the array `[2,10,3]` is lexicographically smaller than the array `[10,2,3]` because they differ at index `0` and `2 < 10`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,5,3,9,8], limit = 2

  ### 📤 `Output`  ➤  [1,3,5,8,9]

  ### 🔦 `Explanation`  ➤ Apply the operation 2 times:</br> ➺ Swap nums[1] with nums[2]. The array becomes [1,3,5,9,8]</br> ➺ Swap nums[3] with nums[4]. The array becomes [1,3,5,8,9]</br> We cannot obtain a lexicographically smaller array by applying any more operations.</br> Note that it may be possible to get the same result by doing different operations.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,7,6,18,2,1], limit = 3

  ### 📤 `Output`  ➤ [1,6,7,18,1,2]

  ### 🔦 `Explanation` ➤  Apply the operation 3 times:</br> ➺ Swap nums[1] with nums[2]. The array becomes [1,6,7,18,2,1]</br> ➺ Swap nums[0] with nums[4]. The array becomes [2,6,7,18,1,1]</br> ➺ Swap nums[0] with nums[5]. The array becomes [1,6,7,18,1,2]</br> We cannot obtain a lexicographically smaller array by applying any more operations.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [1,7,28,19,10], limit = 3

  ### 📤 `Output`  ➤ [1,7,28,19,10]

  ### 🔦 `Explanation`  ➤ [1,7,28,19,10] is the lexicographically smallest array we can obtain because we cannot apply the operation on any two indices.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **1 <= nums[i] <= 10<sup>9</sup>** </br>

🔹 **1 <= limit <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Union Find**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
