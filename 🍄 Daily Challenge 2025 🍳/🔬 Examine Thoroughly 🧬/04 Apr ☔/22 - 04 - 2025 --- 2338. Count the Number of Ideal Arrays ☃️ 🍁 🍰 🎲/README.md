# 2338. Count the Number of Ideal Arrays

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-the-number-of-ideal-arrays/description/?envType=daily-question&envId=2025-04-22"><strong>➥ 🫀 2338 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two integers, `n` and `maxValue`, which together describe an "ideal" array.

A 0-indexed integer array `arr` of length `n` is considered ideal if the following conditions are both true:

1.  Every element `arr[i]` has a value from 1 to `maxValue`, inclusive (for `0 <= i < n`).
2.  Every element `arr[i]` is divisible by the element immediately preceding it: `arr[i - 1]` (for `0 < i < n`).  That is, `arr[i] % arr[i - 1] == 0`.

Your task is to return the *number* of distinct ideal arrays that have length `n`. Since the answer may be very large, you should return it modulo 10<sup>9</sup> + 7 (i.e., 1000000007).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 2, maxValue = 5

  ### 📤 `Output`  ➤ 10

  ### 🔦 `Explanation`  ➤ The following are the possible ideal arrays:

- Arrays starting with the value 1 (5 arrays): [1,1], [1,2], [1,3], [1,4], [1,5]

- Arrays starting with the value 2 (2 arrays): [2,2], [2,4]

- Arrays starting with the value 3 (1 array): [3,3]

- Arrays starting with the value 4 (1 array): [4,4]

- Arrays starting with the value 5 (1 array): [5,5]

There are a total of 5 + 2 + 1 + 1 + 1 = 10 distinct ideal arrays.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 5, maxValue = 3

  ### 📤 `Output`  ➤ 11

  ### 🔦 `Explanation` ➤ The following are the possible ideal arrays:

- Arrays starting with the value 1 (9 arrays):


- With no other distinct values (1 array): [1,1,1,1,1]

- With 2nd distinct value 2 (4 arrays): [1,1,1,1,2], [1,1,1,2,2], [1,1,2,2,2], [1,2,2,2,2]

- With 2nd distinct value 3 (4 arrays): [1,1,1,1,3], [1,1,1,3,3], [1,1,3,3,3], [1,3,3,3,3]

- Arrays starting with the value 2 (1 array): [2,2,2,2,2]

- Arrays starting with the value 3 (1 array): [3,3,3,3,3]

There are a total of 9 + 1 + 1 = 11 distinct ideal arrays.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 3, maxValue = 7

  ### 📤 `Output`  ➤ 28

  ### 🔦 `Explanation`  ➤: The way value create in sub set from array list that make all process equal result; number is then final as answer;

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 4 maxValue = 4
  
  ### 📤 `Output`  ➤ 20

  ### 🔦 `Explanation`  ➤ all operation result = that if condition follows are that . If the array are form then will output the true result;

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= n <= 10<sup>4</sup> </br>
🔹 1 <= maxValue <= 10<sup>4</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Combinatorics**  </br>
🔸 **Number Theory**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/22%20-%2004%20-%202025%20---%202338.%20Count%20the%20Number%20of%20Ideal%20Arrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202338.%20Count%20the%20Number%20of%20Ideal%20Arrays.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/22%20-%2004%20-%202025%20---%202338.%20Count%20the%20Number%20of%20Ideal%20Arrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202338.%20Count%20the%20Number%20of%20Ideal%20Arrays.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/22%20-%2004%20-%202025%20---%202338.%20Count%20the%20Number%20of%20Ideal%20Arrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202338.%20Count%20the%20Number%20of%20Ideal%20Arrays.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/22%20-%2004%20-%202025%20---%202338.%20Count%20the%20Number%20of%20Ideal%20Arrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202338.%20Count%20the%20Number%20of%20Ideal%20Arrays.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/b2f709ec-0152-4e84-9d11-9e1ecafb90c1" width = "700px" height="462px" />

</h1>
