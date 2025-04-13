# 1922. Count Good Numbers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-good-numbers/description/?envType=daily-question&envId=2025-04-13"><strong>➥ ☢️ 1922 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A digit string is considered *good* if it satisfies the following criteria:

- The digits at even indices (0-indexed) are even numbers (0, 2, 4, 6, or 8).

- The digits at odd indices are prime numbers (2, 3, 5, or 7).

### For example, "2582" is a *good* string because:

- *Index 0*: '2' is even.

- *Index 1*: '5' is prime.

- *Index 2*: '8' is even.

- *Index 3*: '2' is prime.

### However, "3245" is *not good* because '3' is at an even index but is not an even number.

### Given an integer `n`, your task is to return the total number of *good* digit strings of length `n`.

### Since the answer may be very large, you should return the answer modulo 10<sup>9</sup> + 7 (1000000007).

### Note:

##### A digit string is simply a string composed of digits '0' through '9', and it may contain leading zeros.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 1

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ The good numbers of length 1 are "0", "2", "4", "6", "8".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 4

  ### 📤 `Output`  ➤ 400

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 50

  ### 📤 `Output`  ➤ 564908303

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 2

  ### 📤 `Output`  ➤ 20

  ### 🔦 `Explanation`  ➤  it iterate with even * then for Odd value prime Number which will equal this to '80' result this value

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= n <= 10<sup>15</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **Recursion**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/13%20-%2004%20-%202025%20---%201922.%20Count%20Good%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201922.%20Count%20Good%20Numbers.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/13%20-%2004%20-%202025%20---%201922.%20Count%20Good%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201922.%20Count%20Good%20Numbers.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/13%20-%2004%20-%202025%20---%201922.%20Count%20Good%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201922.%20Count%20Good%20Numbers.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/13%20-%2004%20-%202025%20---%201922.%20Count%20Good%20Numbers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201922.%20Count%20Good%20Numbers.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/4ebc3608-17b4-4627-95fc-9844997a8019" width = "700px" height="462px" />

</h1>
