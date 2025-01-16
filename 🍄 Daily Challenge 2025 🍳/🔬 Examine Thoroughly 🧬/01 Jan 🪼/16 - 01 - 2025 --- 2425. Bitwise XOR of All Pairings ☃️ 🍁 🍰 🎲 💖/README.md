# 2425. Bitwise XOR of All Pairings

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/bitwise-xor-of-all-pairings/description/?envType=daily-question&envId=2025-01-16"><strong>➥ ☢️ 2425 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two 0-indexed arrays, `nums1` and `nums2`, consisting of non-negative integers. There exists another array, `nums3`, which contains the bitwise XOR of all pairings of integers between `nums1` and `nums2` (every integer in `nums1` is paired with every integer in `nums2` exactly once).

### Return *the bitwise XOR of all integers in* `nums3`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums1 = [2,1,3], nums2 = [10,2,5,0]

  ### 📤 `Output`  ➤ 13

  ### 🔦 `Explanation`  ➤ A possible nums3 array is [8,0,7,2,11,3,4,1,9,1,6,3].</br> The bitwise XOR of all these numbers is 13, so we return 13.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums1 = [1,2], nums2 = [3,4]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ All possible pairs of bitwise XORs are </br> nums1[0] ^ nums2[0], nums1[0] ^ nums2[1], </br> nums1[1] ^ nums2[0],</br> and nums1[1] ^ nums2[1].</br> Thus, one possible nums3 array is [2,5,1,6].</br> 2 ^ 5 ^ 1 ^ 6 = 0, so we return 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums1.length, nums2.length <= 10<sup>5</sup>** </br>

🔹 **0 <= nums1[i], nums2[j] <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Brainteaser**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/16%20-%2001%20-%202025%20---%202425.%20Bitwise%20XOR%20of%20All%20Pairings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202425.%20Bitwise%20XOR%20of%20All%20Pairings.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/16%20-%2001%20-%202025%20---%202425.%20Bitwise%20XOR%20of%20All%20Pairings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202425.%20Bitwise%20XOR%20of%20All%20Pairings.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/16%20-%2001%20-%202025%20---%202425.%20Bitwise%20XOR%20of%20All%20Pairings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202425.%20Bitwise%20XOR%20of%20All%20Pairings.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/16%20-%2001%20-%202025%20---%202425.%20Bitwise%20XOR%20of%20All%20Pairings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202425.%20Bitwise%20XOR%20of%20All%20Pairings.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/16%20-%2001%20-%202025%20---%202425.%20Bitwise%20XOR%20of%20All%20Pairings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202425.%20Bitwise%20XOR%20of%20All%20Pairings.c)  |
