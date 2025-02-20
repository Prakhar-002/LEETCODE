# 1980. Find Unique Binary String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-unique-binary-string/description/?envType=daily-question&envId=2025-02-20"><strong>➥ ☢️ 1980 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of strings `nums` containing `n` unique binary strings each of length `n`, return *a binary string of length `n` that does not appear in* `nums`. *If there are multiple answers, you may return any of them*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  nums = ["01","10"]

  ### 📤 `Output`  ➤ "11"

  ### 🔦 `Explanation`  ➤ "11" does not appear in nums. "00" would also be correct.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = ["00","01"]

  ### 📤 `Output`  ➤ "11"

  ### 🔦 `Explanation` ➤ "11" does not appear in nums. "10" would also be correct.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = ["111","011","001"]

  ### 📤 `Output`  ➤ "101"

  ### 🔦 `Explanation`  ➤ "101" does not appear in nums. "000", "010", "100", and "110" would also be correct.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == nums.length`** </br>

🔹 **`1 <= n <= 16`** </br>

🔹 **`nums[i].length == n`** </br>

🔹 **`nums[i]` is either `'0'` or `'1'`.** </br>

🔹 **All the strings of `nums` are unique.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Backtracking**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/20%20-%2002%20-%202025%20---%201980.%20Find%20Unique%20Binary%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201980.%20Find%20Unique%20Binary%20String.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/20%20-%2002%20-%202025%20---%201980.%20Find%20Unique%20Binary%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201980.%20Find%20Unique%20Binary%20String.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/20%20-%2002%20-%202025%20---%201980.%20Find%20Unique%20Binary%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201980.%20Find%20Unique%20Binary%20String.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/20%20-%2002%20-%202025%20---%201980.%20Find%20Unique%20Binary%20String%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201980.%20Find%20Unique%20Binary%20String.js) |
