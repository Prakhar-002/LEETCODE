# 334. Increasing Triplet Subsequence

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/increasing-triplet-subsequence/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 334 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `nums`, return *`true` if there exists a triple of indices `(i, j, k)` such that `i < j < k` and `nums[i] < nums[j] < nums[k]`. If no such indices exists*, return *`false`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,3,4,5]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ Any triplet where i < j < k is valid.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [5,4,3,2,1]

  ### 📤 `Output`  ➤ false 

  ### 🔦 `Explanation` ➤  No triplet exists.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [2,1,5,0,4,6]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ The triplet (3, 4, 5) is valid because nums[3] == 0 < nums[4] == 4 < nums[5] == 6.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 5 * 10<sup>5</sup>** </br>

🔹 **-2<sup>31</sup> <= nums[i] <= 2<sup>31</sup> - 1** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2008%20%F0%9F%AA%BB%20334.%20Increasing%20Triplet%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%20334.%20Increasing%20Triplet%20Su.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2008%20%F0%9F%AA%BB%20334.%20Increasing%20Triplet%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%20334.%20Increasing%20Triplet%20Subs.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2008%20%F0%9F%AA%BB%20334.%20Increasing%20Triplet%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%20334.%20Increasing%20Triplet%20Su.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2008%20%F0%9F%AA%BB%20334.%20Increasing%20Triplet%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20334.%20Increasing%20Triple.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2008%20%F0%9F%AA%BB%20334.%20Increasing%20Triplet%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%20334.%20Increasing%20Triplet%20Subseque.c)  |



