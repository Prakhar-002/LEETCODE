# 462. Minimum Moves to Equal Array Elements II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/"><strong>➥ ☢️ 462 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

You are given an **integer array** `nums` of size `n`.  

In **one move**, you can **increment or decrement** an element of the array by `1`.  

### 🔹 Task:

- Return the **minimum number of moves** required to make all elements **equal**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,3]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ Only two moves are needed (remember each move increments or decrements one element):
[1,2,3]  =>  [2,2,3]  =>  [2,2,2]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,10,2,9]

  ### 📤 `Output`  ➤ 16

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1, 5, 7, 9]

  ### 📤 `Output`  ➤ 12

  ### 🔦 `Explanation`  ➤ Make all element '5',then operations need  0 + 0 + 2 + 4. Therefore the result should return to 12

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1, 2, 3, 4, 5]

  ### 📤 `Output`  ➤ 6

   ### 🔦 `Explanation`  ➤ Make all element become '3', operation can becomes 2 +1 + 0 +1 +2 = 6.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == nums.length </br>
🔹 1 <= nums.length <= 10<sup>5</sup> </br>
🔹 -10<sup>9</sup> <= nums[i] <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20462.%20Minimum%20Moves%20to%20Equal%20Array%20Elements%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20462.%20Minimum%20Moves%20to%20Equal%20Array%20Elements%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20462.%20Minimum%20Moves%20to%20Equal%20Array%20Elements%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20462.%20Minimum%20Moves%20to%20Equal%20Array%20Elements%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20462.%20Minimum%20Moves%20to%20Equal%20Array%20Elements%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20462.%20Minimum%20Moves%20to%20Equal%20Array%20Elements%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20462.%20Minimum%20Moves%20to%20Equal%20Array%20Elements%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20462.%20Minimum%20Moves%20to%20Equal%20Array%20Elements%20II.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/05d2bf61-5c35-41e6-9fc6-9aae207c7f58" width = "700px" height="462px" />

</h1>
