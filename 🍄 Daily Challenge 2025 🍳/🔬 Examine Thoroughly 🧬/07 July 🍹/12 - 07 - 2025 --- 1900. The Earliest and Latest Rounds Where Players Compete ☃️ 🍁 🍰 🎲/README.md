# 1900. The Earliest and Latest Rounds Where Players Compete

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/the-earliest-and-latest-rounds-where-players-compete/?envType=daily-question&envId=2025-07-12"><strong>➥ 🫀 1900 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given `n`, the number of players participating in a tournament. Players are initially lined up in a row, numbered from 1 to `n` based on their position.

The tournament proceeds in multiple rounds (starting with round 1). In each round:

1.  The i<sup>th</sup> player from the *front* of the row competes against the i<sup>th</sup> player from the *end* of the row.
2.  The winner of each match advances to the next round.
3.  If the number of players is odd, the player in the middle of the row automatically advances to the next round.

After each round, the winners are re-aligned in the row according to their original player number (in ascending order).

Two players, `firstPlayer` and `secondPlayer`, are designated as the "best" players in the tournament. This means that these players can win against any other player before they have to compete against each other. For all other pairings (between players other than `firstPlayer` and `secondPlayer`), you can choose the outcome of the match.

Given the integers `n`, `firstPlayer`, and `secondPlayer`, you need to determine the earliest and latest possible round numbers in which these two "best" players could compete.

Return an integer array of length 2, containing the earliest and latest round numbers: `[earliestRound, latestRound]`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 11, firstPlayer = 2, secondPlayer = 4

  ### 📤 `Output`  ➤ [3,4]

  ### 🔦 `Explanation`  ➤
One possible scenario which leads to the earliest round number:

First round: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
Second round: 2, 3, 4, 5, 6, 11
Third round: 2, 3, 4
One possible scenario which leads to the latest round number:
First round: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
Second round: 1, 2, 3, 4, 5, 6
Third round: 1, 2, 4
Fourth round: 2, 4


</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 5, firstPlayer = 1, secondPlayer = 5

  ### 📤 `Output`  ➤ [1,1]

  ### 🔦 `Explanation` ➤ The players numbered 1 and 5 compete in the first round.
There is no way to make them compete in any other round.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= n <= 28 </br>

🔹 1 <= firstPlayer < secondPlayer <= n </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Dynamic Programming**  </br>

🔸 **Memoization**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/12%20-%2007%20-%202025%20---%201900.%20The%20Earliest%20and%20Latest%20Rounds%20Where%20Players%20Compete%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201900.%20The%20Earliest%20and%20Latest%20Rounds%20Where%20Pl.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/12%20-%2007%20-%202025%20---%201900.%20The%20Earliest%20and%20Latest%20Rounds%20Where%20Players%20Compete%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201900.%20The%20Earliest%20and%20Latest%20Rounds%20Where%20Play.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/12%20-%2007%20-%202025%20---%201900.%20The%20Earliest%20and%20Latest%20Rounds%20Where%20Players%20Compete%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201900.%20The%20Earliest%20and%20Latest%20Rounds%20Where%20Pl.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/12%20-%2007%20-%202025%20---%201900.%20The%20Earliest%20and%20Latest%20Rounds%20Where%20Players%20Compete%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201900.%20The%20Earliest%20and%20Latest%20Rounds%20Wher.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/08eebddb-3687-478a-9f75-227300c4d0af" width = "700px" height="462px" />

</h1>
