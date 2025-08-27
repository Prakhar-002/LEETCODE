# 3459. Length of Longest V-Shaped Diagonal Segment

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/length-of-longest-v-shaped-diagonal-segment/description/?envType=daily-question&envId=2025-08-27"><strong>➥ 🫀 3459 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•\*⁀➷

You are given a 2D integer matrix `grid` of size `n x m`, where each element is either `0`, `1`, or `2`.  
A **V-shaped diagonal segment** is defined as:

- The segment starts with **1**.  
- The subsequent elements follow this infinite sequence: `2, 0, 2, 0, ...`.  
- The segment:  
   - Starts along a diagonal direction (↘ top-left to bottom-right, ↖ bottom-right to top-left, ↙ top-right to bottom-left, or ↗ bottom-left to top-right).  
   - Continues the sequence in the same diagonal direction.  
   - Makes at most **one clockwise 90-degree turn** to another diagonal direction while maintaining the sequence.  

Return the **length** of the longest V-shaped diagonal segment.  
If no valid segment exists, return `0`.

<img src="https://github.com/user-attachments/assets/9b72dce5-2156-4006-8f36-c83e0937fad6" width="" height=""/>

</br>

# Example 💡 1️⃣ ˋ°•\*⁀➷

<img src="https://github.com/user-attachments/assets/2843886c-a681-477a-a732-1c934c9602aa" width="" height=""/>

### 📥 `Input`  ➤ `grid = [[2,2,1,2,2],[2,0,2,2,0],[2,0,1,1,0],[1,0,2,2,2],[2,0,0,2,2]]`

### 📤 `Output`  ➤  5  

### 🔦 `Explanation`  ➤  
The longest V-shaped diagonal segment has a length of **5** and follows:  
`(0,2) → (1,3) → (2,4)` → turns at `(2,4)` → `(3,3) → (4,2)`  

</br>

# Example 💡 2️⃣ ˋ°•\*⁀➷

<img src="https://github.com/user-attachments/assets/75f0bd36-5eea-46b7-bc6c-b07c194cba3e" width="" height=""/>

### 📥 `Input` ➤  `grid = [[2,2,2,2,2],[2,0,2,2,0],[2,0,1,1,0],[1,0,2,2,2],[2,0,0,2,2]]`

### 📤 `Output`  ➤  4  

### 🔦 `Explanation` ➤  
The longest V-shaped diagonal segment has a length of **4** and follows:  
`(2,3) → (3,2)` → turns at `(3,2)` → `(2,1) → (1,0)`  

</br>

# Example 💡 3️⃣ ˋ°•\*⁀➷

<img src="https://github.com/user-attachments/assets/51917345-42b0-42fa-b1e0-0e1e15ca5438" width="" height=""/>

### 📥 `Input` ➤  `grid = [[1,2,2,2,2],[2,2,2,2,0],[2,0,0,0,0],[0,0,2,2,2],[2,0,0,2,0]]`

### 📤 `Output`  ➤  5  

### 🔦 `Explanation`  ➤  
The longest V-shaped diagonal segment has a length of **5** and follows:  
`(0,0) → (1,1) → (2,2) → (3,3) → (4,4)`  

</br>

# Example 💡 4️⃣ ˋ°•\*⁀➷

### 📥 `Input` ➤   `grid = [[1]]`

### 📤 `Output`  ➤  1  

### 🔦 `Explanation`  ➤  
The longest V-shaped diagonal segment has a length of **1** at `(0,0)`.

</br>

# Constraints 🔒 ˋ°•\*⁀➷

🔹 `n == grid.length` </br>  
🔹 `m == grid[i].length` </br>  
🔹 `1 <= n, m <= 500` </br>  
🔹 `grid[i][j]` is either `0`, `1`, or `2` </br>  

</br>

# Topics 📋 ˋ°•\*⁀➷

🔸 **Array** </br>  
🔸 **Dynamic Programming** </br>  
🔸 **Memoization** </br>  
🔸 **Matrix** </br>  

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
