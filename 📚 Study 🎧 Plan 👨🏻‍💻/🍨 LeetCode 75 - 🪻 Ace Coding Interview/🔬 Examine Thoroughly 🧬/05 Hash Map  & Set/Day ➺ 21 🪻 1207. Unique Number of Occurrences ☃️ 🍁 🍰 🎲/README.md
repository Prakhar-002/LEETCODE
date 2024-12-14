# 1207. Unique Number of Occurrences

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/unique-number-of-occurrences/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ♻️ 1207 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of integers `arr`, return `true` *if the number of occurrences of each value in the array is unique or `false` otherwise*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ arr = [1,2,2,1,1,3]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [1,2]

  ### 📤 `Output`  ➤ false

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [-3,0,1,-3,1,1,1,-3,10,0]

  ### 📤 `Output`  ➤ true

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= arr.length <= 1000`** </br>

🔹 **`-1000 <= arr[i] <= 1000`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hash%20Map%20%20%26%20Set/Day%20%E2%9E%BA%2021%20%F0%9F%AA%BB%201207.%20Unique%20Number%20of%20Occurrences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201207.%20Unique%20Number%20of%20Occurr.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hash%20Map%20%20%26%20Set/Day%20%E2%9E%BA%2021%20%F0%9F%AA%BB%201207.%20Unique%20Number%20of%20Occurrences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201207.%20Unique%20Number%20of%20Occurren.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hash%20Map%20%20%26%20Set/Day%20%E2%9E%BA%2021%20%F0%9F%AA%BB%201207.%20Unique%20Number%20of%20Occurrences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201207.%20Unique%20Number%20of%20Occurr.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Hash%20Map%20%20%26%20Set/Day%20%E2%9E%BA%2021%20%F0%9F%AA%BB%201207.%20Unique%20Number%20of%20Occurrences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201207.%20Unique%20Number%20of%20Oc.js) |
