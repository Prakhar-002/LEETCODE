# 757. Set Intersection Size At Least Two

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/set-intersection-size-at-least-two/description/?envType=daily-question&envId=2025-11-20"><strong>➥ 🫀 757 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 2D integer array `intervals` where `intervals[i] = [starti, endi]` represents all the integers from `starti` to `endi` inclusively.

### A containing set is an array `nums` where each interval from `intervals` has at least two integers in `nums`.

### For example, if `intervals = [[1,3], [3,7], [8,9]]`, then `[1,2,4,7,8,9]` and `[2,3,4,8,9]` are containing sets.

### Return the minimum possible size of a containing set.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ intervals = [[1,3],[3,7],[8,9]]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ let nums = [2, 3, 4, 8, 9]. It can be shown that there cannot be any containing array of size 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ intervals = [[1,3],[1,4],[2,5],[3,5]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ let nums = [2, 3, 4]. It can be shown that there cannot be any containing array of size 2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ intervals = [[1,2],[2,3],[2,4],[4,5]]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ let nums = [1, 2, 3, 4, 5]. It can be shown that there cannot be any containing array of size 4.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= intervals.length <= 3000 </br>
🔹 intervals[i].length == 2 </br>
🔹 0 <= starti < endi <= 108 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Greedy** </br>
🔸 **Sorting** </br>

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

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
