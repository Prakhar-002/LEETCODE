# 649. Dota2 Senate

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ 649 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### In the world of Dota2, there are two parties: the Radiant and the Dire.

### The Dota2 senate consists of senators coming from two parties. Now the Senate wants to decide on a change in the Dota2 game. The voting for this change is a round-based procedure. In each round, each senator can exercise `one` of the two rights:

- `Ban one senator's right`: A senator can make another senator lose all his rights in this and all the following rounds.

- `Announce the victory`: If this senator found the senators who still have rights to vote are all from the same party, he can announce the victory and decide on the change in the game.

### Given a string `senate` representing each senator's party belonging. The character `'R'` and `'D'` represent the Radiant party and the Dire party. Then if there are `n` senators, the size of the given string will be `n`.

### The round-based procedure starts from the first senator to the last senator in the given order. This procedure will last until the end of voting. All the senators who have lost their rights will be skipped during the procedure.

### Suppose every senator is smart enough and will play the best strategy for his own party. Predict which party will finally announce the victory and change the Dota2 game. The output should be `"Radiant"` or `"Dire"`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ senate = "RD"

  ### 📤 `Output`  ➤ "Radiant"

  ### 🔦 `Explanation`  ➤ The first senator comes from Radiant and he can just ban the next senator's right in round 1. </br> And the second senator can't exercise any rights anymore since his right has been banned. </br> And in round 2, the first senator can just announce the victory since he is the only guy in the senate who can vote.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ senate = "RDD"

  ### 📤 `Output`  ➤ "Dire"

  ### 🔦 `Explanation` ➤ The first senator comes from Radiant and he can just ban the next senator's right in round 1. </br> And the second senator can't exercise any rights anymore since his right has been banned. </br> And the third senator comes from Dire and he can ban the first senator's right in round 1. </br> And in round 2, the third senator can just announce the victory since he is the only guy in the senate who can vote.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == senate.length`** </br>

🔹 **1 <= n <= 10<sup>4</sup>** </br>

🔹 **`senate[i]` is either `'R'` or `'D'`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Greedy**  </br>
🔸 **Queue**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

