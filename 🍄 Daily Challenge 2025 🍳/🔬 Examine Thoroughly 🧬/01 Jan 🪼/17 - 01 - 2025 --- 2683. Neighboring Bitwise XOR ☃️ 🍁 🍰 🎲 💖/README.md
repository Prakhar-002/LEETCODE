# 2683. Neighboring Bitwise XOR

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/neighboring-bitwise-xor/description/?envType=daily-question&envId=2025-01-17"><strong>➥ ☢️ 2683 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A 0-indexed array `derived` with length `n` is derived by computing the `bitwise XOR (⊕)` of adjacent values in a binary array `original` of length `n`.

### Specifically, for each index i in the range [0, n - 1]:

- If `i = n - 1`, then `derived[i] = original[i] ⊕ original[0]`.

- Otherwise, `derived[i] = original[i] ⊕ original[i + 1]`.

### Given an array `derived`, your task is to determine whether there exists a valid binary array `original` that could have formed `derived`.

### Return `true` *if such an array exists or* `false` *otherwise*.

- A binary array is an array containing only `0's` and `1's`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ derived = [1,1,0]

  ### 📤 `Output`  ➤  true

  ### 🔦 `Explanation`  ➤ A valid original array that gives derived is [0,1,0].</br> derived[0] = original[0] ⊕ original[1] = 0 ⊕ 1 = 1 </br> derived[1] = original[1] ⊕ original[2] = 1 ⊕ 0 = 1</br> derived[2] = original[2] ⊕ original[0] = 0 ⊕ 0 = 0

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ derived = [1,1]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation` ➤ A valid original array that gives derived is [0,1].</br> derived[0] = original[0] ⊕ original[1] = 1</br> derived[1] = original[1] ⊕ original[0] = 1

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ derived = [1,0]

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation`  ➤ There is no valid original array that gives derived.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == derived.length`** </br>

🔹 **1 <= n <= 10<sup>5</sup>** </br>

🔹 **The values in `derived` are either 0's or 1's** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Bit Manipulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
