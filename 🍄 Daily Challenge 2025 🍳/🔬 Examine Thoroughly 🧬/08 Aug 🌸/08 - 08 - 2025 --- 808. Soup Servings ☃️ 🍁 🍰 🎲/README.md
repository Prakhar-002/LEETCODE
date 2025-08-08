# 808. Soup Servings

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/soup-servings/description/?envType=daily-question&envId=2025-08-08"><strong>➥ ☢️ 808 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are managing two soups, A and B, both starting with `n` mL. Each turn involves randomly selecting one of four serving operations, each with an equal probability (0.25):

1. Pour 100 mL from A and 0 mL from B
2. Pour 75 mL from A and 25 mL from B
3. Pour 50 mL from A and 50 mL from B
4. Pour 25 mL from A and 75 mL from B

### Important points:

- No operation can pour 0 mL from A and 100 mL from B.
- Amounts from A and B are poured simultaneously.
- If an operation attempts to pour more from a soup than remains, you pour all that is left.
- The process stops the instant one of the soups is emptied (or both are emptied simultaneously).

### The objective is to return the probability that soup A is used up *before* soup B is used up, *plus* half the probability that both soups are used up *at the same time* in a single turn.

### Your answer should be accurate within 10<sup>-5</sup>.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 50

  ### 📤 `Output`  ➤ 0.62500

  ### 🔦 `Explanation`  ➤
If we perform either of the first two serving operations, soup A will become empty first.
If we perform the third operation, A and B will become empty at the same time.
If we perform the fourth operation, B will become empty first.
So the total probability of A becoming empty first plus half the probability that A and B become empty at the same time, is 0.25 * (1 + 1 + 0.5 + 0) = 0.625.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 100

  ### 📤 `Output`  ➤ 0.71875

  ### 🔦 `Explanation`  ➤
If we perform the first serving operation, soup A will become empty first.
If we perform the second serving operations, A will become empty on performing operation [1, 2, 3], and both A and B become empty on performing operation 4.
If we perform the third operation, A will become empty on performing operation [1, 2], and both A and B become empty on performing operation 3.
If we perform the fourth operation, A will become empty on performing operation 1, and both A and B become empty on performing operation 2.
So the total probability of A becoming empty first plus half the probability that A and B become empty at the same time, is 0.71875.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 0 <= n <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>

🔸 **Dynamic Programming**  </br>

🔸 **Probability and Statistics**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
