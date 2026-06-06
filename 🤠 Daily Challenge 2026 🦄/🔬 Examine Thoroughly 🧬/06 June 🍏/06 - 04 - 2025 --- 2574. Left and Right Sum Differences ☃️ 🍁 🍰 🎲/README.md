# 2574. Left and Right Sum Differences

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/left-and-right-sum-differences/description/?envType=daily-question&envId=2026-06-06"><strong>➥ ♻️ 2574 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given a 0-indexed integer array `nums` of size `n`.
### Define two arrays `leftSum` and `rightSum` where:
### &nbsp;&nbsp;&nbsp;&nbsp;• `leftSum[i]` is the **sum of elements to the left** of index `i` in `nums`. If there is no such element, `leftSum[i] = 0`.
### &nbsp;&nbsp;&nbsp;&nbsp;• `rightSum[i]` is the **sum of elements to the right** of index `i` in `nums`. If there is no such element, `rightSum[i] = 0`.
### Return an integer array `answer` of size `n` where `answer[i] = |leftSum[i] - rightSum[i]|`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ nums = [10,4,8,3]
  ### 📤 `Output`  ➤ [15,1,11,22]
  ### 🔦 `Explanation`  ➤ `leftSum = [0,10,14,22]` and `rightSum = [15,11,3,0]`. So `answer = [|0-15|, |10-11|, |14-3|, |22-0|] = [15,1,11,22]`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [1]
  ### 📤 `Output`  ➤ [0]
  ### 🔦 `Explanation` ➤ `leftSum = [0]` and `rightSum = [0]`. So `answer = [|0-0|] = [0]`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ nums = [1,2,3]
  ### 📤 `Output`  ➤ [5,2,3]
  ### 🔦 `Explanation` ➤ `leftSum = [0,1,3]` and `rightSum = [5,3,0]`. So `answer = [|0-5|, |1-3|, |3-0|] = [5,2,3]`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= nums.length <= 1000` </br>
🔹 `1 <= nums[i] <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Prefix Sum** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/06%20-%2004%20-%202025%20---%202574.%20Left%20and%20Right%20Sum%20Differences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202574.%20Left%20and%20Right%20Sum%20Differences.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/06%20-%2004%20-%202025%20---%202574.%20Left%20and%20Right%20Sum%20Differences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202574.%20Left%20and%20Right%20Sum%20Differences.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/06%20-%2004%20-%202025%20---%202574.%20Left%20and%20Right%20Sum%20Differences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202574.%20Left%20and%20Right%20Sum%20Differences.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/06%20-%2004%20-%202025%20---%202574.%20Left%20and%20Right%20Sum%20Differences%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202574.%20Left%20and%20Right%20Sum%20Differences.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/112e3865-4bc1-4a67-8c9c-ad254a0a4265" width = "700px" height="462px" />

</h1>
