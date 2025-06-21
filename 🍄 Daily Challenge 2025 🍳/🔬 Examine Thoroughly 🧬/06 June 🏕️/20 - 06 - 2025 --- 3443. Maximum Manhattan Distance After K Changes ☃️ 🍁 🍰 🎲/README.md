# 3443. Maximum Manhattan Distance After K Changes

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-manhattan-distance-after-k-changes/description/?envType=daily-question&envId=2025-06-21"><strong>➥ ☢️ 3443 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s` consisting of the characters 'N', 'S', 'E', and 'W', where each character `s[i]` indicates a movement on an infinite grid:

- 'N': Move north by 1 unit.
- 'S': Move south by 1 unit.
- 'E': Move east by 1 unit.
- 'W': Move west by 1 unit.

### You start at the origin (0, 0). You have the ability to change *at most* `k` characters in the string `s` to any of the four directions ('N', 'S', 'E', 'W').

### Your task is to find the maximum Manhattan distance from the origin that can be achieved *at any point* while performing the movements in order, using at most `k` changes.

### Recall: The Manhattan Distance between two cells (xi, yi) and (xj, yj) is `|xi - xj| + |yi - yj|`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "NWSE", k = 1

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤
Change s[2] from 'S' to 'N'. The string s becomes "NWNE".

| Movement | Position (x, y) | Manhattan Distance | Maximum |
|---|---|---|---|
| s[0] == 'N' | (0, 1) | 0 + 1 = 1 | 1 |
| s[1] == 'W' | (-1, 1) | 1 + 1 = 2 | 2 |
| s[2] == 'N' | (-1, 2) | 1 + 2 = 3 | 3 |
| s[3] == 'E' | (0, 2) | 0 + 2 = 2 | 3 |

The maximum Manhattan distance from the origin that can be achieved is 3. Hence, 3 is the output.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "NSWWEW", k = 3

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation` ➤
Change s[1] from 'S' to 'N', and s[4] from 'E' to 'W'. The string s becomes "NNWWWW".

The maximum Manhattan distance from the origin that can be achieved is 6. Hence, 6 is the output.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= s.length <= 10<sup>5</sup> </br>

🔹 0 <= k <= s.length </br>

🔹 s consists of only 'N', 'S', 'E', and 'W'. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>

🔸 **Math**  </br>

🔸 **String**  </br>

🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/20%20-%2006%20-%202025%20---%203443.%20Maximum%20Manhattan%20Distance%20After%20K%20Changes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203443.%20Maximum%20Manhattan%20Distance%20After%20K%20Changes.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/20%20-%2006%20-%202025%20---%203443.%20Maximum%20Manhattan%20Distance%20After%20K%20Changes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203443.%20Maximum%20Manhattan%20Distance%20After%20K%20Changes.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/20%20-%2006%20-%202025%20---%203443.%20Maximum%20Manhattan%20Distance%20After%20K%20Changes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203443.%20Maximum%20Manhattan%20Distance%20After%20K%20Changes.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/20%20-%2006%20-%202025%20---%203443.%20Maximum%20Manhattan%20Distance%20After%20K%20Changes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203443.%20Maximum%20Manhattan%20Distance%20After%20K%20Changes.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/55c55792-072d-40da-af07-eae26635912b" width = "700px" height="462px" />

</h1>
