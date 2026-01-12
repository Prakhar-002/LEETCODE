# Q3. Subrectangle Queries

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/subrectangle-queries/description/?envType=problem-list-v2&envId=ssd-ssd5-comprehensive-data-operations-simulation"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Implement the `SubrectangleQueries` class which receives a `rows x cols` rectangle as a matrix of integers and supports two methods.

### `updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)` updates **all values** in the subrectangle whose upper left coordinate is `(row1,col1)` and bottom right coordinate is `(row2,col2)` to `newValue`.

### `getValue(int row, int col)` returns the **current value** at coordinate `(row,col)` from the rectangle.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`["SubrectangleQueries","getValue","updateSubrectangle","getValue","getValue","updateSubrectangle","getValue","getValue"]`  
`[[[[1,2,1],[4,3,4],[3,2,1],[1,1,1]]],[0,2],[0,0,3,2,5],[0,2],[3,1],[3,0,3,2,10],[3,1],[0,2]]`

### 📤 `Output`  ➤  
`[null,1,null,5,5,null,10,5]`

### 🔦 `Explanation`  ➤  
```js
SubrectangleQueries subrectangleQueries = new SubrectangleQueries([[1,2,1],[4,3,4],[3,2,1],[1,1,1]]);  
// The initial rectangle (4x3) looks like:
// 1 2 1
// 4 3 4
// 3 2 1
// 1 1 1
subrectangleQueries.getValue(0, 2); // return 1
subrectangleQueries.updateSubrectangle(0, 0, 3, 2, 5);
// After this update the rectangle looks like:
// 5 5 5
// 5 5 5
// 5 5 5
// 5 5 5 
subrectangleQueries.getValue(0, 2); // return 5
subrectangleQueries.getValue(3, 1); // return 5
subrectangleQueries.updateSubrectangle(3, 0, 3, 2, 10);
// After this update the rectangle looks like:
// 5   5   5
// 5   5   5
// 5   5   5
// 10  10  10 
subrectangleQueries.getValue(3, 1); // return 10
subrectangleQueries.getValue(0, 2); // return 5
```
</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ 

["SubrectangleQueries","getValue","updateSubrectangle","getValue","getValue","updateSubrectangle","getValue"]
[[[[1,1,1],[2,2,2],[3,3,3]]],[0,0],[0,0,2,2,100],[0,0],[2,2],[1,1,2,2,20],[2,2]]

  ### 📤 `Output`  ➤ [null,1,null,100,100,null,20]

  ### 🔦 `Explanation` ➤ 
```Js
SubrectangleQueries subrectangleQueries = new SubrectangleQueries([[1,1,1],[2,2,2],[3,3,3]]);
subrectangleQueries.getValue(0, 0); // return 1
subrectangleQueries.updateSubrectangle(0, 0, 2, 2, 100);
subrectangleQueries.getValue(0, 0); // return 100
subrectangleQueries.getValue(2, 2); // return 100
subrectangleQueries.updateSubrectangle(1, 1, 2, 2, 20);
subrectangleQueries.getValue(2, 2); // return 20
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **There will be at most 500 operations considering both methods: `updateSubrectangle` and `getValue`.** </br>
🔹 **`1 <= rows, cols <= 100`** </br>
🔹 **`rows == rectangle.length`** </br>
🔹 **`cols == rectangle[i].length`** </br>
🔹 **`0 <= row1 <= row2 < rows`** </br>
🔹 **`0 <= col1 <= col2 < cols`** </br>
🔹 **`1 <= newValue, rectangle[i][j] <= 10^9`** </br>
🔹 **`0 <= row < rows`** </br>
🔹 **`0 <= col < cols`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Design**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Q3.%20Subrectangle%20Queries/%F0%9F%8D%81JAVA%20-%20Subrectangle%20Queries.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Q3.%20Subrectangle%20Queries/%F0%9F%8E%B2CPP%20-%20Subrectangle%20Queries.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Q3.%20Subrectangle%20Queries/%F0%9F%8D%B0PYTHON%20-%20Subrectangle%20Queries.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%205/Q3.%20Subrectangle%20Queries/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Subrectangle%20Queries.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/c454456e-9238-49a9-8d9d-8089b394db73" width = "700px" height="462px" />

</h1>
