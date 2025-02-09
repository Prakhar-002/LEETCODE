# 45. Jump Game II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/jump-game-ii/description/?envType=study-plan-v2&envId=top-interview-150"><strong>➥ ☢️ 45 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed array of integers `nums` of length `n`. You are initially positioned at `nums[0]`.

### Each element `nums[i]` represents the maximum length of a forward jump from index `i`. In other words, if you are at `nums[i]`, you can jump to any `nums[i + j]` where:

- `0 <= j <= nums[i]` and

- `i + j < n`

### Return *the minimum number of jumps to reach* `nums[n - 1]`. The test cases are generated such that you can reach `nums[n - 1]`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [2,3,1,1,4]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤  The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,3,0,1,4]

  ### 📤 `Output`  ➤ 2

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>4</sup>** </br>

🔹 **`0 <= nums[i] <= 1000`** </br>

🔹 **It's guaranteed that you can reach nums[n - 1].** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2010%20%F0%9F%8D%A2%2045.%20Jump%20Game%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%2045.%20Jump%20Game%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2010%20%F0%9F%8D%A2%2045.%20Jump%20Game%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%2045.%20Jump%20Game%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2010%20%F0%9F%8D%A2%2045.%20Jump%20Game%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%2045.%20Jump%20Game%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2010%20%F0%9F%8D%A2%2045.%20Jump%20Game%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2045.%20Jump%20Game%20II.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A2%20Top%20Interview%20150%20%F0%9F%A5%A1%20Must%20do%20List/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Array%20%26%20String/Day%20%E2%9E%BA%2010%20%F0%9F%8D%A2%2045.%20Jump%20Game%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%2045.%20Jump%20Game%20II.c)  |
