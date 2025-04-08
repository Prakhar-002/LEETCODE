# 3396. Minimum Number of Operations to Make Elements in Array Distinct

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/description/?envType=daily-question&envId=2025-04-08"><strong>➥ ♻️ 3396 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`. Your task is to ensure that all the elements in the array are distinct (unique). To achieve this, you can perform the following operation any number of times:

- Remove the first 3 elements from the beginning of the array.  If the array has fewer than 3 elements, remove all of the remaining elements.

Note that an empty array is automatically considered to have distinct elements. You need to return the *minimum* number of operations required to make all the elements in the array distinct.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,3,4,2,3,3,5,7]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤</br></br>In the first operation, the first 3 elements are removed, resulting in the array [4, 2, 3, 3, 5, 7].</br></br>In the second operation, the next 3 elements are removed, resulting in the array [3, 5, 7], which has distinct elements.</br></br>Therefore, the answer is 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [4,5,6,4,4]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ In the first operation, the first 3 elements are removed, resulting in the array [4, 4].</br></br>In the second operation, all remaining elements are removed, resulting in an empty array.</br></br>Therefore, the answer is 2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [6,7,8,9]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ The array already contains distinct elements. Therefore, the answer is 0.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ nums = [1, 1, 2, 2, 3, 3]

   ### 📤 `Output`  ➤ 2

   ### 🔦 `Explanation`  ➤ After 2 iterations value become unique on last side with having remove 3 value per time (2 is final ans of 2 iterations).

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length <= 100` </br>
🔹 `1 <= nums[i] <= 100` </br>

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
