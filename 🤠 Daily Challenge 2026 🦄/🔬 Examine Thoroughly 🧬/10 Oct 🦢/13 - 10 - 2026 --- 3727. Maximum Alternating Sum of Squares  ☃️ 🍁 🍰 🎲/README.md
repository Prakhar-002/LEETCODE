# 3727. Maximum Alternating Sum of Squares

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-alternating-sum-of-squares/description/?envType=daily-question&envId=2026-10-13"><strong>➥ ☢️ 3727 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`. You may rearrange the elements in any order.

### The alternating score of an array `arr` is defined as:
- `score = arr[0]^2 - arr[1]^2 + arr[2]^2 - arr[3]^2 + ...`

### Return an integer denoting the maximum possible alternating score of `nums` after rearranging its elements.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`   ➤ `nums = [1,2,3]`

  ### 📤 `Output`  ➤ `12`

  ### 🔦 `Explanation`  ➤ ➺ A possible rearrangement for `nums` is `[2,1,3]`, which gives the maximum alternating score among all possible rearrangements. The alternating score is calculated as: `2^2 - 1^2 + 3^2 = 4 - 1 + 9 = 12`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [1,-1,2,-2,3,-3]`

  ### 📤 `Output`  ➤ `16`

  ### 🔦 `Explanation` ➤ ➺ A possible rearrangement for `nums` is `[-3,-1,-2,1,3,2]`, which gives the maximum alternating score among all possible rearrangements. The alternating score is calculated as: `(-3)^2 - (-1)^2 + (-2)^2 - 1^2 + 3^2 - 2^2 = 9 - 1 + 4 - 1 + 9 - 4 = 16`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [5]`

  ### 📤 `Output`  ➤ `25`

  ### 🔦 `Explanation`  ➤ ➺ With only one element, the score is simply `5^2 = 25`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 10^5`** </br>

🔹 **`-4 * 10^4 <= nums[i] <= 4 * 10^4`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Greedy** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/13%20-%2010%20-%202026%20---%203727.%20Maximum%20Alternating%20Sum%20of%20Squares%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203727.%20Maximum%20Alternating%20Sum%20of%20Squares.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/13%20-%2010%20-%202026%20---%203727.%20Maximum%20Alternating%20Sum%20of%20Squares%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203727.%20Maximum%20Alternating%20Sum%20of%20Squares.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/13%20-%2010%20-%202026%20---%203727.%20Maximum%20Alternating%20Sum%20of%20Squares%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203727.%20Maximum%20Alternating%20Sum%20of%20Squares.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%A6%A2/13%20-%2010%20-%202026%20---%203727.%20Maximum%20Alternating%20Sum%20of%20Squares%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203727.%20Maximum%20Alternating%20Sum%20of%20Squares.js) |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/maximum-alternating-sum-of-squares/solutions/8571085/leetcode-daily-grind-java-c-python-javas-9i3z) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/b2774b0c-831e-40d8-9725-81ad16c460a7" width = "700px" height="462px" />

</h1>
