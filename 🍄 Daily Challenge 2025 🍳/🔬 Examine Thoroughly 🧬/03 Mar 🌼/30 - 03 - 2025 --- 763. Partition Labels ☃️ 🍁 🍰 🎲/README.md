# 763. Partition Labels

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/partition-labels/description/?envType=daily-question&envId=2025-03-30"><strong>➥ ☢️ 763 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

You are given a string `s`. The goal is to **partition** `s` into as many parts as possible with the constraint that **each letter appears in at most one part**.  

This means that if a letter appears in a certain part, **it cannot appear in any other part**.  
After concatenating the resulting parts back together, they should **equal the original string `s`**.

🔹 You must return a **list of integers**, where each integer represents the **size (length) of each partitioned part**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "ababcbacadefegdehijhklij"

  ### 📤 `Output`  ➤ [9,7,8]

  ### 🔦 `Explanation`  ➤

The partition is "ababcbaca", "defegde", "hijhklij".

This is a partition so that each letter appears in at most one part.

A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits s into less parts.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "eccbbbbdec"

  ### 📤 `Output`  ➤ [10]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "caedbdedda"

  ### 📤 `Output`  ➤ [1,9]

  ### 🔦 `Explanation`  ➤ Partition the string to: ["c", "aedbdedda"]

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ s = "aaaa"

   ### 📤 `Output`  ➤ [4]

   ### 🔦 `Explanation`  ➤ Since all are a it has only one partitions can available.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= s.length <= 500` </br>
🔹 s consists of lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **Two Pointers**  </br>
🔸 **String**  </br>
🔸 **Greedy**  </br>

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
