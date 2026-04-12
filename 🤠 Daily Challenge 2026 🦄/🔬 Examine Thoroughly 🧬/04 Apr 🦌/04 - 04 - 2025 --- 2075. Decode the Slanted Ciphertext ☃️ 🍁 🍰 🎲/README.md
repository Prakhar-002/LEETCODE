# 2075. Decode the Slanted Ciphertext

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/decode-the-slanted-ciphertext/?envType=daily-question&envId=2026-04-03"><strong>➥ ☢️ 2075 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### A string `originalText` is encoded using a **slanted transposition cipher** to a string `encodedText` with the help of a matrix having a fixed number of rows `rows`.
### `originalText` is placed first in a **top-left to bottom-right** manner.

<img width="661" height="408" alt="image" src="https://github.com/user-attachments/assets/8cade671-78e1-463a-8314-af73cae25579" />

### The cells are filled diagonally until we reach the end of `originalText`. All **empty cells** are filled with `' '`. The number of columns is chosen such that the **rightmost column will not be empty** after filling in `originalText`.
### `encodedText` is then formed by appending all characters of the matrix in a **row-wise** fashion.

<img width="488" height="325" alt="image" src="https://github.com/user-attachments/assets/5a054331-a686-4435-b07d-5f0cf2697f81" />

### Given the encoded string `encodedText` and number of rows `rows`, return the original string `originalText`.

<img width="281" height="211" alt="image" src="https://github.com/user-attachments/assets/f5782a61-d582-4ba1-bbc4-a1bfffa736ac" />

### **Note:** `originalText` does not have any **trailing spaces** `' '`. The test cases are generated such that there is only **one possible** `originalText`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ encodedText = "ch   ie   pr", rows = 3
  ### 📤 `Output`  ➤ "cipher"
  ### 🔦 `Explanation`  ➤ This is the same example described in the problem description. The diagonal placement of "cipher" in a 3-row matrix encodes to "ch   ie   pr".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ encodedText = "iveo    eed   l te   olc", rows = 4
  ### 📤 `Output`  ➤ "i love leetcode"
  ### 🔦 `Explanation` ➤ The matrix used to encode `originalText` has 4 rows. Reading diagonally top-left to bottom-right recovers "i love leetcode".
<img width="484" height="325" alt="image" src="https://github.com/user-attachments/assets/ef042094-3c88-46a2-ab56-0fbb878f1389" />

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
<img width="421" height="71" alt="image" src="https://github.com/user-attachments/assets/15b7ec3e-3c0c-49b5-807b-bd90cece0cb4" />

  ### 📥 `Input` ➤ encodedText = "coding", rows = 1
  ### 📤 `Output`  ➤ "coding"
  ### 🔦 `Explanation` ➤ Since there is only **1 row**, both `originalText` and `encodedText` are the same.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `0 <= encodedText.length <= 10^6` </br>
🔹 `encodedText` consists of **lowercase English letters** and `' '` only. </br>
🔹 `encodedText` is a **valid encoding** of some `originalText` that does not have trailing spaces. </br>
🔹 `1 <= rows <= 1000` </br>
🔹 The testcases are generated such that there is only **one possible** `originalText`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **String** </br>
🔸 **Simulation** </br>

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
