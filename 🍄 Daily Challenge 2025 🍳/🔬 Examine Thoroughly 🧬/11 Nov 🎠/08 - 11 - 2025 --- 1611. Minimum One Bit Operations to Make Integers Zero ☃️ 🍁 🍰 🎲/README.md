# 1611. Minimum One Bit Operations to Make Integers Zero

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-one-bit-operations-to-make-integers-zero/description/?envType=daily-question&envId=2025-11-08"><strong>➥ 🫀 1611 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer `n`, you must transform it into 0 using the following operations any number of times:

- Change the rightmost (0th) bit in the binary representation of `n`.
- Change the ith bit in the binary representation of `n` if the (i-1)th bit is set to 1 and the (i-2)th through 0th bits are set to 0.

### Return the minimum number of operations to transform `n` into 0.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 3`

  ### 📤 `Output`  ➤ `2`

  ### 🔦 `Explanation`  ➤ ➺

  - The binary representation of 3 is "11".
    - "11" -> "01" with the 2nd operation since the 0th bit is 1.
    - "01" -> "00" with the 1st operation.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 6`

  ### 📤 `Output`  ➤ `4`

  ### 🔦 `Explanation`  ➤ ➺

  - The binary representation of 6 is "110".
    - "110" -> "010" with the 2nd operation since the 1st bit is 1 and 0th through 0th bits are 0.
    - "010" -> "011" with the 1st operation.
    - "011" -> "001" with the 2nd operation since the 0th bit is 1.
    - "001" -> "000" with the 1st operation.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `0 <= n <= 10^9` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Dynamic Programming** </br>
🔸 **Bit Manipulation** </br>
🔸 **Memoization** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
