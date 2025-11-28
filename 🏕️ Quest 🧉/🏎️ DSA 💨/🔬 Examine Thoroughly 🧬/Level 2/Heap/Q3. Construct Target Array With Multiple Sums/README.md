# Q3. Construct Target Array With Multiple Sums

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/construct-target-array-with-multiple-sums/?envType=problem-list-v2&envId=dsa-sequence-valley-heap"><strong>➥ 🫀 Q3 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `target` of `n` integers. From a starting array `arr` consisting of `n` 1's, you may perform the following procedure :

- let `x` be the sum of all elements currently in your array.
- choose index `i`, such that `0 <= i < n` and set the value of arr at index i to `x`.

### You may repeat this procedure as many times as needed.

### Return `true` if it is possible to construct the target array from `arr`, otherwise, return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ target = [9,3,5]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ Start with arr = [1, 1, 1] 

- [1, 1, 1], sum = 3 choose index 1

- [1, 3, 1], sum = 5 choose index 2

- [1, 3, 5], sum = 9 choose index 0

- [9, 3, 5] Done

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ target = [1,1,1,2]

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤ Impossible to create target array from [1,1,1,1].

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ target = [8,5]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation` ➤ Start with arr = [1, 1].

- [1, 1], sum = 2 choose index 0

- [2, 1], sum = 3 choose index 1

- [2, 3], sum = 5 choose index 0

- [5, 3], sum = 8 choose index 1

- [5, 8], which when sorted becomes [8, 5] Done

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == target.length </br>
🔹 1 <= n <= 5 * 10<sup>4</sup> </br>
🔹 1 <= target[i] <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Heap (Priority Queue)** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Heap/Q3.%20Construct%20Target%20Array%20With%20Multiple%20Sums/%F0%9F%8D%81JAVA%20-%20Construct%20Target%20Array%20With%20Multiple%20Sums.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Heap/Q3.%20Construct%20Target%20Array%20With%20Multiple%20Sums/%F0%9F%8E%B2CPP%20-%20Construct%20Target%20Array%20With%20Multiple%20Sums.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Heap/Q3.%20Construct%20Target%20Array%20With%20Multiple%20Sums/%F0%9F%8D%B0PYTHON%20-%20Construct%20Target%20Array%20With%20Multiple%20Sums.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Heap/Q3.%20Construct%20Target%20Array%20With%20Multiple%20Sums/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Construct%20Target%20Array%20With%20Multiple%20Sums.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/3adda2ac-ea1d-443c-b9ba-8137200d1d4c" width = "700px" height="462px" />

</h1>
