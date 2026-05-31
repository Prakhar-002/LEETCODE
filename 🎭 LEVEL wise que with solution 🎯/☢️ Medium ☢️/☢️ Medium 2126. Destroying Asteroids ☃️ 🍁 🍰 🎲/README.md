# 2126. Destroying Asteroids

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/destroying-asteroids/description/?envType=daily-question&envId=2026-05-31"><strong>➥ ☢️ 2126 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given an integer `mass`, which represents the **original mass** of a planet. You are further given an integer array `asteroids`, where `asteroids[i]` is the mass of the `ith` asteroid.
### You can arrange for the planet to collide with the asteroids in **any arbitrary order**. If the mass of the planet is **greater than or equal to** the mass of the asteroid, the asteroid is **destroyed** and the planet **gains** the mass of the asteroid. Otherwise, the **planet is destroyed**.
### Return `true` if **all asteroids can be destroyed**. Otherwise, return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ mass = 10, asteroids = [3,9,19,5,21]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation`  ➤ Order `[9,19,5,3,21]`: planet mass grows `10→19→38→43→46→67`. All asteroids are destroyed.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ mass = 5, asteroids = [4,9,23,4]
  ### 📤 `Output`  ➤ false
  ### 🔦 `Explanation` ➤ Even after absorbing all other asteroids, the planet reaches mass `5+4+9+4 = 22`, which is **less than** `23`. The last asteroid cannot be destroyed.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ mass = 1, asteroids = [1]
  ### 📤 `Output`  ➤ true
  ### 🔦 `Explanation` ➤ The planet mass `1` is **equal to** the asteroid mass `1`, so it destroys it and gains its mass. All asteroids are destroyed.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= mass <= 10^5` </br>
🔹 `1 <= asteroids.length <= 10^5` </br>
🔹 `1 <= asteroids[i] <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Greedy** </br>
🔸 **Sorting** </br>

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

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
