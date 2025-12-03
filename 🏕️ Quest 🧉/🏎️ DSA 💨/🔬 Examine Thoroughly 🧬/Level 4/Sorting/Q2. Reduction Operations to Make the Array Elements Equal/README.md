# Q2. Reduction Operations to Make the Array Elements Equal

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/reduction-operations-to-make-the-array-elements-equal/description/?envType=problem-list-v2&envId=dsa-sorting-plateau-sorting"><strong>➥ ☢️ Q2 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `nums`, your goal is to make all elements in `nums` equal. To complete one operation, follow these steps:

- Find the largest value in `nums`. Let its index be `i` (0-indexed) and its value be `largest`. If there are multiple elements with the largest value, pick the smallest `i`.
- Find the next largest value in `nums` strictly smaller than `largest`. Let its value be `nextLargest`.
- Reduce `nums[i]` to `nextLargest`.

### Return the number of operations to make all elements in `nums` equal.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [5,1,3]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ It takes 3 operations to make all elements in nums equal:

1. largest = 5 at index 0. nextLargest = 3. Reduce nums[0] to 3. nums = [3,1,3].
2. largest = 3 at index 0. nextLargest = 1. Reduce nums[0] to 1. nums = [1,1,3].
3. largest = 3 at index 2. nextLargest = 1. Reduce nums[2] to 1. nums = [1,1,1].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,1]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ All elements in nums are already equal.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,2,2,3]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ It takes 4 operations to make all elements in nums equal:

1. largest = 3 at index 4. nextLargest = 2. Reduce nums[4] to 2. nums = [1,1,2,2,2].
2. largest = 2 at index 2. nextLargest = 1. Reduce nums[2] to 1. nums = [1,1,1,2,2].
3. largest = 2 at index 3. nextLargest = 1. Reduce nums[3] to 1. nums = [1,1,1,1,2].
4. largest = 2 at index 4. nextLargest = 1. Reduce nums[4] to 1. nums = [1,1,1,1,1].

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 5 * 10<sup>4</sup> </br>
🔹 1 <= nums[i] <= 5 * 10<sup>4</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%204/Sorting/Q2.%20Reduction%20Operations%20to%20Make%20the%20Array%20Elements%20Equal/%F0%9F%8D%81JAVA%20-%20Reduction%20Operations%20to%20Make%20the%20Array%20Elements%20Equal.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%204/Sorting/Q2.%20Reduction%20Operations%20to%20Make%20the%20Array%20Elements%20Equal/%F0%9F%8E%B2CPP%20-%20Reduction%20Operations%20to%20Make%20the%20Array%20Elements%20Equal.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%204/Sorting/Q2.%20Reduction%20Operations%20to%20Make%20the%20Array%20Elements%20Equal/%F0%9F%8D%B0PYTHON%20-%20Reduction%20Operations%20to%20Make%20the%20Array%20Elements%20Equal.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%204/Sorting/Q2.%20Reduction%20Operations%20to%20Make%20the%20Array%20Elements%20Equal/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Reduction%20Operations%20to%20Make%20the%20Array%20Elements%20Equal.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/7b5708c3-38f6-434a-b51a-88ae421dcd15" width = "700px" height="462px" />

</h1>
