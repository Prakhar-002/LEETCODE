# 2381. Shifting Letters II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/shifting-letters-ii/description/?envType=daily-question&envId=2025-01-05"><strong>➥ ☢️ 2381 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s` of lowercase English letters and a 2D integer array shifts where shifts[i] = [start<sub>i</sub>, end<sub>i</sub>, direction<sub>i</sub>]. For every i, shift the characters in `s` from the index start<sub>i</sub> to the index end<sub>i</sub> (inclusive) forward if direction<sub>i</sub> = 1, or shift the characters backward if directioni = 0.

### Shifting a character `forward` means replacing it with the next letter in the alphabet (wrapping around so that `'z'` becomes `'a'`). Similarly, shifting a character `backward` means replacing it with the `previous` letter in the alphabet (wrapping around so that `'a'` becomes `'z'`).

### Return *the final string after all such shifts to `s` are applied*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "abc", shifts = [[0,1,0],[1,2,1],[0,2,1]]

  ### 📤 `Output`  ➤ "ace"

  ### 🔦 `Explanation`  ➤ ➺ Firstly, shift the characters from index 0 to index 1 backward. Now s = "zac".</br> Secondly, shift the characters from index 1 to index 2 forward. Now s = "zbd".</br> Finally, shift the characters from index 0 to index 2 forward. Now s = "ace".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "dztz", shifts = [[0,0,0],[1,1,1]]

  ### 📤 `Output`  ➤ "catz"

  ### 🔦 `Explanation` ➤ Firstly, shift the characters from index 0 to index 0 backward. Now s = "cztz".</br> Finally, shift the characters from index 1 to index 1 forward. Now s = "catz".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= s.length, shifts.length <= 5 * 10<sup>4</sup>** </br>

🔹 **`shifts[i].length == 3`** </br>

🔹 **0 <= start<sub>i</sub> <= en<sub>i</sub>i < s.length** </br>

🔹 **0 <= direction<sub>i</sub> <= 1** </br>

🔹 **`s` consists of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **String**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
