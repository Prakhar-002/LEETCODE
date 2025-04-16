# 2537. Count the Number of Good Subarrays

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-the-number-of-good-subarrays/description/?envType=daily-question&envId=2025-04-16"><strong>➥ ☢️ 2537 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` and an integer `k`. Your task is to determine the number of "good" subarrays within `nums`.

### A subarray, denoted as `arr`, is considered "good" if it contains at least `k` pairs of indices `(i, j)` such that `i < j` and `arr[i] == arr[j]`.

### Recall that a subarray is a contiguous (connected) non-empty sequence of elements extracted from within an array.

### Return the total number of good subarrays found within the input array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,1,1,1,1], k = 10

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ The only good subarray is the array nums itself.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3,1,4,3,2,2,4], k = 2

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ There are 4 different good subarrays:

- [3,1,4,3,2,2] that has 2 pairs.

- [3,1,4,3,2,2,4] that has 3 pairs.

- [1,4,3,2,2,4] that has 2 pairs.

- [4,3,2,2,4] that has 2 pairs.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1, 2, 3, 1, 2, 3], k = 1

  ### 📤 `Output`  ➤ 15

  ### 🔦 `Explanation`  ➤: The number pairs would follow as total value of those are following: . and so on iteration count by value and equal value has pairs then answe count with `15`

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [5, 5, 5, 5], k = 5
  
  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ All elements become "5", with pairs to becomes  5-5, . and has '4' pairs only one value, we return one. and  it requires minimum five value and its subset pair result from one possible case so that will fit from this rule

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 10<sup>5</sup> </br>
🔹 1 <= nums[i], k <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Sliding Window**  </br>

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
