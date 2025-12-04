# Q2. Number of Substrings Containing All Three Characters

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/?envType=problem-list-v2&envId=dsa-recursion-maze-sliding-window"><strong>➥ ☢️ Q2 Leetcode Medium ☢️ </strong></a>
</h2>


</br>

# Description 📜 ˋ°•*⁀➷

### You are given a **string** `s` consisting **only** of characters `'a'`, `'b'`, and `'c'`.  

- A **valid substring** must contain **at least one occurrence** of **all three characters** `'a'`, `'b'`, and `'c'`.  

### **Return** the number of such substrings.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = `"abcabc"`

  ### 📤 `Output` ➤ 10

  ### 🔦 `Explanation` ➤ 

- The **valid substrings** are:
  - `"abc"`, `"abca"`, `"abcab"`, `"abcabc"`
  - `"bca"`, `"bcab"`, `"bcabc"`
  - `"cab"`, `"cabc"`
  - `"abc"` (again)

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = `"aaacb"`

  ### 📤 `Output` ➤ 3

  ### 🔦 `Explanation` ➤ 

- The **valid substrings** are:
  - `"aaacb"`, `"aacb"`, `"acb"`

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = `"abc"`

  ### 📤 `Output` ➤ 1

  ### 🔦 `Explanation` ➤ 

- The **only valid substring** is `"abc"`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 3 <= s.length <= 5<sup>4</sup> </br>
🔹 `s` consists only of **'a', 'b', or 'c'**. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Sliding Window**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/11%20-%2003%20-%202025%20---%201358.%20Number%20of%20Substrings%20Containing%20All%20Three%20Characters%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201358.%20Number%20of%20Substrings%20Containing%20All%20Thre.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/11%20-%2003%20-%202025%20---%201358.%20Number%20of%20Substrings%20Containing%20All%20Three%20Characters%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201358.%20Number%20of%20Substrings%20Containing%20All%20Three%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/11%20-%2003%20-%202025%20---%201358.%20Number%20of%20Substrings%20Containing%20All%20Three%20Characters%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201358.%20Number%20of%20Substrings%20Containing%20All%20Thre.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/11%20-%2003%20-%202025%20---%201358.%20Number%20of%20Substrings%20Containing%20All%20Three%20Characters%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201358.%20Number%20of%20Substrings%20Containing%20All%20.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/4b613aa0-b0f7-4ddb-ad45-5525436f7574" width = "700px" height="462px" />

</h1>
