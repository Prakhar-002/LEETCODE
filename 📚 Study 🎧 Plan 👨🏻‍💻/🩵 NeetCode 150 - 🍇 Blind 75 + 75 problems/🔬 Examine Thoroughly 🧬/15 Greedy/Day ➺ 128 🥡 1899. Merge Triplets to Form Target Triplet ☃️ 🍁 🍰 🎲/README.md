# 1899. Merge Triplets to Form Target Triplet

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/merge-triplets-to-form-target-triplet/description/"><strong>➥ ☢️ 1899 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A triplet is an array of three integers. You are given a 2D integer array `triplets`, where `triplets[i] = [ai, bi, ci]` describes the ith triplet. You are also given an integer array `target = [x, y, z]` that describes the triplet you want to obtain.

### To obtain `target`, you may apply the following operation on `triplets` any number of times (possibly zero):

- Choose two indices (0-indexed) `i` and `j` (`i != j`) and update `triplets[j]` to become `[max(ai, aj), max(bi, bj), max(ci, cj)]`.
  - For example, if `triplets[i] = [2, 5, 3]` and `triplets[j] = [1, 7, 5]`, `triplets[j]` will be updated to `[max(2, 1), max(5, 7), max(3, 5)] = [2, 7, 5]`.

### Return `true` if it is possible to obtain the target triplet `[x, y, z]` as an element of `triplets`, or `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `triplets = [[2,5,3],[1,8,4],[1,7,5]], target = [2,7,5]`

  ### 📤 `Output`  ➤ `true`

  ### 🔦 `Explanation`  ➤ ➺

  - Perform the following operations:
    - Choose the first and last triplets `[[2,5,3],[1,8,4],[1,7,5]]`. Update the last triplet to be `[max(2,1), max(5,7), max(3,5)] = [2,7,5]`. `triplets = [[2,5,3],[1,8,4],[2,7,5]]`
  - The target triplet `[2,7,5]` is now an element of `triplets`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `triplets = [[3,4,5],[4,5,6]], target = [3,2,5]`

  ### 📤 `Output`  ➤ `false`

  ### 🔦 `Explanation`  ➤ ➺

  - It is impossible to have `[3,2,5]` as an element because there is no 2 in any of the triplets.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `triplets = [[2,5,3],[2,3,4],[1,2,5],[5,2,3]], target = [5,5,5]`

  ### 📤 `Output`  ➤ `true`

  ### 🔦 `Explanation`  ➤ ➺

  - Perform the following operations:
    - Choose the first and third triplets `[[2,5,3],[2,3,4],[1,2,5],[5,2,3]]`. Update the third triplet to be `[max(2,1), max(5,2), max(3,5)] = [2,5,5]`. `triplets = [[2,5,3],[2,3,4],[2,5,5],[5,2,3]]`.
    - Choose the third and fourth triplets `[[2,5,3],[2,3,4],[2,5,5],[5,2,3]]`. Update the fourth triplet to be `[max(2,5), max(5,2), max(5,3)] = [5,5,5]`. `triplets = [[2,5,3],[2,3,4],[2,5,5],[5,5,5]]`.
  - The target triplet `[5,5,5]` is now an element of `triplets`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= triplets.length <= 10^5` </br>
🔹 `triplets[i].length == target.length == 3` </br>
🔹 `1 <= ai, bi, ci, x, y, z <= 1000` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Greedy** </br>

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
