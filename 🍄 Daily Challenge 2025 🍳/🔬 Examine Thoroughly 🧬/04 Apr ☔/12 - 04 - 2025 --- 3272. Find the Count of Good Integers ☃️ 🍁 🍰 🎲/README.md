# 3272. Find the Count of Good Integers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-count-of-good-integers/description/?envType=daily-question&envId=2025-04-12"><strong>➥ 🫀 3272 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two positive integers: `n` and `k`.

### An integer `x` is considered *k-palindromic* if it meets both of these conditions:

1. `x` is a palindrome (reads the same forwards and backward).
2. `x` is divisible by `k`.

### An integer is considered *good* if its digits can be rearranged to form a k-palindromic integer. For instance, with `k = 2`, the number 2020 is *good* because its digits can be rearranged to make the k-palindromic integer 2002. On the other hand, 1010 is *not good* because its digits cannot be rearranged to create any k-palindromic integer.

### Your task is to return the total count of *good* integers that have exactly `n` digits.

### Important Notes:

- Integers must *not* have leading zeros, neither before nor after rearrangement. For example, 1010 cannot be rearranged to form just "101."

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 3, k = 5

  ### 📤 `Output`  ➤ 27

  ### 🔦 `Explanation`  ➤ Some of the good integers are:

- 551 because it can be rearranged to form 515.

- 525 because it is already k-palindromic.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 1, k = 4

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ The two good integers are 4 and 8.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 5, k = 6

  ### 📤 `Output`  ➤ 2468

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 2, k = 1

  ### 📤 `Output`  ➤ 90

  ### 🔦 `Explanation`  ➤Every palindrome number from range `[10...99] is exactly good for 'k'.` This value are result to that as number can 90 to fit inside conditions;

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= n <= 10 </br>
🔹 1 <= k <= 9 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **Math**  </br>
🔸 **Combinatorics**  </br>
🔸 **Enumeration**  </br>

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

<img src ="" width = "700px" height="462px" />

</h1>
