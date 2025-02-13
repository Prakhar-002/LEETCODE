# 2208. Minimum Operations to Halve Array Sum

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-operations-to-halve-array-sum/"><strong>➥ ☢️ 2208 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array nums of positive integers. In one operation, you can choose any number from nums and reduce it to exactly half the number. (Note that you may choose this reduced number in future operations.)

### Return *the minimum number of operations to reduce the sum of* `nums` *by at least half*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [5,19,8,1]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ The initial sum of nums is equal to 5 + 19 + 8 + 1 = 33.</br></br>The following is one of the ways to reduce the sum by at least half:</br></br>Pick the number 19 and reduce it to 9.5.</br></br>Pick the number 9.5 and reduce it to 4.75.</br></br>Pick the number 8 and reduce it to 4.</br></br>The final array is [5, 4.75, 4, 1] with a total sum of 5 + 4.75 + 4 + 1 = 14.75. </br></br>The sum of nums has been reduced by 33 - 14.75 = 18.25, which is at least half of the initial sum, 18.25 >= 33/2 = 16.5.</br></br>Overall, 3 operations were used so we return 3.</br></br>It can be shown that we cannot reduce the sum by at least half in less than 3 operations.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3,8,20]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ The initial sum of nums is equal to 3 + 8 + 20 = 31.</br></br>The following is one of the ways to reduce the sum by at least half:</br></br>Pick the number 20 and reduce it to 10.</br></br>Pick the number 10 and reduce it to 5.</br></br>Pick the number 3 and reduce it to 1.5.</br></br>The final array is [1.5, 8, 5] with a total sum of 1.5 + 8 + 5 = 14.5. </br></br>The sum of nums has been reduced by 31 - 14.5 = 16.5, which is at least half of the initial sum, 16.5 >= 31/2 = 15.5.</br></br>Overall, 3 operations were used so we return 3.</br></br>It can be shown that we cannot reduce the sum by at least half in less than 3 operations.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **1 <= nums[i] <= 10<sup>7</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>
🔸 **Heap (Priority Queue)**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
