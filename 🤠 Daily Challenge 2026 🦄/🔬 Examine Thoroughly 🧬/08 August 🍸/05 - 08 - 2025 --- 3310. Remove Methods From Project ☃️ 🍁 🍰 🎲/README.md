# 3310. Remove Methods From Project

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/remove-methods-from-project/description/?envType=daily-question&envId=2026-08-05"><strong>➥ ☢️ 3310 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are maintaining a project that has `n` methods numbered from `0` to `n - 1`. You are given two integers `n` and `k`, and a 2D integer array `invocations`, where `invocations[i] = [ai, bi]` indicates that method `ai` invokes method `bi`.

### There is a known bug in method `k`. Method `k`, along with any method invoked by it, either directly or indirectly, are considered suspicious and we aim to remove them. A group of methods can only be removed if no method outside the group invokes any methods within it.

### Return an array containing all the remaining methods after removing all the suspicious methods. You may return the answer in any order. If it is not possible to remove all the suspicious methods, none should be removed.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`   ➤ `n = 4`, `k = 1`, `invocations = [[1,2],[0,1],[3,2]]`

  ### 📤 `Output`  ➤ `[0,1,2,3]`

  ### 🔦 `Explanation`  ➤ ➺ Method 2 and method 1 are suspicious, but they are directly invoked by methods 3 and 0, which are not suspicious. We return all elements without removing anything.

<img width="300" height="300" alt="image" src="https://github.com/user-attachments/assets/b7c552d4-f70f-4344-8f04-14ab32ea892c" />

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `n = 5`, `k = 0`, `invocations = [[1,2],[0,2],[0,1],[3,4]]`

  ### 📤 `Output`  ➤ `[3,4]`

  ### 🔦 `Explanation` ➤ ➺ Methods 0, 1, and 2 are suspicious and they are not directly invoked by any other method. We can remove them.

<img width="300" height="300" alt="image" src="https://github.com/user-attachments/assets/32931a83-0419-4e65-b756-f47ba4b85c45" />

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `n = 3`, `k = 2`, `invocations = [[1,2],[0,1],[2,0]]`

  ### 📤 `Output`  ➤ `[]`

  ### 🔦 `Explanation`  ➤ ➺ All methods are suspicious. We can remove them.

<img width="300" height="300" alt="image" src="https://github.com/user-attachments/assets/7ff8fb5f-ed11-4b01-a4b1-2d7a4f7bf493" />

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= n <= 10^5`** </br>

🔹 **`0 <= k <= n - 1`** </br>

🔹 **`0 <= invocations.length <= 2 * 10^5`** </br>

🔹 **`invocations[i] == [ai, bi]` where `0 <= ai, bi <= n - 1` and `ai != bi`** </br>

🔹 **All pairs in `invocations` are unique.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Depth-First Search** </br>
🔸 **Breadth-First Search** </br>
🔸 **Graph Theory** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/05%20-%2008%20-%202025%20---%203310.%20Remove%20Methods%20From%20Project%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203310.%20Remove%20Methods%20From%20Project.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/05%20-%2008%20-%202025%20---%203310.%20Remove%20Methods%20From%20Project%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203310.%20Remove%20Methods%20From%20Project.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/05%20-%2008%20-%202025%20---%203310.%20Remove%20Methods%20From%20Project%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203310.%20Remove%20Methods%20From%20Project.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20August%20%F0%9F%8D%B8/05%20-%2008%20-%202025%20---%203310.%20Remove%20Methods%20From%20Project%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203310.%20Remove%20Methods%20From%20Project.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/cd544634-cc8b-407d-9acc-7f47e52dbd4e" width = "700px" height="462px" />

</h1>
