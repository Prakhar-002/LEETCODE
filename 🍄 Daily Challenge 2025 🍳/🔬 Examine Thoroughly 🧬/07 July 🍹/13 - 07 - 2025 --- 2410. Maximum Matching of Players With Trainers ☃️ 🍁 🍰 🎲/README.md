# 2410. Maximum Matching of Players With Trainers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-matching-of-players-with-trainers/description/?envType=daily-question&envId=2025-07-13"><strong>➥ ☢️ 2410 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two 0-indexed integer arrays: `players` and `trainers`. The value `players[i]` represents the ability of the i<sup>th</sup> player, and `trainers[j]` represents the training capacity of the j<sup>th</sup> trainer.

### A player `i` can be matched with a trainer `j` if the player's ability is less than or equal to the trainer's training capacity, i.e., `players[i] <= trainers[j]`. Each player can be matched with at most one trainer, and each trainer can be matched with at most one player.

### Your task is to determine and return the maximum number of matchings that can be formed between players and trainers, while adhering to these conditions.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ players = [4,7,9], trainers = [8,2,5,8]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤
One of the ways we can form two matchings is as follows:

- players[0] can be matched with trainers[0] since 4 <= 8.
- players[1] can be matched with trainers[3] since 7 <= 8.

It can be proven that 2 is the maximum number of matchings that can be formed.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ players = [1,1,1], trainers = [10]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤
The trainer can be matched with any of the 3 players.
Each player can only be matched with one trainer, so the maximum answer is 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= players.length, trainers.length <= 10<sup>5</sup> </br>

🔹 1 <= players[i], trainers[j] <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Two Pointers**  </br>

🔸 **Greedy**  </br>

🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/13%20-%2007%20-%202025%20---%202410.%20Maximum%20Matching%20of%20Players%20With%20Trainers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202410.%20Maximum%20Matching%20of%20Players%20With%20Trainers.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/13%20-%2007%20-%202025%20---%202410.%20Maximum%20Matching%20of%20Players%20With%20Trainers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202410.%20Maximum%20Matching%20of%20Players%20With%20Trainers.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/13%20-%2007%20-%202025%20---%202410.%20Maximum%20Matching%20of%20Players%20With%20Trainers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202410.%20Maximum%20Matching%20of%20Players%20With%20Trainers.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/13%20-%2007%20-%202025%20---%202410.%20Maximum%20Matching%20of%20Players%20With%20Trainers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202410.%20Maximum%20Matching%20of%20Players%20With%20Trainers.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/8bf1abab-0b70-4887-9cda-9a458a921110" width = "700px" height="462px" />

</h1>
