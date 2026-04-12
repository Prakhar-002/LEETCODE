# 657. Robot Return to Origin

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/robot-return-to-origin/?envType=daily-question&envId=2026-04-03"><strong>➥ ♻️ 657 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### There is a robot starting at the position `(0, 0)`, the origin, on a 2D plane. Given a sequence of its moves, judge if this robot **ends up at** `(0, 0)` after it completes its moves.
### You are given a string `moves` that represents the move sequence of the robot where `moves[i]` represents its `ith` move. Valid moves are `'R'` (right), `'L'` (left), `'U'` (up), and `'D'` (down).
### Return `true` if the robot **returns to the origin** after it finishes all of its moves, or `false` otherwise.
### **Note:** The way that the robot is "facing" is **irrelevant**. `'R'` will always make the robot move to the right once, `'L'` will always make it move left, etc. Also, assume that the **magnitude** of the robot's movement is the same for each move.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ moves = "UD"
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation`  ➤ The robot moves **up** once, and then **down** once. All moves have the same magnitude, so it ended up at the origin where it started. Therefore, we return `true`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ moves = "LL"
  ### 📤 `Output`  ➤ false
  ### 🔦 `Explanation` ➤ The robot moves **left** twice. It ends up two moves to the left of the origin. We return `false` because it is not at the origin at the end of its moves.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ moves = "LRUD"
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ The robot moves **left**, **right**, **up**, then **down**. Each pair cancels out, returning the robot exactly to the origin `(0, 0)`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= moves.length <= 2 * 10^4` </br>
🔹 `moves` only contains the characters `'U'`, `'D'`, `'L'` and `'R'`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **String** </br>

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

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
