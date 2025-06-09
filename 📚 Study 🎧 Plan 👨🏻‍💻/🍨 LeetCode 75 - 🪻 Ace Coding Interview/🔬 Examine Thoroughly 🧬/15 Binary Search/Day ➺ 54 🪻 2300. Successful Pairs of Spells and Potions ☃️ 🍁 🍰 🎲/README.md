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
