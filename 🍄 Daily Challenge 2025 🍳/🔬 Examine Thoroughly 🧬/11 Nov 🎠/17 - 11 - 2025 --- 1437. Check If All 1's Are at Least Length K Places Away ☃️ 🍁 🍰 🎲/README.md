# 1437. Check If All 1's Are at Least Length K Places Away

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/description/"><strong>➥ ♻️ 1437 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an binary array `nums` and an integer `k`, return *`true` if all `1's` are at least `k` places away from each other, otherwise return `false`*.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1437 que 1](https://github.com/user-attachments/assets/bd6d16dc-8714-41fe-b615-804572cf383f)

  ### 📥 `Input`  ➤  nums = [1,0,0,0,1,0,0,1], k = 2

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ Each of the 1s are at least 2 places away from each other.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![1437 que 2](https://github.com/user-attachments/assets/844e10a0-5e74-4754-84cf-e05357800046)

  ### 📥 `Input` ➤ nums = [1,0,0,1,0,1], k = 2

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation` ➤ The second 1 and third 1 are only one apart from each other.


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **`0 <= k <= nums.length`** </br>

🔹 **`nums[i]` is `0` or `1`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201437.%20Check%20If%20All%201's%20Are%20at%20Least%20Length%20K%20Places%20Away%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA-1437-CheckIfAll1'sAreAtLeastLengthK-PlacesAway.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201437.%20Check%20If%20All%201's%20Are%20at%20Least%20Length%20K%20Places%20Away%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP-1437-CheckIfAll1'sAreAtLeastLengthK-PlacesAway.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201437.%20Check%20If%20All%201's%20Are%20at%20Least%20Length%20K%20Places%20Away%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON-1437-CheckIfAll1'sAreAtLeastLengthK-PlacesAway.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201437.%20Check%20If%20All%201's%20Are%20at%20Least%20Length%20K%20Places%20Away%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT-1437-CheckIfAll1'sAreAtLeastLengthK-PlacesAway.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%201437.%20Check%20If%20All%201's%20Are%20at%20Least%20Length%20K%20Places%20Away%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C-1437-CheckIfAll1'sAreAtLeastLengthK-PlacesAway.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
