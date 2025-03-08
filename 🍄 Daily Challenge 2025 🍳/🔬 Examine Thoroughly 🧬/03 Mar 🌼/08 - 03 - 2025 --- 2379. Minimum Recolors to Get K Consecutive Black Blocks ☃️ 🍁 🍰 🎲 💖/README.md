# 2379. Minimum Recolors to Get K Consecutive Black Blocks

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/?envType=daily-question&envId=2025-03-08"><strong>➥ ♻️ 2379 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a **0-indexed** string `blocks` of length `n`, where `blocks[i]` is either `'W'` or `'B'`, representing the color of the `iᵗʰ` block.  

- `'W'` represents **white** blocks.  
- `'B'` represents **black** blocks.

### You are also given an integer `k`, which is the **desired number of consecutive black blocks**.

### **In one operation**, you can recolor a **white block** so that it becomes a **black block**.

### Return *the minimum number of operations needed such that there is at least one occurrence of `k` consecutive black blocks*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ blocks = `"WBBWWBBWBW"`, k = `7`

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ One way to achieve `7` consecutive black blocks is to recolor the `0ᵗʰ`, `3ʳᵈ`, and `4ᵗʰ` blocks  </br>so that `blocks = "BBBBBBBWBW"`.  </br></br>It can be shown that there is **no way** to achieve `7` consecutive black blocks in **less than 3 operations**.  </br>Therefore, we return `3`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ blocks = `"WBWBBBW"`, k = `2`

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤  No changes need to be made, since `2` consecutive black blocks already exist.  </br></br>Therefore, we return `0`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `n == blocks.length` </br>
🔹 `1 <= n <= 100` </br>
🔹 `blocks[i]` is either `'W'` or `'B'`. </br>
🔹 `1 <= k <= n` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
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
