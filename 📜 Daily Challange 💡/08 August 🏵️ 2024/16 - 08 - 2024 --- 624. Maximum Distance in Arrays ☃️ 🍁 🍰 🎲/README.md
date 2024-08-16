# 624. Maximum Distance in Arrays

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-distance-in-arrays/description/?envType=daily-question&envId=2024-08-16"><strong>➥ ☢️ 624 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given `m` `arrays`, where each array is `sorted` in `ascending order`.

### You can pick up two integers from two different arrays `(each array picks one)` and calculate the distance. We define the distance between two integers `a` and `b` to be their absolute difference `|a - b|`.

### Return *the maximum distance*. 

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ arrays = [[1,2,3],[4,5],[1,2,3]]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ One way to reach the maximum distance 4 is to pick 1 in the first or third array and pick 5 in the second array.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  arrays = [[1],[1]]

  ### 📤 `Output`  ➤ 0

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == arrays.length`** </br>

🔹 **2 <= m <= 10<sup>5</sup>** </br>

🔹 **`1 <= arrays[i].length <= 500`** </br>

🔹 **-10<sup>4</sup> <= arrays[i][j] <= 10<sup>4</sup>** </br>

🔹 **`arrays[i]` is sorted in `ascending order`.** </br>

🔹 **There will be at most 10<sup>5</sup> integers in all the arrays.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/16%20-%2008%20-%202024%20---%20624.%20Maximum%20Distance%20in%20Arrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-624-MaximumDistanceInArrays.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/16%20-%2008%20-%202024%20---%20624.%20Maximum%20Distance%20in%20Arrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-624-MaximumDistanceInArrays.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/16%20-%2008%20-%202024%20---%20624.%20Maximum%20Distance%20in%20Arrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-624-MaximumDistanceInArrays.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/16%20-%2008%20-%202024%20---%20624.%20Maximum%20Distance%20in%20Arrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-624-MaximumDistanceInArrays.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/16%20-%2008%20-%202024%20---%20624.%20Maximum%20Distance%20in%20Arrays%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%92%96C-624-MaximumDistanceInArrays.c)  |
