# 3392. Count Subarrays of Length Three With a Condition

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/?envType=daily-question&envId=2025-04-27"><strong>➥ ♻️ 3392 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`. The goal is to determine the number of subarrays (contiguous subsequences) within `nums` that satisfy the following criteria:

- The subarray must have a length of exactly 3.
- The sum of the first and third numbers in the subarray must equal exactly half of the second number in that subarray.

### Your task is to return the count of such subarrays.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,1,4,1]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ Only the subarray [1,4,1] contains exactly 3 elements where the sum of the first and third numbers equals half the middle number. ( 1 + 1) =(4/2)"

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,1]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ [1,1,1] is the only subarray of length 3. However, its first and third numbers do not add to half the middle number. 1 +1!= (0)/ that means that that all case as not meet here!

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2, 4, 2, 8, 4]

  ### 📤 `Output`  ➤ 0

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 3 <= nums.length <= 100 </br>

🔹 -100 <= nums[i] <= 100 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/27%20-%2004%20-%202025%20---%203392.%20Count%20Subarrays%20of%20Length%20Three%20With%20a%20Condition%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%203392.%20Count%20Subarrays%20of%20Length%20Three%20With%20a%20Con.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/27%20-%2004%20-%202025%20---%203392.%20Count%20Subarrays%20of%20Length%20Three%20With%20a%20Condition%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%203392.%20Count%20Subarrays%20of%20Length%20Three%20With%20a%20Condi.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/27%20-%2004%20-%202025%20---%203392.%20Count%20Subarrays%20of%20Length%20Three%20With%20a%20Condition%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%203392.%20Count%20Subarrays%20of%20Length%20Three%20With%20a%20Con.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/27%20-%2004%20-%202025%20---%203392.%20Count%20Subarrays%20of%20Length%20Three%20With%20a%20Condition%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203392.%20Count%20Subarrays%20of%20Length%20Three%20With%20a.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/27%20-%2004%20-%202025%20---%203392.%20Count%20Subarrays%20of%20Length%20Three%20With%20a%20Condition%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%203392.%20Count%20Subarrays%20of%20Length%20Three%20With%20a%20Condition.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/9dd44a99-466f-4f7f-a7ca-c9e3c247f3aa" width = "700px" height="462px" />

</h1>
