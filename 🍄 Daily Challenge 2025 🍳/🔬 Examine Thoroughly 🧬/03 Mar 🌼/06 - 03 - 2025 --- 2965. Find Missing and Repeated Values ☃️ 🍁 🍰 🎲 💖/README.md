# 2965. Find Missing and Repeated Values

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-missing-and-repeated-values/description/?envType=daily-question&envId=2025-03-06"><strong>➥ ♻️ 2965 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed 2D integer matrix `grid` of size `n * n` with values in the range `[1, n²]`.  
### Each integer appears exactly once **except**:

- One integer `a` appears **twice**.
- One integer `b` is **missing**.

### The task is to find the repeating and missing numbers `a` and `b`.

### Return a 0-indexed integer array `ans` of size 2 where:

- `ans[0]` equals to `a` (repeated number)
- `ans[1]` equals to `b` (missing number)

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ grid = [[1,3],[2,2]]

  ### 📤 `Output`  ➤ [2,4]

  ### 🔦 `Explanation`  ➤ Number `2` is repeated and number `4` is missing so the answer is `[2,4]`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[9,1,7],[8,9,2],[3,4,6]]

  ### 📤 `Output`  ➤ [9,5]

  ### 🔦 `Explanation` ➤ Number `9` is repeated and number `5` is missing so the answer is `[9,5]`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`2 <= n == grid.length == grid[i].length <= 50`** </br>
🔹 **`1 <= grid[i][j] <= n * n`** </br>
🔹 **For all `x` that `1 <= x <= n * n` there is exactly one `x` that is not equal to any of the grid members.** </br>
🔹 **For all `x` that `1 <= x <= n * n` there is exactly one `x` that is equal to exactly two of the grid members.** </br>
🔹 **For all `x` that `1 <= x <= n * n` except two of them there is exatly one pair of `i`, `j` that `0 <= i, j <= n - 1` and `grid[i][j] == x`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Math**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/06%20-%2003%20-%202025%20---%202965.%20Find%20Missing%20and%20Repeated%20Values%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202965.%20Find%20Missing%20and%20Repeated%20Values.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/06%20-%2003%20-%202025%20---%202965.%20Find%20Missing%20and%20Repeated%20Values%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202965.%20Find%20Missing%20and%20Repeated%20Values.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/06%20-%2003%20-%202025%20---%202965.%20Find%20Missing%20and%20Repeated%20Values%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202965.%20Find%20Missing%20and%20Repeated%20Values.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/06%20-%2003%20-%202025%20---%202965.%20Find%20Missing%20and%20Repeated%20Values%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202965.%20Find%20Missing%20and%20Repeated%20Values.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/06%20-%2003%20-%202025%20---%202965.%20Find%20Missing%20and%20Repeated%20Values%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202965.%20Find%20Missing%20and%20Repeated%20Values.c)  |
