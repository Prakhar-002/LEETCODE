# 3375. Minimum Operations to Make Array Values Equal to K

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k/description/?envType=daily-question&envId=2025-04-09"><strong>➥ ♻️ 3375 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` and an integer `k`.  An integer `h` is considered *valid* if all values in the array that are strictly greater than `h` are identical (equal to the same value).

### For example, if `nums = [10, 8, 10, 8]`, a valid integer is `h = 9` because all `nums[i] > 9` are equal to 10. However, `h = 5` is *not* a valid integer because the values greater than 5 are 10 and 8, which are not equal.

### You are allowed to perform the following operation on `nums` repeatedly:

1. Select an integer `h` that is valid for the current values in `nums`.

2. For each index `i` where `nums[i] > h`, set `nums[i]` to `h` (i.e., `nums[i] = h`).

### Your goal is to return the *minimum* number of operations required to make every element in `nums` equal to `k`.  If it is impossible to make all elements equal to `k`, return -1.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [5,2,5,4,5], k = 2

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ The operations can be performed in order using valid integers 4 and then 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,1,2], k = 2

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤ It is impossible to make all the values equal to 2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [9,7,5,3], k = 1

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ The operations can be performed using valid integers in the order 7, 5, 3, and 1.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [4, 5, 6, 7, 1, 1, 2, 2] k = 2
   
  ### 📤 `Output`  ➤ -1
   
  ### 🔦 `Explanation`  ➤ Value never became same during any operation due to condition to compare . that mean operation impossible for 2nd Example;

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length <= 100` </br>
🔹 `1 <= nums[i] <= 100` </br>
🔹 `1 <= k <= 100` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>

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
