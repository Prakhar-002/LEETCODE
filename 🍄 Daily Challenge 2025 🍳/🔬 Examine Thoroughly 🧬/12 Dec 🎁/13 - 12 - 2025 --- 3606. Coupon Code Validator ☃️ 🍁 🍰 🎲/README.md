# 3606. Coupon Code Validator

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/coupon-code-validator/description/?envType=daily-question&envId=2025-12-13"><strong>➥ ♻️ 3606 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given three arrays of length `n` that describe the properties of `n` coupons: `code`, `businessLine`, and `isActive`. The `i`‑th coupon has:
- `code[i]`: a string representing the coupon identifier.
- `businessLine[i]`: a string denoting the business category of the coupon.
- `isActive[i]`: a boolean indicating whether the coupon is currently active.

### A coupon is considered **valid** if all of the following conditions hold:
- `code[i]` is non-empty and consists only of alphanumeric characters (`a`‑`z`, `A`‑`Z`, `0`‑`9`) and underscores (`_`).
- `businessLine[i]` is one of the following four categories: `"electronics"`, `"grocery"`, `"pharmacy"`, `"restaurant"`.
- `isActive[i]` is `true`.

### Return an array of the **codes** of all valid coupons, **sorted** first by their `businessLine` in the order: `"electronics"`, `"grocery"`, `"pharmacy"`, `"restaurant"`, and then by `code` in lexicographical (ascending) order within each category.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`code = ["SAVE20","","PHARMA5","SAVE@20"]`  
`businessLine = ["restaurant","grocery","pharmacy","restaurant"]`  
`isActive = [true,true,true,true]`

### 📤 `Output`  ➤ `["PHARMA5","SAVE20"]`

### 🔦 `Explanation`  ➤  
First coupon is valid.  
Second coupon has empty code (invalid).  
Third coupon is valid.  
Fourth coupon has special character `@` (invalid).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤  
`code = ["GROCERY15","ELECTRONICS_50","DISCOUNT10"]`  
`businessLine = ["grocery","electronics","invalid"]`  
`isActive = [false,true,true]`

### 📤 `Output`  ➤ `["ELECTRONICS_50"]`

### 🔦 `Explanation` ➤  
First coupon is inactive (invalid).  
Second coupon is valid.  
Third coupon has invalid business line (invalid).

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `n == code.length == businessLine.length == isActive.length` </br>
🔹 `1 <= n <= 100` </br>
🔹 `0 <= code[i].length, businessLine[i].length <= 100` </br>
🔹 `code[i]` and `businessLine[i]` consist of printable ASCII characters. </br>
🔹 `isActive[i]` is either `true` or `false`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **String** </br>
🔸 **Sorting** </br>

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
