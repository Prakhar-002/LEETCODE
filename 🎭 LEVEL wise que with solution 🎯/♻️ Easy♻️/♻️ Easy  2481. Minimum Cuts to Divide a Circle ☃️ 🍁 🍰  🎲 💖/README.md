# 2481. Minimum Cuts to Divide a Circle

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-cuts-to-divide-a-circle/"><strong>➥ ♻️ 2481 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A `valid cut` in a circle can be:

- A cut that is represented by a straight line that touches two points on the edge of the circle and passes through its center, or

- A cut that is represented by a straight line that touches one point on the edge of the circle and its center.

### Some valid and invalid cuts are shown in the figures below.

<img src="https://github.com/user-attachments/assets/6a109ceb-601f-49a0-8472-909e5209ee58" width="450px" height="174px"/>

### Given the integer `n`, return *the `minimum` number of cuts needed to divide a circle into `n` equal slices*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/ba96a076-82fe-4a7d-bb06-07148250768f" width="200px" height="200px"/>

  ### 📥 `Input`  ➤ n = 4

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ The above figure shows how cutting the circle twice through the middle divides it into 4 equal slices.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/96ff271d-fae8-43d1-afe7-5f2e4dd6020d" width="200px" height="200px"/>

  ### 📥 `Input` ➤ n = 3

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ At least 3 cuts are needed to divide the circle into 3 equal slices. </br></br> It can be shown that less than 3 cuts cannot result in 3 slices of equal size and shape.</br></br> Also note that the first cut will not divide the circle into distinct parts.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= n <= 100`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **Geometry**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20%202481.%20Minimum%20Cuts%20to%20Divide%20a%20Circle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202481.%20Minimum%20Cuts%20to%20Divide%20a%20Circle.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20%202481.%20Minimum%20Cuts%20to%20Divide%20a%20Circle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202481.%20Minimum%20Cuts%20to%20Divide%20a%20Circle.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20%202481.%20Minimum%20Cuts%20to%20Divide%20a%20Circle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202481.%20Minimum%20Cuts%20to%20Divide%20a%20Circle.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20%202481.%20Minimum%20Cuts%20to%20Divide%20a%20Circle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202481.%20Minimum%20Cuts%20to%20Divide%20a%20Circle.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%20%202481.%20Minimum%20Cuts%20to%20Divide%20a%20Circle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202481.%20Minimum%20Cuts%20to%20Divide%20a%20Circle.c)  |
