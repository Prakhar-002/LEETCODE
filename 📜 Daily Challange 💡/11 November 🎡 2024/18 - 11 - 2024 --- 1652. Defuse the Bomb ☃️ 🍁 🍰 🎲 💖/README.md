# 1652. Defuse the Bomb

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/defuse-the-bomb/description/?envType=daily-question&envId=2024-11-18"><strong>➥ ♻️ 1652 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You have a bomb to defuse, and your time is running out! Your informer will provide you with a circular array `code` of length of `n` and a key `k`.

### To decrypt the code, you must replace every number. All the numbers are replaced `simultaneously`.

- If `k > 0`, replace the i<sup>th</sup> number with the sum of the `next` `k` numbers.

- If `k < 0`, replace the i<sup>th</sup> number with the sum of the `previous` `k` numbers.

- If `k == 0`, replace the i<sup>th</sup> number with `0`.

### As `code` is circular, the next element of `code[n-1]` is `code[0]`, and the previous element of `code[0] `is `code[n-1]`.

### Given the circular array `code` and an integer key `k`, return *the decrypted code to defuse the bomb!*

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ code = [5,7,1,4], k = 3

  ### 📤 `Output`  ➤  [12,10,16,13]

  ### 🔦 `Explanation`  ➤ Each number is replaced by the sum of the next 3 numbers. The decrypted code is [7+1+4, 1+4+5, 4+5+7, 5+7+1]. Notice that the numbers wrap around.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ code = [1,2,3,4], k = 0

  ### 📤 `Output`  ➤ [0,0,0,0]

  ### 🔦 `Explanation` ➤ When k is zero, the numbers are replaced by 0.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ code = [2,4,9,3], k = -2

  ### 📤 `Output`  ➤ [12,5,6,13]

  ### 🔦 `Explanation`  ➤ The decrypted code is [3+9, 2+3, 4+2, 9+4]. Notice that the numbers wrap around again. If k is negative, the sum is of the `previous` numbers.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == code.length`** </br>

🔹 **`1 <= n <= 100`** </br>

🔹 **`1 <= code[i] <= 100`** </br>

🔹 **`-(n - 1) <= k <= n - 1`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Sliding Window**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |

