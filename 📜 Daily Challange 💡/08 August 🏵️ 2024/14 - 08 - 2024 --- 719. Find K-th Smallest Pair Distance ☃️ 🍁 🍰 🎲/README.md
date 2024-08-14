# 719. Find K-th Smallest Pair Distance

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-k-th-smallest-pair-distance/description/?envType=daily-question&envId=2024-08-14"><strong>➥ 🫀 719 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### The `distance of a pair` of integers `a` and `b` is defined as the absolute difference between `a` and `b`.

### Given an integer array `nums` and an integer `k`, return the `k-th` smallest `distance among all the pairs` `nums[i]` and `nums[j]` where `0 <= i < j < nums.length`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,3,1], k = 1

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ Here are all the pairs ➺

    (1,3) -> 2
    
    (1,1) -> 0
    
    (3,1) -> 2
    
    Then the 1st smallest distance pair is (1,1), 
    and its distance is 0.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,1], k = 2

  ### 📤 `Output`  ➤ 0


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,6,1], k = 3

  ### 📤 `Output`  ➤ 5

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == nums.length`** </br>

🔹 **2 <= n <= 10<sup>4</sup>** </br>

🔹 **`1 <= k <= n * (n - 1) / 2`** </br>

🔹 **0 <= nums[i] <= 10<sup>6</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>
🔸 **Binary Search**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/14%20-%2008%20-%202024%20---%20719.%20Find%20K-th%20Smallest%20Pair%20Distance%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-719-FindK-thSmallestPairDistance.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/14%20-%2008%20-%202024%20---%20719.%20Find%20K-th%20Smallest%20Pair%20Distance%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-719-FindK-thSmallestPairDistance.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/14%20-%2008%20-%202024%20---%20719.%20Find%20K-th%20Smallest%20Pair%20Distance%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-719-FindK-thSmallestPairDistance.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/14%20-%2008%20-%202024%20---%20719.%20Find%20K-th%20Smallest%20Pair%20Distance%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-719-FindK-thSmallestPairDistance.js) |
