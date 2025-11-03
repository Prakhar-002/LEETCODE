# 1578. Minimum Time to Make Rope Colorful

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-time-to-make-rope-colorful/description/?envType=daily-question&envId=2025-11-03"><strong>➥ ☢️ 1578 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Alice has `n` balloons arranged on a rope. You are given a 0-indexed string `colors` where `colors[i]` is the color of the ith balloon.

### Alice wants the rope to be colorful. She does not want two consecutive balloons to be of the same color, so she asks Bob for help. Bob can remove some balloons from the rope to make it colorful. You are given a 0-indexed integer array `neededTime` where `neededTime[i]` is the time (in seconds) that Bob needs to remove the ith balloon from the rope.

### Return the minimum time Bob needs to make the rope colorful.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/9b3cc887-a99f-4a86-b100-f08561cbddc9" width="" height=""/>

  ### 📥 `Input`  ➤ `colors = "abaac", neededTime = [1,2,3,4,5]`

  ### 📤 `Output`  ➤ `3`

  ### 🔦 `Explanation`  ➤

  - In the above image, 'a' is blue, 'b' is red, and 'c' is green.
  - Bob can remove the blue balloon at index 2. This takes 3 seconds.
  - There are no longer two consecutive balloons of the same color. Total time = 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/df7b510e-9dca-46f0-b756-e86c43eb1b8d" width="" height=""/>

  ### 📥 `Input`  ➤ `colors = "abc", neededTime = [1,2,3]`

  ### 📤 `Output`  ➤ `0`

  ### 🔦 `Explanation`  ➤

  - The rope is already colorful. Bob does not need to remove any balloons from the rope.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/5abb0a31-0e5b-4cf4-9d97-da6923c52f4f" width="" height=""/>

  ### 📥 `Input`  ➤ `colors = "aabaa", neededTime = [1,2,3,4,1]`

  ### 📤 `Output`  ➤ `2`

  ### 🔦 `Explanation`  ➤

  - Bob will remove the balloons at indices 0 and 4. Each balloons takes 1 second to remove.
  - There are no longer two consecutive balloons of the same color. Total time = 1 + 1 = 2.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `n == colors.length == neededTime.length` </br>
🔹 `1 <= n <= 10^5` </br>
🔹 `1 <= neededTime[i] <= 10^4` </br>
🔹 `colors` contains only lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **String** </br>
🔸 **Dynamic Programming** </br>
🔸 **Greedy** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
