# 2491. Divide Players Into Teams of Equal Skill

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/description/?envType=daily-question&envId=2024-10-04"><strong>➥ ☢️ 2491 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a positive integer array `skill` of `even` length `n` where `skill[i]` denotes the skill of the `i-th` player. Divide the players into `n / 2` teams of size `2` such that the total skill of each team is `equal`.

### The `chemistry` of a team is equal to the `product` of the skills of the players on that team.

### Return *the sum of the `chemistry` of all the teams, or return `-1` if there is no way to divide the players into teams such that the total skill of each team is equal*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ skill = [3,2,5,1,3,4]

  ### 📤 `Output`  ➤ 22

  ### 🔦 `Explanation`  ➤ Divide the players into the following teams: (1, 5), (2, 4), (3, 3), where each team has a total skill of 6. </br> The sum of the chemistry of all the teams is: 1 * 5 + 2 * 4 + 3 * 3 = 5 + 8 + 9 = 22.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ skill = [3,4]

  ### 📤 `Output`  ➤ 12 

  ### 🔦 `Explanation` ➤ The two players form a team with a total skill of 7. </br> The chemistry of the team is 3 * 4 = 12.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ skill = [1,1,2,3]

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation`  ➤ There is no way to divide the players into teams such that the total skill of each team is equal.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= skill.length <= 10<sup>5</sup>** </br>

🔹 **`skill.length` is even.** </br>

🔹 **`1 <= skill[i] <= 1000`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Two Pointers**  </br>
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
