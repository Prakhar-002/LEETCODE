# 1534. Count Good Triplets

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-good-triplets/description/?envType=daily-question&envId=2025-04-14"><strong>➥ ♻️ 1534 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of integers `arr`, and three integers `a`, `b`, and `c`.  The objective is to find the number of "good" triplets.

### A triplet `(arr[i], arr[j], arr[k])` is considered "good" if the following conditions are all true:

1. `0 <= i < j < k < arr.length` (i, j, and k are valid indices, and they are in increasing order).
2. `|arr[i] - arr[j]| <= a` (The absolute difference between `arr[i]` and `arr[j]` is less than or equal to `a`).
3. `|arr[j] - arr[k]| <= b` (The absolute difference between `arr[j]` and `arr[k]` is less than or equal to `b`).
4. `|arr[i] - arr[k]| <= c` (The absolute difference between `arr[i]` and `arr[k]` is less than or equal to `c`).

### Here, `|x|` represents the absolute value of `x`.

### Your task is to return the total number of good triplets in the given array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ arr = [3,0,1,1,9,7], a = 7, b = 2, c = 3

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ There are 4 good triplets: [(3,0,1), (3,0,1), (3,1,1), (0,1,1)].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [1,1,2,2,3], a = 0, b = 0, c = 1

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ No triplet satisfies all conditions.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [1, 2, 3, 4, 5], a = 1, b = 1, c = 1

  ### 📤 `Output`  ➤ 0
  
  ### 🔦 `Explanation`  ➤ Explanation are base from absolute condition which mean in all aspect it result false statemnt, with no correct possible;

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ arr = [5,4,3,2,1], a = 2, b = 2, c = 2
   
  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ (5,4,3),(5,4,2)(4,3,2)(3,2,1)(5,3,4): are following number of valid good triples

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `3 <= arr.length <= 100` </br>
🔹 `0 <= arr[i] <= 1000` </br>
🔹 `0 <= a, b, c <= 1000` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Enumeration**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/14%20-%2004%20-%202025%20---%201534.%20Count%20Good%20Triplets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201534.%20Count%20Good%20Triplets.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/14%20-%2004%20-%202025%20---%201534.%20Count%20Good%20Triplets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201534.%20Count%20Good%20Triplets.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/14%20-%2004%20-%202025%20---%201534.%20Count%20Good%20Triplets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201534.%20Count%20Good%20Triplets.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/14%20-%2004%20-%202025%20---%201534.%20Count%20Good%20Triplets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201534.%20Count%20Good%20Triplets.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/c3f93a27-013c-44ea-b277-109cdf4bf261" width = "700px" height="462px" />

</h1>
