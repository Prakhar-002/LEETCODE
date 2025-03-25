# 3394. Check if Grid can be Cut into Sections

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/check-if-grid-can-be-cut-into-sections/?envType=daily-question&envId=2025-03-25"><strong>➥ ☢️ 3394 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Imagine you have an *n* x *n* grid, where *n* is a positive integer representing its dimensions. The grid's origin is at the bottom-left corner. You are given a list of non-overlapping *rectangles*, each defined by its bottom-left corner (startx, starty) and top-right corner (endx, endy).

Your task is to determine if it's possible to make *either* two horizontal *or* two vertical cuts on the grid such that the following conditions are met:

1.  The cuts divide the grid into three distinct sections.
2.  Each of the three sections contains at least one rectangle.
3.  Every rectangle belongs to exactly one section.

Return `true` if such cuts are possible; otherwise, return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 5, rectangles = [[1,0,5,2],[0,2,2,4],[3,2,5,3],[0,4,4,5]]

  ### 📤 `Output`  ➤ true

<img src="https://github.com/user-attachments/assets/c0b86ce8-b9c2-4114-a18a-a150f5ec6ded" width="285px" height="280px"/>

  ### 🔦 `Explanation`  ➤ The grid is shown in the diagram. We can make horizontal cuts at y = 2 and y = 4. Hence, output is true.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 4, rectangles = [[0,0,1,1],[2,0,3,4],[0,2,2,3],[3,0,4,3]]

  ### 📤 `Output`  ➤ true

<img src="https://github.com/user-attachments/assets/9af49e2f-a5a5-43de-a4cf-a8543df049b6" width="240px" height="240px"/>

  ### 🔦 `Explanation` ➤ We can make vertical cuts at x = 2 and x = 3. Hence, output is true.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 4, rectangles = [[0,2,2,4],[1,0,3,2],[2,2,3,4],[3,0,4,2],[3,2,4,4]]

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation`  ➤ We cannot make two horizontal or two vertical cuts that satisfy the conditions. Hence, output is false.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 5, rectangles = [[0,0,1,1],[2,2,3,3],[4,4,5,5]]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤  We can make vertical cut on  1<x<2 and 3<x<4. Similarly we can also perform horizontal cuts at similar intervals. The Important part is there must exist rectangles in these split areas.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 3 <= n <= 10<sup>9</sup> </br>

🔹 3 <= rectangles.length <= 10<sup>5</sup> </br>

🔹 `0 <= rectangles[i][0] < rectangles[i][2] <= n` </br>

🔹 `0 <= rectangles[i][1] < rectangles[i][3] <= n` </br>

🔹 No two rectangles overlap. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/25%20-%2003%20-%202025%20---%203394.%20Check%20if%20Grid%20can%20be%20Cut%20into%20Sections%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203394.%20Check%20if%20Grid%20can%20be%20Cut%20into%20Sections.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/25%20-%2003%20-%202025%20---%203394.%20Check%20if%20Grid%20can%20be%20Cut%20into%20Sections%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203394.%20Check%20if%20Grid%20can%20be%20Cut%20into%20Sections.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/25%20-%2003%20-%202025%20---%203394.%20Check%20if%20Grid%20can%20be%20Cut%20into%20Sections%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203394.%20Check%20if%20Grid%20can%20be%20Cut%20into%20Sections.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/25%20-%2003%20-%202025%20---%203394.%20Check%20if%20Grid%20can%20be%20Cut%20into%20Sections%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203394.%20Check%20if%20Grid%20can%20be%20Cut%20into%20Sections.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/d3469404-5e0e-4479-94f4-286a0dbf79ff" width = "700px" height="462px" />

</h1>
