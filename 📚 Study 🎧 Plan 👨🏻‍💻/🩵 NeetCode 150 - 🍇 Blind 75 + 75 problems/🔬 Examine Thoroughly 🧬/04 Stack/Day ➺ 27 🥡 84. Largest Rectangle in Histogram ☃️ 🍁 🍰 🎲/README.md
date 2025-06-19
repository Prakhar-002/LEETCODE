# 84. Largest Rectangle in Histogram

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/largest-rectangle-in-histogram/description/"><strong>➥ 🫀 84 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of integers `heights` representing the histogram's bar height where the width of each bar is `1`, return the *area of the largest rectangle in the histogram*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ heights = [2,1,5,6,2,3]

  ### 📤 `Output`  ➤ 10

  ### 🔦 `Explanation`  ➤  The histogram consists of bars with heights [2,1,5,6,2,3] and width of each bar is 1.</br></br> The largest rectangle is shown in the red area, which has an area = 10 units.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ heights = [2,4]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤  The histogram consists of two bars with heights [2,4] and width of each bar is 1. </br></br>The largest rectangle has an area = 4 units.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= heights.length <= 10<sup>5</sup>** </br>

🔹 **0 <= heights[i] <= 10<sup>4</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Stack**  </br>
🔸 **Monotonic Stack**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Stack/Day%20%E2%9E%BA%2027%20%F0%9F%A5%A1%2084.%20Largest%20Rectangle%20in%20Histogram%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%2084.%20Largest%20Rectangle%20in%20Histogram.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Stack/Day%20%E2%9E%BA%2027%20%F0%9F%A5%A1%2084.%20Largest%20Rectangle%20in%20Histogram%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%2084.%20Largest%20Rectangle%20in%20Histogram.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Stack/Day%20%E2%9E%BA%2027%20%F0%9F%A5%A1%2084.%20Largest%20Rectangle%20in%20Histogram%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%2084.%20Largest%20Rectangle%20in%20Histogram.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Stack/Day%20%E2%9E%BA%2027%20%F0%9F%A5%A1%2084.%20Largest%20Rectangle%20in%20Histogram%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2084.%20Largest%20Rectangle%20in%20Histogr.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/c3428096-7708-4f35-91a4-eda1963ca91e" width = "700px" height="462px" />

</h1>
