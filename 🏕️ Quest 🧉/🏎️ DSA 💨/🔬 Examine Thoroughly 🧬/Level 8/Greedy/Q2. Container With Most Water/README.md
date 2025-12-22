# Q2. Container With Most Water

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/container-with-most-water/description/?envType=problem-list-v2&envId=dsa-strategy-summit-greedy"><strong>➥ ☢️ Q2 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `height` of length `n`. There are n vertical lines drawn such that the two endpoints of the i<sup>th</sup> line are `(i, 0)` and `(i, height[i])`.

### Find two lines that together with the x-axis form a container, such that the container contains the most water.

### Return *the maximum amount of water a container can store*.

### Notice that you may not slant the container.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  height = [1,8,6,2,5,4,8,3,7]

  ### 📤 `Output`  ➤ 49

  ### 🔦 `Explanation`  ➤ The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![11 que 1](https://github.com/user-attachments/assets/26e67ccd-0d4d-489b-91ec-4ad5d44c1a1d)

  ### 📥 `Input` ➤ height = [1,1]

  ### 📤 `Output`  ➤ 1

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == height.length`** </br>

🔹 **2 <= n <= 10<sup>5</sup>** </br>

🔹 **0 <= height[i] <= 10<sup>4</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>
🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2013%20%F0%9F%A5%A1%2011.%20Container%20With%20Most%20Water%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%2011.%20Container%20With%20Most%20Water.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2013%20%F0%9F%A5%A1%2011.%20Container%20With%20Most%20Water%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%2011.%20Container%20With%20Most%20Water.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2013%20%F0%9F%A5%A1%2011.%20Container%20With%20Most%20Water%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%2011.%20Container%20With%20Most%20Water.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2013%20%F0%9F%A5%A1%2011.%20Container%20With%20Most%20Water%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2011.%20Container%20With%20Most%20Water.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Two%20Pointers/Day%20%E2%9E%BA%2013%20%F0%9F%A5%A1%2011.%20Container%20With%20Most%20Water%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%2011.%20Container%20With%20Most%20Water.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/c70e47bb-92fe-4f26-b42a-ee6fb1db2f76" width = "700px" height="462px" />

</h1>
