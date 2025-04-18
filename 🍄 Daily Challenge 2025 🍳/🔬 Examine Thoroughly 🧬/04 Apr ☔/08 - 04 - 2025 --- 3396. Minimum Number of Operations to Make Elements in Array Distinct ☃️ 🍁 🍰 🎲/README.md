# 3396. Minimum Number of Operations to Make Elements in Array Distinct

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/description/?envType=daily-question&envId=2025-04-08"><strong>➥ ♻️ 3396 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`. Your task is to ensure that all the elements in the array are distinct (unique). To achieve this, you can perform the following operation any number of times:

- Remove the first 3 elements from the beginning of the array.  If the array has fewer than 3 elements, remove all of the remaining elements.

Note that an empty array is automatically considered to have distinct elements. You need to return the *minimum* number of operations required to make all the elements in the array distinct.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,3,4,2,3,3,5,7]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤</br></br>In the first operation, the first 3 elements are removed, resulting in the array [4, 2, 3, 3, 5, 7].</br></br>In the second operation, the next 3 elements are removed, resulting in the array [3, 5, 7], which has distinct elements.</br></br>Therefore, the answer is 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [4,5,6,4,4]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ In the first operation, the first 3 elements are removed, resulting in the array [4, 4].</br></br>In the second operation, all remaining elements are removed, resulting in an empty array.</br></br>Therefore, the answer is 2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [6,7,8,9]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ The array already contains distinct elements. Therefore, the answer is 0.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ nums = [1, 1, 2, 2, 3, 3]

   ### 📤 `Output`  ➤ 2

   ### 🔦 `Explanation`  ➤ After 2 iterations value become unique on last side with having remove 3 value per time (2 is final ans of 2 iterations).

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length <= 100` </br>
🔹 `1 <= nums[i] <= 100` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/08%20-%2004%20-%202025%20---%203396.%20Minimum%20Number%20of%20Operations%20to%20Make%20Elements%20in%20Array%20Distinct%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203396.%20Minimum%20Number%20of%20Operations%20t.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/08%20-%2004%20-%202025%20---%203396.%20Minimum%20Number%20of%20Operations%20to%20Make%20Elements%20in%20Array%20Distinct%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203396.%20Minimum%20Number%20of%20Operations%20to%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/08%20-%2004%20-%202025%20---%203396.%20Minimum%20Number%20of%20Operations%20to%20Make%20Elements%20in%20Array%20Distinct%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203396.%20Minimum%20Number%20of%20Operations%20t.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/08%20-%2004%20-%202025%20---%203396.%20Minimum%20Number%20of%20Operations%20to%20Make%20Elements%20in%20Array%20Distinct%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203396.%20Minimum%20Number%20of%20Operatio.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/b3b3b3ac-fa7a-413e-97fb-bae16af43e42" width = "700px" height="462px" />

</h1>
