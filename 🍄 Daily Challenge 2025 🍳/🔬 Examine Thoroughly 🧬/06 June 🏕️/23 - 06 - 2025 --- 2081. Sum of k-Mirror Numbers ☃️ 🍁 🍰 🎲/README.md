# 2081. Sum of k-Mirror Numbers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/sum-of-k-mirror-numbers/description/?envType=daily-question&envId=2025-06-23"><strong>➥ 🫀 2081 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A *k-mirror number* is defined as a positive integer (without leading zeros) that reads the same both forward and backward in both base-10 and base-k.

For example:
- 9 is a 2-mirror number because in base-10 it's 9, and in base-2 it's 1001 (both palindromes).
- 4 is *not* a 2-mirror number because in base-2 it's 100, which is not a palindrome.

Given the base `k` and a number `n`, return the sum of the `n` smallest k-mirror numbers.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ k = 2, n = 5

  ### 📤 `Output`  ➤ 25

  ### 🔦 `Explanation`  ➤
The 5 smallest 2-mirror numbers and their representations in base-2 are listed as follows:
  base-10    base-2
    1          1
    3          11
    5          101
    7          111
    9          1001

Their sum = 1 + 3 + 5 + 7 + 9 = 25.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ k = 3, n = 7

  ### 📤 `Output`  ➤ 499

  ### 🔦 `Explanation`  ➤
The 7 smallest 3-mirror numbers are and their representations in base-3 are listed as follows:

  base-10    base-3
    1          1
    2          2
    4          11
    8          22
    121        11111
    151        12121
    212        21212
Their sum = 1 + 2 + 4 + 8 + 121 + 151 + 212 = 499.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ k = 7, n = 17

  ### 📤 `Output`  ➤ 20379000

  ### 🔦 `Explanation`  ➤ The 17 smallest 7-mirror numbers are:

1, 2, 3, 4, 5, 6, 8, 121, 171, 242, 292, 16561, 65656, 2137312, 4602064, 6597956, 6958596


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= k <= 9 </br>

🔹 1 <= n <= 30 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>

🔸 **Enumeration**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/23%20-%2006%20-%202025%20---%202081.%20Sum%20of%20k-Mirror%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202081.%20Sum%20of%20k-Mirror%20Numbers.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/23%20-%2006%20-%202025%20---%202081.%20Sum%20of%20k-Mirror%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202081.%20Sum%20of%20k-Mirror%20Numbers.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/23%20-%2006%20-%202025%20---%202081.%20Sum%20of%20k-Mirror%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202081.%20Sum%20of%20k-Mirror%20Numbers.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/23%20-%2006%20-%202025%20---%202081.%20Sum%20of%20k-Mirror%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202081.%20Sum%20of%20k-Mirror%20Numbers.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/7523e583-0937-4290-8239-95cb5baa0833" width = "700px" height="462px" />

</h1>
