# 3480. Maximize Subarrays After Removing One Conflicting Pair

</br>

<h2 align="center"> 

<a href=""><strong>➥ 🫀 3480 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `n`, representing an array `nums` implicitly defined as `[1, 2, 3, ..., n]` (containing the integers from 1 to n in order). You are also provided a 2D integer array `conflictingPairs`, where `conflictingPairs[i] = [a, b]` denotes that `a` and `b` form a conflicting pair.

### The problem states that you must remove *exactly one* element (a conflicting pair) from the `conflictingPairs` array. After this removal, your goal is to count the number of *non-empty* subarrays of `nums` that do not contain *both* `a` and `b` for any remaining conflicting pair `[a, b]` in `conflictingPairs`.

### Your task is to return the *maximum* possible number of these "safe" subarrays after performing the described removal of a single conflicting pair.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 4, conflictingPairs = [[2,3],[1,4]]

  ### 📤 `Output`  ➤ 9

  ### 🔦 `Explanation`  ➤
Remove [2, 3] from conflictingPairs. Now, conflictingPairs = [[1, 4]].
There are 9 subarrays in nums where [1, 4] do not appear together. They are [1], [2], [3], [4], [1, 2], [2, 3], [3, 4], [1, 2, 3] and [2, 3, 4].
The maximum number of subarrays we can achieve after removing one element from conflictingPairs is 9.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 5, conflictingPairs = [[1,2],[2,5],[3,5]]

  ### 📤 `Output`  ➤ 12

  ### 🔦 `Explanation` ➤
Remove [1, 2] from conflictingPairs. Now, conflictingPairs = [[2, 5], [3, 5]].
There are 12 subarrays in nums where [2, 5] and [3, 5] do not appear together.
The maximum number of subarrays we can achieve after removing one element from conflictingPairs is 12.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= n <= 10<sup>5</sup> </br>

🔹 1 <= conflictingPairs.length <= 2 * n </br>

🔹 conflictingPairs[i].length == 2 </br>

🔹 1 <= conflictingPairs[i][j] <= n </br>

🔹 conflictingPairs[i][0] != conflictingPairs[i][1] </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Segment Tree**  </br>

🔸 **Enumeration**  </br>

🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/26%20-%2007%20-%202025%20---%203480.%20Maximize%20Subarrays%20After%20Removing%20One%20Conflicting%20Pair%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203480.%20Maximize%20Subarrays%20After%20Removing%20One.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/26%20-%2007%20-%202025%20---%203480.%20Maximize%20Subarrays%20After%20Removing%20One%20Conflicting%20Pair%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203480.%20Maximize%20Subarrays%20After%20Removing%20One%20C.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/26%20-%2007%20-%202025%20---%203480.%20Maximize%20Subarrays%20After%20Removing%20One%20Conflicting%20Pair%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203480.%20Maximize%20Subarrays%20After%20Removing%20One.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/26%20-%2007%20-%202025%20---%203480.%20Maximize%20Subarrays%20After%20Removing%20One%20Conflicting%20Pair%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203480.%20Maximize%20Subarrays%20After%20Removing.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/07a4b1e8-71e1-49a8-865e-6749b49112c3" width = "700px" height="462px" />

</h1>
