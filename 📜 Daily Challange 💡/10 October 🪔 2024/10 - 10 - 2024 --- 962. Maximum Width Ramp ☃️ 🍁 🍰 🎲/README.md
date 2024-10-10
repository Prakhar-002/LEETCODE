# 962. Maximum Width Ramp

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-width-ramp/description/?envType=daily-question&envId=2024-10-10"><strong>➥ ☢️ 962 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A `ramp` in an integer array `nums` is a pair `(i, j)` for which `i < j` and `nums[i] <= nums[j]`. The `width` of such a ramp is `j - i`.

### Given an integer array `nums`, return *the maximum width of a `ramp` in `nums`. If there is no `ramp` in `nums`, return `0`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [6,0,8,2,1,5]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤  The maximum width ramp is achieved at (i, j) = (1, 5) ➺ nums[1] = 0 and nums[5] = 5.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [9,8,1,0,1,9,4,0,4,1]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation` ➤ The maximum width ramp is achieved at (i, j) = (2, 9) ➺ nums[2] = 1 and nums[9] = 1.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [6,0,8,2,1,5,12,40,45,0,2,6]

  ### 📤 `Output`  ➤ 11

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= nums.length <= 5 * 10<sup>4</sup>** </br>

🔹 **0 <= nums[i] <= 5 * 10<sup>4</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Stack**  </br>
🔸 **Monotonic Stack**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/10%20-%2010%20-%202024%20---%20962.%20Maximum%20Width%20Ramp%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20962.%20Maximum%20Width%20Ramp.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/10%20-%2010%20-%202024%20---%20962.%20Maximum%20Width%20Ramp%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20962.%20Maximum%20Width%20Ramp.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/10%20-%2010%20-%202024%20---%20962.%20Maximum%20Width%20Ramp%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20962.%20Maximum%20Width%20Ramp.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/10%20-%2010%20-%202024%20---%20962.%20Maximum%20Width%20Ramp%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20962.%20Maximum%20Width%20Ramp.js) |
