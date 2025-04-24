# 2799. Count Complete Subarrays in an Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-complete-subarrays-in-an-array/description/?envType=daily-question&envId=2025-04-24"><strong>➥ ☢️ 2799 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `nums` containing only positive integers.

A subarray of the given array is considered *complete* if it satisfies this condition:

*   The number of distinct elements in the subarray is equal to the number of distinct elements found in the entire array (`nums`).

Your task is to return the total number of *complete* subarrays that exist within the array `nums`.

Recall that a subarray is a contiguous (connected) and non-empty segment of an array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,3,1,2,2]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ The complete subarrays are the following: [1,3,1,2], [1,3,1,2,2], [3,1,2] and [3,1,2,2].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [5,5,5,5]

  ### 📤 `Output`  ➤ 10

  ### 🔦 `Explanation` ➤ The array consists only of the integer 5, so any subarray is complete. The number of subarrays that we can choose is 10.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1, 2, 1, 3, 4]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤There number occur within single element result that value 5 in this scenario number array only . but to create subset all value be exist; where sub is in range. to 3 will only result form.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [4, 4, 4, 4, 4, 4]
  
  ### 📤 `Output`  ➤ 21

  ### 🔦 `Explanation`  ➤ in each iterations in total all can access with set number set or numbers from choose one in a time which we then for 'array is "Complete"  Therefore ,: total

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length <= 1000` </br>

🔹 `1 <= nums[i] <= 2000` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Sliding Window**  </br>

</br>

# 🌯 Similar 🍲 Questions 🍜 `Solution` 🍱 ˋ°•*⁀➷

### 🫀 [992. Subarrays with K Different Integers](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%20992.%20Subarrays%20with%20K%20Different%20Integers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0) </br>

### ☢️ [3. Longest Substring Without Repeating Characters](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Sliding%20Window/Day%20%E2%9E%BA%2016%20%F0%9F%A5%A1%203.%20Longest%20Substring%20Without%20Repeating%20Characters%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2) </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/24%20-%2004%20-%202025%20---%202799.%20Count%20Complete%20Subarrays%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202799.%20Count%20Complete%20Subarrays%20in%20an%20Array.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/24%20-%2004%20-%202025%20---%202799.%20Count%20Complete%20Subarrays%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202799.%20Count%20Complete%20Subarrays%20in%20an%20Array.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/24%20-%2004%20-%202025%20---%202799.%20Count%20Complete%20Subarrays%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202799.%20Count%20Complete%20Subarrays%20in%20an%20Array.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/24%20-%2004%20-%202025%20---%202799.%20Count%20Complete%20Subarrays%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202799.%20Count%20Complete%20Subarrays%20in%20an%20Array.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/3506347a-5d90-4d11-aaa2-d5556c4881c7" width = "700px" height="462px" />

</h1>
