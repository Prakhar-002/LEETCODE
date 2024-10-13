# 632. Smallest Range Covering Elements from K Lists

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/description/?envType=daily-question&envId=2024-10-13"><strong>➥ 🫀 632 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You have k lists of sorted integers in `non-decreasing order`. Find the smallest range that includes at least one number from each of the `k` lists.

### We define the range `[a, b]` is smaller than range `[c, d]` if `b - a < d - c` or `a < c` if `b - a == d - c`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [[4,10,15,24,26],[0,9,12,20],[5,18,22,30]]

  ### 📤 `Output`  ➤ [20,24]

  ### 🔦 `Explanation`  ➤ 

    List 1 ➺ [4, 10, 15, 24,26], 24 is in range [20,24].
    List 2 ➺ [0, 9, 12, 20], 20 is in range [20,24].
    List 3 ➺ [5, 18, 22, 30], 22 is in range [20,24].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [[1,2,3],[1,2,3],[1,2,3]]

  ### 📤 `Output`  ➤ [1,1]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ [[1,2,3,5,7,8,10],[5,40,50,51],[1,2,3,10,11,12]]

  ### 📤 `Output`  ➤ [3,5]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`nums.length == k`** </br>

🔹 **`1 <= k <= 3500`** </br>

🔹 **`1 <= nums[i].length <= 50`** </br>

🔹 **-10<sup>5</sup> <= nums[i][j] <= 10<sup>5</sup>** </br>

🔹 **`nums[i]` is sorted in non-decreasing order.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Greedy**  </br>
🔸 **Sliding Window**  </br>
🔸 **Sorting**  </br>
🔸 **Heap (Priority Queue)**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |


