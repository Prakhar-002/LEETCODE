# 1545. Find Kth Bit in Nth Binary String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/description/?envType=daily-question&envId=2024-10-19"><strong>➥ ☢️ 1545 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given two positive integers n and k, the binary string Sn is formed as follows:

- S1 = "0"

- Si = Si - 1 + "1" + reverse(invert(Si - 1)) for i > 1

### Where `+` denotes the concatenation operation, `reverse(x)` returns the reversed string `x`, and `invert(x)` inverts all the bits in `x` (`0` changes to `1` and `1` changes to `0`).

### For example, the first four strings in the above sequence are:

- `S1 = "0"`

- `S2 = "011"`

- `S3 = "0111001"`

- `S4 = "011100110110001"`

### Return the k<sup>th</sup> bit in S<sub>n</sub>. It is guaranteed that `k` is valid for the given `n`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 3, k = 1

  ### 📤 `Output`  ➤ "0"

  ### 🔦 `Explanation`  ➤ S<sub>3</sub> is "<u>**0**</u>111001". </br> The 1<sup>st</sup> bit is `"0"`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 4, k = 11

  ### 📤 `Output`  ➤ "1"

  ### 🔦 `Explanation` ➤ S<sub>4</sub> is "0111001101<u>**1**</u>0001". </br> The 11<sup>th</sup> bit is "1".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= n <= 20`** </br>

🔹 **1 <= k <= 2<sup>n</sup> - 1** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Recursion**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/19%20-%2010%20-%202024%20---%201545.%20Find%20Kth%20Bit%20in%20Nth%20Binary%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201545.%20Find%20Kth%20Bit%20in%20Nth%20Binary%20String.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/19%20-%2010%20-%202024%20---%201545.%20Find%20Kth%20Bit%20in%20Nth%20Binary%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201545.%20Find%20Kth%20Bit%20in%20Nth%20Binary%20String.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/19%20-%2010%20-%202024%20---%201545.%20Find%20Kth%20Bit%20in%20Nth%20Binary%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201545.%20Find%20Kth%20Bit%20in%20Nth%20Binary%20String.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/19%20-%2010%20-%202024%20---%201545.%20Find%20Kth%20Bit%20in%20Nth%20Binary%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201545.%20Find%20Kth%20Bit%20in%20Nth%20Binary%20String.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/66c1ba0b-dbc0-430d-a787-8db115814354" width = "700px" height="462px" />

</h1>
