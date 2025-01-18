# 2097. Valid Arrangement of Pairs

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/valid-arrangement-of-pairs/description/?envType=daily-question&envId=2024-11-30"><strong>➥ ☢️ 2097 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed 2D integer array `pairs` where pairs[i] = [start<sub>i</sub>, end<sub>i</sub>]. An arrangement of `pairs` is valid if for every index i where `1 <= i < pairs.length`, we have end<sub>i-1</sub> == start<sub>i</sub>.

### Return *any valid arrangement of* `pairs`.

### Note: The inputs will be generated such that there exists a valid arrangement of `pairs`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  pairs = [[5,1],[4,5],[11,9],[9,4]]

  ### 📤 `Output`  ➤ [[11,9],[9,4],[4,5],[5,1]]

  ### 🔦 `Explanation`  ➤ This is a valid arrangement since end<sub>i-1</sub> always equals start<sub>i</sub>.</br> end<sub>0</sub> = 9 == 9 = start<sub>1</sub> </br> end<sub>1</sub> = 4 == 4 = start<sub>2</sub> </br> end<sub>2</sub> = 5 == 5 = start<sub>3</sub>

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ pairs = [[1,3],[3,2],[2,1]]

  ### 📤 `Output`  ➤ [[1,3],[3,2],[2,1]]

  ### 🔦 `Explanation` ➤ This is a valid arrangement since end<sub>i</sub> always equals start<sub>i</sub>.</br> end<sub>0</sub> = 3 == 3 = start<sub>1</sub></br> end<sub>1</sub> = 2 == 2 = start<sub>2</sub></br> The arrangements [[2,1],[1,3],[3,2]] and [[3,2],[2,1],[1,3]] are also valid.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ pairs = [[1,2],[1,3],[2,1]]

  ### 📤 `Output`  ➤ [[1,2],[2,1],[1,3]]

  ### 🔦 `Explanation`  ➤ This is a valid arrangement since end<sub>i-1</sub> always equals start<sub>i</sub>.</br> end<sub>0</sub> = 2 == 2 = start<sub>1</sub></br> end<sub>1</sub> = 1 == 1 = start<sub>2</sub>

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= pairs.length <= 10<sup>5</sup>** </br>

🔹 **`pairs[i].length == 2`** </br>

🔹 **0 <= start<sub>i</sub>, end<sub>i</sub> <= 10<sup>9</sup>** </br>

🔹 **start<sub>i</sub> != end<sub>i</sub>** </br>

🔹 **No two pairs are exactly the same.** </br>

🔹 **There exists a valid arrangement of `pairs`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Depth-First Search**  </br>
🔸 **Graph**  </br>
🔸 **Eulerian Circuit**  </br>

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


