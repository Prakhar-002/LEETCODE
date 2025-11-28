# Q2. Find K Pairs with Smallest Sums

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-k-pairs-with-smallest-sums/?envType=problem-list-v2&envId=dsa-sequence-valley-heap"><strong>➥ ☢️ Q2 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two integer arrays `nums1` and `nums2` sorted in non-decreasing order and an integer `k`.

### Define a pair `(u, v)` which consists of one element from the first array and one element from the second array.

### Return the `k` pairs `(u1, v1), (u2, v2), ..., (uk, vk)` with the smallest sums.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums1 = [1,7,11], nums2 = [2,4,6], k = 3

  ### 📤 `Output`  ➤ [[1,2],[1,4],[1,6]]

  ### 🔦 `Explanation`  ➤ The first 3 pairs are returned from the sequence: [1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums1 = [1,1,2], nums2 = [1,2,3], k = 2

  ### 📤 `Output`  ➤ [[1,1],[1,1]]

  ### 🔦 `Explanation` ➤ The first 2 pairs are returned from the sequence: [1,1],[1,1],[1,2],[2,1],[1,2],[2,2],[1,3],[1,3],[2,3]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums1.length, nums2.length <= 10<sup>5</sup> </br>
🔹 -10<sup>9</sup> <= nums1[i], nums2[i] <= 10<sup>9</sup> </br>
🔹 nums1 and nums2 both are sorted in non-decreasing order. </br>
🔹 1 <= k <= 10<sup>4</sup> </br>
🔹 k <= nums1.length * nums2.length </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Heap (Priority Queue)** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Heap/Q2.%20Find%20K%20Pairs%20with%20Smallest%20Sums/%F0%9F%8D%81JAVA%20-%20Find%20K%20Pairs%20with%20Smallest%20Sums.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Heap/Q2.%20Find%20K%20Pairs%20with%20Smallest%20Sums/%F0%9F%8E%B2CPP%20-%20Find%20K%20Pairs%20with%20Smallest%20Sums.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Heap/Q2.%20Find%20K%20Pairs%20with%20Smallest%20Sums/%F0%9F%8D%B0PYTHON%20-%20Find%20K%20Pairs%20with%20Smallest%20Sums.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Heap/Q2.%20Find%20K%20Pairs%20with%20Smallest%20Sums/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Find%20K%20Pairs%20with%20Smallest%20Sums.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/51cc706e-8906-4ad2-b81b-46fa36edf395" width = "700px" height="462px" />

</h1>
