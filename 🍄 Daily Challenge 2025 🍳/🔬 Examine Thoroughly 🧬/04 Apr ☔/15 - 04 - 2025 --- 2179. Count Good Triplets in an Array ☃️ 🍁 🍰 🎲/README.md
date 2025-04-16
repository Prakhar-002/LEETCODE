# 2179. Count Good Triplets in an Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-good-triplets-in-an-array/description/?envType=daily-question&envId=2025-04-15"><strong>➥ 🫀 2179 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two 0-indexed arrays, `nums1` and `nums2`, both of length `n`.  It is guaranteed that both arrays are permutations of the numbers from 0 to `n - 1` (inclusive).

### A "good" triplet is a set of three *distinct* values which appear in increasing order of position in *both* `nums1` and `nums2`. More formally:

### Let `pos1v` represent the index (position) of the value `v` in the array `nums1`, and let `pos2v` be the index of the value `v` in `nums2`.

### A good triplet is a set `(x, y, z)` where `0 <= x, y, z <= n - 1`, and these conditions hold:

1. `pos1x < pos1y < pos1z`  (x, y, and z appear in increasing order in `nums1`).
2. `pos2x < pos2y < pos2z` (x, y, and z appear in increasing order in `nums2`).

### Your task is to return the *total* number of good triplets that can be found.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums1 = [2,0,1,3], nums2 = [0,1,2,3]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ There are 4 triplets (x,y,z) such that pos1x < pos1y < pos1z. They are (2,0,1), (2,0,3), (2,1,3), and (0,1,3).</br> </br>Out of those triplets, only the triplet (0,1,3) satisfies pos2x < pos2y < pos2z. Hence, there is only 1 good triplet.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums1 = [4,0,1,3,2], nums2 = [4,1,0,2,3]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ The 4 good triplets are (4,0,3), (4,0,2), (4,1,3), and (4,1,2).

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums1 = [1, 2, 3, 4, 0], nums2 = [0, 1, 2, 3, 4]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ Explanation the value are negative and possition each elements there no value exist;

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums1 = [0,1,2,3,4,5], nums2 = [5,4,3,2,1,0]
  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤Due Number invers form other elements side it is impossbile in this value iteration

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == nums1.length == nums2.length </br>
🔹 3 <= n <= 10<sup>5</sup> </br>
🔹 0 <= nums1[i], nums2[i] <= n - 1 </br>
🔹 nums1 and nums2 are permutations of [0, 1, ..., n - 1]. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Divide and Conquer**  </br>
🔸 **Binary Indexed Tree**  </br>
🔸 **Segment Tree**  </br>
🔸 **Merge Sort**  </br>
🔸 **Ordered Set**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/15%20-%2004%20-%202025%20---%202179.%20Count%20Good%20Triplets%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202179.%20Count%20Good%20Triplets%20in%20an%20Array.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/15%20-%2004%20-%202025%20---%202179.%20Count%20Good%20Triplets%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202179.%20Count%20Good%20Triplets%20in%20an%20Array.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/15%20-%2004%20-%202025%20---%202179.%20Count%20Good%20Triplets%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202179.%20Count%20Good%20Triplets%20in%20an%20Array.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/15%20-%2004%20-%202025%20---%202179.%20Count%20Good%20Triplets%20in%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202179.%20Count%20Good%20Triplets%20in%20an%20Array.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/2190884e-4202-4df6-bee0-225811ac6b6c" width = "700px" height="462px" />

</h1>
