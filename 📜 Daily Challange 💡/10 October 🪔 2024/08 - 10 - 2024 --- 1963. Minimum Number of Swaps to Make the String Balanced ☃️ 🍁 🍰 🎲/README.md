# 1963. Minimum Number of Swaps to Make the String Balanced

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/description/?envType=daily-question&envId=2024-10-08"><strong>➥ ☢️ 1963 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed string s of even length n. The string consists of exactly n / 2 opening brackets '[' and n / 2 closing brackets ']'.

A string is called `balanced` if and only if:

- It is the empty string, or

- It can be written as `AB`, where both `A` and `B` are `balanced` strings, or

- It can be written as `[C]`, where `C` is a balanced string.

### You may swap the brackets at `any` two indices `any` number of times.

### Return *the `minimum` number of swaps to make `s` balanced*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "][]["

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ You can make the string balanced by swapping index 0 with index 3. </br> The resulting string is "[[]]".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "]]][[["

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ You can do the following to make the string balanced:
    
    ➺ Swap index 0 with index 4. s = "[]][][".
    
    ➺ Swap index 1 with index 5. s = "[[][]]".
    
    The resulting string is "[[][]]".


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "[]"

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ The string is already balanced.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == s.length`** </br>

🔹 **2 <= n <= 106** </br>

🔹 **`n` is even.** </br>

🔹 **`s[i]` is either `'['` or `']'`.** </br>

🔹 **The number of opening brackets `'['` equals `n / 2`, and the number of closing brackets `']'` equals `n / 2`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Two Pointers**  </br>
🔸 **String**  </br>
🔸 **Stack**  </br>
🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
