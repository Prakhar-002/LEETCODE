# 368. Largest Divisible Subset

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/largest-divisible-subset/?envType=daily-question&envId=2025-04-06"><strong>➥ ☢️ 368 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a set of distinct positive integers `nums`.  Your goal is to find the largest subset, `answer`, that satisfies the following condition:

For every pair of elements (`answer[i]`, `answer[j]`) in this subset, *either*:

- `answer[i]` is divisible by `answer[j]` (i.e., `answer[i] % answer[j] == 0`), *or*
- `answer[j]` is divisible by `answer[i]` (i.e., `answer[j] % answer[i] == 0`).

### If there are multiple such largest subsets that satisfy these divisibility conditions, you can return any one of them.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,3]

  ### 📤 `Output`  ➤ [1,2]

  ### 🔦 `Explanation`  ➤ [1,3] is also accepted. Both are valid answer where both divisible with some value using '%' operator

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,4,8]

  ### 📤 `Output`  ➤ [1,2,4,8]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3, 6, 9, 12]

  ### 📤 `Output`  ➤ [3, 6, 12]

  ### 🔦 `Explanation`  ➤ Another possible subset is [6, 12] . There can have multiple possibility which need consider using subset operations

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ nums = [2, 3, 4, 9]

   ### 📤 `Output`  ➤ [2, 4]

   ### 🔦 `Explanation`  ➤ 4 % 2 means '4' mode by 2 and will give 0 in final subset result to this can create set to 2 or 4 at list to get possible outcome based given number value

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 1000 </br>
🔹 1 <= nums[i] <= 2 * 10<sup>9</sup> </br>
🔹 All the integers in nums are unique. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Sorting**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/06%20-%2004%20-%202025%20---%20368.%20Largest%20Divisible%20Subset%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20368.%20Largest%20Divisible%20Subset.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/06%20-%2004%20-%202025%20---%20368.%20Largest%20Divisible%20Subset%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20368.%20Largest%20Divisible%20Subset.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/06%20-%2004%20-%202025%20---%20368.%20Largest%20Divisible%20Subset%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20368.%20Largest%20Divisible%20Subset.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/06%20-%2004%20-%202025%20---%20368.%20Largest%20Divisible%20Subset%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20368.%20Largest%20Divisible%20Subset.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/da8f5523-8312-4d38-9964-e381e78f3ff1" width = "700px" height="462px" />

</h1>
