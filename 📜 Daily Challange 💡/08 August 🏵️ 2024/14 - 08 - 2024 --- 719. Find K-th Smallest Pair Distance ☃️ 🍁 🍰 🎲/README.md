# 719. Find K-th Smallest Pair Distance

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-k-th-smallest-pair-distance/description/?envType=daily-question&envId=2024-08-14"><strong>➥ ☢️ 719 Leetcode Medium ☢️ </strong></a>
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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]()  |
