# 1493. Longest Subarray of 1's After Deleting One Element

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 1493 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a binary array `nums`, you should delete one element from it.

### Return *the size of the longest non-empty subarray containing only 1's in the resulting array*. Return `0` if there is no such subarray.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,1,0,1]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [0,1,1,1,0,1,1,0,1]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1].

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,1]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ You must delete one element.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **`nums[i]` is either `0` or `1`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Sliding Window**  </br>
🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/24%20-%2008%20-%202025%20---%20%201493.%20Longest%20Subarray%20of%201's%20After%20Deleting%20One%20Element%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201493.%20Longest%20Subarray%20of%201's%20After%20Deleting%20On.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/24%20-%2008%20-%202025%20---%20%201493.%20Longest%20Subarray%20of%201's%20After%20Deleting%20One%20Element%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201493.%20Longest%20Subarray%20of%201's%20After%20Deleting%20One%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/24%20-%2008%20-%202025%20---%20%201493.%20Longest%20Subarray%20of%201's%20After%20Deleting%20One%20Element%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201493.%20Longest%20Subarray%20of%201's%20After%20Deleting%20On.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/24%20-%2008%20-%202025%20---%20%201493.%20Longest%20Subarray%20of%201's%20After%20Deleting%20One%20Element%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201493.%20Longest%20Subarray%20of%201's%20After%20Deletin.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/c04764ab-b1d5-424a-9bab-351d8de0dfd7" width = "700px" height="462px" />

</h1>
