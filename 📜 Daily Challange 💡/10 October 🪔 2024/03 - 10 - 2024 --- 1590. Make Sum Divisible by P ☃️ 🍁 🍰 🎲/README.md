# 1590. Make Sum Divisible by P

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/make-sum-divisible-by-p/description/?envType=daily-question&envId=2024-10-03"><strong>➥ ☢️ 1590 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of positive integers `nums`, remove the `smallest` subarray (possibly `empty`) such that the sum of the remaining elements is divisible by p. It is not allowed to remove the whole array.

### Return *the length of the smallest subarray that you need to remove, or `-1` if it's impossible*.

### A `subarray` is defined as a contiguous block of elements in the array.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  nums = [3,1,4,2], p = 6

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤  The sum of the elements in nums is 10, which is not divisible by 6. We can remove the subarray [4], and the sum of the remaining elements is 6, which is divisible by 6.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [6,3,5,2], p = 9

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤  We cannot remove a single element to get a sum divisible by 9. The best way is to remove the subarray [5,2], leaving us with [6,3] with sum 9.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,3], p = 3

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ Here the sum is 6. which is already divisible by 3. Thus we do not need to remove anything.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **1 <= nums[i] <= 10<sup>9</sup>** </br>

🔹 **1 <= p <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
