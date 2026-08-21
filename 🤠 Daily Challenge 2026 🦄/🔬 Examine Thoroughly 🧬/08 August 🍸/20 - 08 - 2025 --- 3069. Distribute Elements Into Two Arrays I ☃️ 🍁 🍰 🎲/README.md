# 3069. Distribute Elements Into Two Arrays I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/distribute-elements-into-two-arrays-i/description/?envType=daily-question&envId=2026-08-18"><strong>➥ ♻️ 3069 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 1-indexed array of distinct integers `nums` of length `n`.

### You need to distribute all the elements of `nums` between two arrays `arr1` and `arr2` using `n` operations. In the first operation, append `nums[1]` to `arr1`. In the second operation, append `nums[2]` to `arr2`. Afterwards, in the `i`th operation:
- If the last element of `arr1` is greater than the last element of `arr2`, append `nums[i]` to `arr1`.
- Otherwise, append `nums[i]` to `arr2`.

### The array `result` is formed by concatenating the arrays `arr1` and `arr2`. For example, if `arr1 == [1,2,3]` and `arr2 == [4,5,6]`, then `result = [1,2,3,4,5,6]`. Return the array `result`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`   ➤ `nums = [2,1,3]`

  ### 📤 `Output`  ➤ `[2,3,1]`

  ### 🔦 `Explanation`  ➤ ➺ After the first 2 operations, `arr1 = [2]` and `arr2 = [1]`. In the 3rd operation, as the last element of `arr1` is greater than the last element of `arr2` (2 > 1), append `nums[3]` to `arr1`. After 3 operations, `arr1 = [2,3]` and `arr2 = [1]`. Hence, the array result formed by concatenation is `[2,3,1]`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [5,4,3,8]`

  ### 📤 `Output`  ➤ `[5,3,4,8]`

  ### 🔦 `Explanation` ➤ ➺ After the first 2 operations, `arr1 = [5]` and `arr2 = [4]`. In the 3rd operation, as the last element of `arr1` is greater than the last element of `arr2` (5 > 4), append `nums[3]` to `arr1`, hence `arr1` becomes `[5,3]`. In the 4th operation, as the last element of `arr2` is greater than the last element of `arr1` (4 > 3), append `nums[4]` to `arr2`, hence `arr2` becomes `[4,8]`. After 4 operations, `arr1 = [5,3]` and `arr2 = [4,8]`. Hence, the array result formed by concatenation is `[5,3,4,8]`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `nums = [1,2,3]`

  ### 📤 `Output`  ➤ `[1,2,3]`

  ### 🔦 `Explanation`  ➤ ➺ After the first 2 operations, `arr1 = [1]` and `arr2 = [2]`. In the 3rd operation, the last element of `arr2` (2) is greater than `arr1` (1), so `nums[3]` is appended to `arr2`. Concatenating `arr1` and `arr2` produces `[1,2,3]`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`3 <= n <= 50`** </br>

🔹 **`1 <= nums[i] <= 100`** </br>

🔹 **All elements in `nums` are distinct.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Simulation** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/20%20-%2008%20-%202025%20---%203069.%20Distribute%20Elements%20Into%20Two%20Arrays%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203069.%20Distribute%20Elements%20Into%20Two%20Arrays%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/20%20-%2008%20-%202025%20---%203069.%20Distribute%20Elements%20Into%20Two%20Arrays%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203069.%20Distribute%20Elements%20Into%20Two%20Arrays%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/20%20-%2008%20-%202025%20---%203069.%20Distribute%20Elements%20Into%20Two%20Arrays%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203069.%20Distribute%20Elements%20Into%20Two%20Arrays%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/20%20-%2008%20-%202025%20---%203069.%20Distribute%20Elements%20Into%20Two%20Arrays%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203069.%20Distribute%20Elements%20Into%20Two%20Arrays%20I.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1f1af8ac-bf58-4e40-bccb-2fd1d81adc8c" width = "700px" height="462px" />

</h1>
