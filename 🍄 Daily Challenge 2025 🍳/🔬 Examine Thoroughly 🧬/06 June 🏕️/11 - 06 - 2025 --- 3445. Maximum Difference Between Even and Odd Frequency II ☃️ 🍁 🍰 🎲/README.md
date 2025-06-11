# 3445. Maximum Difference Between Even and Odd Frequency II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-ii/description/?envType=daily-question&envId=2025-06-11"><strong>➥ 🫀 3445 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s` and an integer `k`. The task is to find the maximum difference between the frequencies of two characters, denoted as `freq[a] - freq[b]`, within a substring `subs` of `s`, subject to these conditions:

1. The substring `subs` must have a length (size) of at least `k`.
2. Character `a` must have an *odd* frequency in `subs`.
3. Character `b` must have an *even* frequency in `subs`.

### Return the maximum difference that you find.

### Important notes:

- The substring `subs` can contain more than two distinct characters.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "12233", k = 4

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation`  ➤ For the substring "12233", the frequency of '1' is 1 and the frequency of '3' is 2. The difference is 1 - 2 = -1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "1122211", k = 3

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ For the substring "11222", the frequency of '2' is 3 and the frequency of '1' is 2. The difference is 3 - 2 = 1.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "110", k = 3

  ### 📤 `Output`  ➤ -1

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 3 <= s.length <= 3 * 10<sup>4</sup> </br>

🔹 s consists only of digits '0' to '4'. </br>

🔹 The input is generated such that at least one substring has a character with an even frequency and a character with an odd frequency. </br>

🔹 1 <= k <= s.length </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String** </br>

🔸 **Sliding Window** </br>

🔸 **Enumeration** </br>

🔸 **Prefix Sum** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/11%20-%2006%20-%202025%20---%203445.%20Maximum%20Difference%20Between%20Even%20and%20Odd%20Frequency%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203445.%20Maximum%20Difference%20Between%20Even%20and%20Od.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/11%20-%2006%20-%202025%20---%203445.%20Maximum%20Difference%20Between%20Even%20and%20Odd%20Frequency%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203445.%20Maximum%20Difference%20Between%20Even%20and%20Odd%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/11%20-%2006%20-%202025%20---%203445.%20Maximum%20Difference%20Between%20Even%20and%20Odd%20Frequency%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203445.%20Maximum%20Difference%20Between%20Even%20and%20Od.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/11%20-%2006%20-%202025%20---%203445.%20Maximum%20Difference%20Between%20Even%20and%20Odd%20Frequency%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203445.%20Maximum%20Difference%20Between%20Even%20an.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/ed7b2aea-24c8-4dbb-b8db-e39abddd39c7" width = "700px" height="462px" />

</h1>
