# 2364. Count Number of Bad Pairs

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-number-of-bad-pairs/description/?envType=daily-question&envId=2025-02-09"><strong>➥ ☢️ 2364 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums`. A pair of indices `(i, j)` is a bad pair if `i < j` and `j - i != nums[j] - nums[i]`.

### Return *the total number of bad pairs in* `nums`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [4,1,3,3]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ The pair (0, 1) is a bad pair since 1 - 0 != 1 - 4.</br> ➺ The pair (0, 2) is a bad pair since 2 - 0 != 3 - 4, 2 != -1.</br> ➺ The pair (0, 3) is a bad pair since 3 - 0 != 3 - 4, 3 != -1.</br> ➺ The pair (1, 2) is a bad pair since 2 - 1 != 3 - 1, 1 != 2.</br> ➺ The pair (2, 3) is a bad pair since 3 - 2 != 3 - 3, 1 != 0.</br> ➺ There are a total of 5 bad pairs, so we return 5.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,3,4,5]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ There are no bad pairs.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **1 <= nums[i] <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Math**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/09%20-%2002%20-%202025%20---%202364.%20Count%20Number%20of%20Bad%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202364.%20Count%20Number%20of%20Bad%20Pairs.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/09%20-%2002%20-%202025%20---%202364.%20Count%20Number%20of%20Bad%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202364.%20Count%20Number%20of%20Bad%20Pairs.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/09%20-%2002%20-%202025%20---%202364.%20Count%20Number%20of%20Bad%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202364.%20Count%20Number%20of%20Bad%20Pairs.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/09%20-%2002%20-%202025%20---%202364.%20Count%20Number%20of%20Bad%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202364.%20Count%20Number%20of%20Bad%20Pairs.js) |

