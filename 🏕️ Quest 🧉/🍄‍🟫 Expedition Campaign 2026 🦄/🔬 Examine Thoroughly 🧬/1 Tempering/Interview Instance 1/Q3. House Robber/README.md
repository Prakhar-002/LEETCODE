# 198. House Robber

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/merge-intervals/?envType=problem-list-v2&envId=interview-instance-i"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br> 

# Description 📜 ˋ°•*⁀➷

### You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and `it will automatically contact the police if two adjacent houses were broken into on the same night`.

### Given an integer array `nums` representing the amount of money of each house, return *the maximum amount of money you can rob tonight without alerting the police*.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input ➤  nums = [1,2,3,1]

  ### Output ➤ 4

  ### Explanation  ➤ Rob house 1 (money = 1) and then rob house 3 (money = 3).</br> Total amount you can rob = 1 + 3 = 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ nums = [2,7,9,3,1]

  ### Output ➤ 12

  ### Explanation ➤ Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1). </br> Total amount you can rob = 2 + 9 + 1 = 12.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= nums.length <= 100**
- **0 <= nums[i] <= 400**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Dynamic Programming**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/DP/Q3.%20House%20Robber/%F0%9F%8D%81JAVA%20-%20House%20Robber.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/DP/Q3.%20House%20Robber/%F0%9F%8E%B2CPP%20-%20House%20Robber.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/DP/Q3.%20House%20Robber/%F0%9F%8D%B0PYTHON%20-%20House%20Robber.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/DP/Q3.%20House%20Robber/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20House%20Robber.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" > 

<img src ="https://github.com/user-attachments/assets/46784c9b-4bfc-40a2-9d15-6ada3c6f42b8" width = "700px" height="462px" />

</h1>
