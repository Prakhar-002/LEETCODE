# 3731. Find Missing Elements

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-missing-elements/description/?envType=daily-question&envId=2026-08-04"><strong>➥ ♻️ 3731 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` consisting of unique integers.

### Originally, `nums` contained every integer within a certain range. However, some integers might have gone missing from the array. The smallest and largest integers of the original range are still present in `nums`.

### Return a sorted list of all the missing integers in this range. If no integers are missing, return an empty list.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`   ➤ `nums = [1,4,2,5]`

  ### 📤 `Output`  ➤ `[3]`

  ### 🔦 `Explanation`  ➤ ➺ The smallest integer is 1 and the largest is 5, so the full range should be [1,2,3,4,5]. Among these, only 3 is missing.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [7,8,6,9]`

  ### 📤 `Output`  ➤ `[]`

  ### 🔦 `Explanation` ➤ ➺ The smallest integer is 6 and the largest is 9, so the full range is [6,7,8,9]. All integers are already present, so no integer is missing.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [5,1]`

  ### 📤 `Output`  ➤ `[2,3,4]`

  ### 🔦 `Explanation`  ➤ ➺ The smallest integer is 1 and the largest is 5, so the full range should be [1,2,3,4,5]. The missing integers are 2, 3, and 4.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`2 <= nums.length <= 100`** </br>
🔹 **`1 <= nums[i] <= 100`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/04%20-%2008%20-%202025%20---%203731.%20Find%20Missing%20Elements%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203731.%20Find%20Missing%20Elements.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/04%20-%2008%20-%202025%20---%203731.%20Find%20Missing%20Elements%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203731.%20Find%20Missing%20Elements.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/04%20-%2008%20-%202025%20---%203731.%20Find%20Missing%20Elements%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203731.%20Find%20Missing%20Elements.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/04%20-%2008%20-%202025%20---%203731.%20Find%20Missing%20Elements%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203731.%20Find%20Missing%20Elements.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/83be2407-5b41-4fc1-8c7c-6bef6d46cf88" width = "700px" height="462px" />

</h1>
