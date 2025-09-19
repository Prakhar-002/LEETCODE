# 3484. Design Spreadsheet

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/design-spreadsheet/description/?envType=daily-question&envId=2025-09-19"><strong>➥ ☢️ 3484 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A spreadsheet is a grid with 26 columns (labeled from 'A' to 'Z') and a given number of rows. Each cell in the spreadsheet can hold an integer value between 0 and 10<sup>5</sup>.

### Implement the Spreadsheet class:

- `Spreadsheet(int rows)` Initializes a spreadsheet with 26 columns (labeled `'A'` to `'Z'`) and the specified number of rows. All cells are initially set to 0.

- `void setCell(String cell, int value)` Sets the value of the specified cell. The cell reference is provided in the format `"AX"` (e.g., `"A1"`, `"B10"`), where the letter represents the column (from `'A'` to `'Z'`) and the number represents a 1-indexed row.

- `void resetCell(String cell)` Resets the specified cell to 0.

- `int getValue(String formula)` Evaluates a formula of the form `"=X+Y"`, where `X` and `Y` are either cell references or non-negative integers, and returns the computed sum.

### Note: If `getValue` references a cell that has not been explicitly set using `setCell`, its value is considered 0.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `["Spreadsheet", "getValue", "setCell", "getValue", "setCell", "getValue", "resetCell", "getValue"]
[[3], ["=5+7"], ["A1", 10], ["=A1+6"], ["B2", 15], ["=A1+B2"], ["A1"], ["=A1+B2"]]`

  ### 📤 `Output`  ➤ `[null, 12, null, 16, null, 25, null, 15]`

  ### 🔦 `Explanation`  ➤ ➺

```JS
Spreadsheet spreadsheet = new Spreadsheet(3);  // Initializes a spreadsheet with 3 rows and 26 columns
spreadsheet.getValue("=5+7");  // returns 12 (5+7)
spreadsheet.setCell("A1", 10);  // sets A1 to 10
spreadsheet.getValue("=A1+6");  // returns 16 (10+6)
spreadsheet.setCell("B2", 15);  // sets B2 to 15
spreadsheet.getValue("=A1+B2");  // returns 25 (10+15)
spreadsheet.resetCell("A1");  // resets A1 to 0
spreadsheet.getValue("=A1+B2");  // returns 15 (0+15)
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= rows <= 10^3` </br>
🔹 `0 <= value <= 10^5` </br>
🔹 The formula is always in the format "=X+Y", where X and Y are either valid cell references or non-negative integers with values less than or equal to 10<sup>5</sup>. </br>
🔹 Each cell reference consists of a capital letter from 'A' to 'Z' followed by a row number between 1 and `rows`. </br>
🔹 At most 10<sup>4</sup> calls will be made in total to `setCell`, `resetCell`, and `getValue`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **String** </br>
🔸 **Design** </br>
🔸 **Matrix** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/19%20-%2009%20-%202025%20---%203484.%20Design%20Spreadsheet%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203484.%20Design%20Spreadsheet.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/19%20-%2009%20-%202025%20---%203484.%20Design%20Spreadsheet%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203484.%20Design%20Spreadsheet.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/19%20-%2009%20-%202025%20---%203484.%20Design%20Spreadsheet%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203484.%20Design%20Spreadsheet.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/19%20-%2009%20-%202025%20---%203484.%20Design%20Spreadsheet%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203484.%20Design%20Spreadsheet.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/98ab8def-5173-413c-b494-f134dc5c3442" width = "700px" height="462px" />

</h1>
