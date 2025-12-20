# 944. Delete Columns to Make Sorted

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/delete-columns-to-make-sorted/description/?envType=daily-question&envId=2025-12-20"><strong>➥ ♻️ 944 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of n strings strs, all of the same length.

### The strings can be arranged such that there is one on each line, making a grid.

### For example, strs = ["abc", "bce", "cae"] can be arranged as follows:
- `abc`
- `bce`
- `cae`

### You want to delete the columns that are not sorted lexicographically. In the above example (0-indexed), columns 0 (`'a'`, `'b'`, `'c'`) and 2 (`'c'`, `'e'`, `'e'`) are sorted, while column 1 (`'b'`, `'c'`, `'a'`) is not, so you would delete column 1.

### Return the number of columns that you will delete.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤ `strs = ["cba","daf","ghi"]`

### 📤 `Output`  ➤ `1`

### 🔦 `Explanation`  ➤ The grid is:
`cba`  
`daf`  
`ghi`  
Columns `0` and `2` are sorted, but column `1` is not, so you delete exactly `1` column.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `strs = ["a","b"]`

### 📤 `Output`  ➤ `0`

### 🔦 `Explanation` ➤ The grid is:
`a`  
`b`  
Column `0` is sorted, so no columns are deleted.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `strs = ["zyx","wvu","tsr"]`

### 📤 `Output`  ➤ `3`

### 🔦 `Explanation` ➤ The grid is:
`zyx`  
`wvu`  
`tsr`  
All `3` columns are not sorted, so all `3` columns are deleted.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `n == strs.length` </br>
🔹 `1 <= n <= 100` </br>
🔹 `1 <= strs[i].length <= 1000` </br>
🔹 `strs[i]` consists of lowercase English letters. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **String** </br>

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

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
