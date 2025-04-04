# 2342. Max Sum of a Pair With Equal Sum of Digits

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/description/?envType=daily-question&envId=2025-02-12"><strong>➥ ☢️ 2342 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed array `nums` consisting of positive integers. You can choose two indices `i` and `j`, such that `i != j`, and the sum of digits of the number `nums[i]` is equal to that of `nums[j]`.

### Return *the maximum value of* `nums[i] + nums[j]` *that you can obtain over all possible indices* `i` and `j` *that satisfy the conditions*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [18,43,36,13,7]

  ### 📤 `Output`  ➤ 54

  ### 🔦 `Explanation`  ➤ The pairs (i, j) that satisfy the conditions are:</br></br> ➺ (0, 2), both numbers have a sum of digits equal to 9, and their sum is 18 + 36 = 54.</br></br> ➺ (1, 4), both numbers have a sum of digits equal to 7, and their sum is 43 + 7 = 50.</br></br> So the maximum sum that we can obtain is 54.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [10,12,19,14]

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤ There are no two numbers that satisfy the conditions, so we return -1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **1 <= nums[i] <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Sorting**  </br>
🔸 **Heap (Priority Queue)**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/12%20-%2002%20-%202025%20---%202342.%20Max%20Sum%20of%20a%20Pair%20With%20Equal%20Sum%20of%20Digits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202342.%20Max%20Sum%20of%20a%20Pair%20With%20Equal%20Sum%20of%20Digits.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/12%20-%2002%20-%202025%20---%202342.%20Max%20Sum%20of%20a%20Pair%20With%20Equal%20Sum%20of%20Digits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202342.%20Max%20Sum%20of%20a%20Pair%20With%20Equal%20Sum%20of%20Digits.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/12%20-%2002%20-%202025%20---%202342.%20Max%20Sum%20of%20a%20Pair%20With%20Equal%20Sum%20of%20Digits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202342.%20Max%20Sum%20of%20a%20Pair%20With%20Equal%20Sum%20of%20Digits.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/12%20-%2002%20-%202025%20---%202342.%20Max%20Sum%20of%20a%20Pair%20With%20Equal%20Sum%20of%20Digits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202342.%20Max%20Sum%20of%20a%20Pair%20With%20Equal%20Sum%20of%20Digits.js) |
