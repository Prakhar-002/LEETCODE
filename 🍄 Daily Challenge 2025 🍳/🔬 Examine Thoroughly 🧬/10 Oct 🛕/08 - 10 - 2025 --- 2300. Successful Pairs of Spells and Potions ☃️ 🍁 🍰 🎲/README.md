# 2300. Successful Pairs of Spells and Potions

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/successful-pairs-of-spells-and-potions/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 2300 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two positive integer arrays: `spells` (of length `n`) and `potions` (of length `m`). `spells[i]` represents the strength of the i<sup>th</sup> spell, and `potions[j]` represents the strength of the j<sup>th</sup> potion.

### You are also given an integer `success`. A spell-potion pair is considered *successful* if the product of their strengths is at least `success`.

### Your task is to return an integer array called `pairs` of length `n`. Each `pairs[i]` should represent the number of potions that will form a successful pair with the i<sup>th</sup> spell.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ spells = [5,1,3], potions = [1,2,3,4,5], success = 7

  ### 📤 `Output`  ➤ [4,0,3]

  ### 🔦 `Explanation`  ➤
- 0th spell: 5 * [1,2,3,4,5] = [5,10,15,20,25]. 4 pairs are successful.
- 1st spell: 1 * [1,2,3,4,5] = [1,2,3,4,5]. 0 pairs are successful.
- 2nd spell: 3 * [1,2,3,4,5] = [3,6,9,12,15]. 3 pairs are successful.

Thus, [4,0,3] is returned.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ spells = [3,1,2], potions = [8,5,8], success = 16

  ### 📤 `Output`  ➤ [2,0,2]

  ### 🔦 `Explanation` ➤
- 0th spell: 3 * [8,5,8] = [24,15,24]. 2 pairs are successful.
- 1st spell: 1 * [8,5,8] = [8,5,8]. 0 pairs are successful.
- 2nd spell: 2 * [8,5,8] = [16,10,16]. 2 pairs are successful.

Thus, [2,0,2] is returned.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == spells.length </br>

🔹 m == potions.length </br>

🔹 1 <= n, m <= 10<sup>5</sup> </br>

🔹 1 <= spells[i], potions[i] <= 10<sup>5</sup> </br>

🔹 1 <= success <= 10<sup>10</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Two Pointers**  </br>

🔸 **Binary Search**  </br>

🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2054%20%F0%9F%AA%BB%202300.%20Successful%20Pairs%20of%20Spells%20and%20Potions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202300.%20Successful%20Pair.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2054%20%F0%9F%AA%BB%202300.%20Successful%20Pairs%20of%20Spells%20and%20Potions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202300.%20Successful%20Pairs%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2054%20%F0%9F%AA%BB%202300.%20Successful%20Pairs%20of%20Spells%20and%20Potions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202300.%20Successful%20Pair.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2054%20%F0%9F%AA%BB%202300.%20Successful%20Pairs%20of%20Spells%20and%20Potions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202300.%20Successful%20.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/b312b4d7-da35-43f3-9049-1694ae366ee2" width = "700px" height="462px" />

</h1>
