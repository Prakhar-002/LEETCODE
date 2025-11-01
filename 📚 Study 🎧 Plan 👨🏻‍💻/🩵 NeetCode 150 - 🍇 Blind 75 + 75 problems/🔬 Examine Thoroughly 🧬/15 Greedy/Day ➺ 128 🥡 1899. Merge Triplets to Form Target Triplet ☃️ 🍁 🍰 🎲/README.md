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

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Greedy/Day%20%E2%9E%BA%20128%20%F0%9F%A5%A1%201899.%20Merge%20Triplets%20to%20Form%20Target%20Triplet%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201899.%20Merge%20Triplets%20to%20F.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Greedy/Day%20%E2%9E%BA%20128%20%F0%9F%A5%A1%201899.%20Merge%20Triplets%20to%20Form%20Target%20Triplet%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201899.%20Merge%20Triplets%20to%20For.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Greedy/Day%20%E2%9E%BA%20128%20%F0%9F%A5%A1%201899.%20Merge%20Triplets%20to%20Form%20Target%20Triplet%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201899.%20Merge%20Triplets%20to%20F.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Greedy/Day%20%E2%9E%BA%20128%20%F0%9F%A5%A1%201899.%20Merge%20Triplets%20to%20Form%20Target%20Triplet%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201899.%20Merge%20Triplets%20.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/6a9a998d-855c-4ad5-b537-ec16f932dd52" width = "700px" height="462px" />

</h1>
