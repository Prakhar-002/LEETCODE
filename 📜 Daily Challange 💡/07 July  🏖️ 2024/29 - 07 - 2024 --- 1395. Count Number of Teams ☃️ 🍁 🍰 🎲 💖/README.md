# 1395. Count Number of Teams

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-number-of-teams/description/?envType=daily-question&envId=2024-07-29"><strong>➥ ☢️ 1395 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` soldiers standing in a line. Each soldier is assigned a *unique* `rating` value.

### You have to form a team of 3 soldiers amongst them under the following rules:

- Choose 3 soldiers with index (`i`, `j`, `k`) with rating (`rating[i]`, `rating[j]`, `rating[k]`).

- A team is valid if: (`rating[i] < rating[j] < rating[k]) or (rating[i] > rating[j] > rating[k]`) where (`0 <= i < j < k < n`).

### Return *the number of teams you can form given the conditions*. (soldiers can be part of multiple teams).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ rating = [2,5,3,4,1]

  ### 📤 Output  ➤ 3

  ### 🔦 Explanation  ➤ We can form three teams given the conditions. (2,3,4), (5,4,1), (5,3,1).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤  rating = [2,1,3]

  ### 📤 Output  ➤ 0

  ### 🔦 Explanation ➤ We can't form any team given the conditions.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ rating = [1,2,3,4]

  ### 📤 Output  ➤ 4

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == rating.length`** </br>
🔹 **`3 <= n <= 1000`** </br>
🔹 **1 <= rating[i] <= 10<sup>5</sup>** </br>
🔹 **All the integers in `rating` are `unique`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Binary Indexed Tree**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/29%20-%2007%20-%202024%20---%201395.%20Count%20Number%20of%20Teams%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA-1395-CountNumberOfTeams.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/29%20-%2007%20-%202024%20---%201395.%20Count%20Number%20of%20Teams%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP-1395-CountNumberOfTeams.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/29%20-%2007%20-%202024%20---%201395.%20Count%20Number%20of%20Teams%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON-1395-CountNumberOfTeams.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/29%20-%2007%20-%202024%20---%201395.%20Count%20Number%20of%20Teams%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT-1395-CountNumberOfTeams.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/29%20-%2007%20-%202024%20---%201395.%20Count%20Number%20of%20Teams%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C-1395-CountNumberOfTeams.c)  |

