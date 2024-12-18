# 2352. Equal Row and Column Pairs

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/equal-row-and-column-pairs/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 2352 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a 0-indexed `n x n` integer matrix `grid`, return *the number of pairs (r<sub>i</sub>, c<sub>j</sub>) such that row r<sub>i</sub> and column c<sub>j</sub> are equal*.

### A row and column pair is considered equal if they contain the same elements in the same order (i.e., an equal array).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  grid = [[3,2,1],[1,7,6],[2,7,7]]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ There is 1 equal row and column pair:
  
     ➺ (Row 2, Column 1): [2,7,7]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[3,1,2,2],[1,4,4,5],[2,4,2,2],[2,4,2,2]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ There are 3 equal row and column pairs:

    ➺ (Row 0, Column 0): [3,1,2,2]
    ➺ (Row 2, Column 2): [2,4,2,2]
    ➺ (Row 3, Column 2): [2,4,2,2]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == grid.length == grid[i].length`** </br>

🔹 **`1 <= n <= 200`** </br>

🔹 **1 <= grid[i][j] <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Matrix**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hash%20Map%20%20%26%20Set/Day%20%E2%9E%BA%2023%20%F0%9F%AA%BB%202352.%20Equal%20Row%20and%20Column%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202352.%20Equal%20Row%20and%20Column%20Pair.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hash%20Map%20%20%26%20Set/Day%20%E2%9E%BA%2023%20%F0%9F%AA%BB%202352.%20Equal%20Row%20and%20Column%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202352.%20Equal%20Row%20and%20Column%20Pairs.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hash%20Map%20%20%26%20Set/Day%20%E2%9E%BA%2023%20%F0%9F%AA%BB%202352.%20Equal%20Row%20and%20Column%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202352.%20Equal%20Row%20and%20Column%20Pair.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hash%20Map%20%20%26%20Set/Day%20%E2%9E%BA%2023%20%F0%9F%AA%BB%202352.%20Equal%20Row%20and%20Column%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202352.%20Equal%20Row%20and%20Column%20.js) |
