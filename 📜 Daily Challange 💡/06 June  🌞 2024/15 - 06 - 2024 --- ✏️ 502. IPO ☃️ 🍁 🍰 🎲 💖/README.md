# 502. IPO

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/ipo/?envType=daily-question&envId=2024-06-23"><strong>➥ 🫀 502 Leetcode Que Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Suppose LeetCode will start its **IPO** soon. In order to sell a good price of its shares to Venture Capital, LeetCode would like to work on some projects to increase its capital before the IPO. Since it has limited resources, it can only finish at most `k` distinct projects before the IPO. Help LeetCode design the best way to maximize its total capital after finishing at most `k` distinct projects.

### You are given n projects where the `ith` project has a pure profit `profits[i]` and a minimum capital of `capital[i]` is needed to start it.

### Initially, you have `w` capital. When you finish a project, you will obtain its pure profit and the profit will be added to your total capital.

### Pick a list of **at most** `k` distinct projects from given projects to **maximize your final capital**, and *return the final maximized capital*.

### The answer is guaranteed to fit in a 32-bit signed integer.

 
</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ k = 2, w = 0, profits = [1,2,3], capital = [0,1,1]

  ### Output  ➤ 4

  ### Explanation  ➤ Since your initial capital is 0, you can only start the project indexed 0.
    After finishing it you will obtain profit 1 and your capital becomes 1.
    With capital 1, you can either start the project indexed 1 or the project indexed 2.
    Since you can choose at most 2 projects, you need to finish the project indexed 2 to get the maximum capital.
    Therefore, output the final maximized capital, which is 0 + 1 + 3 = 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  k = 3, w = 0, profits = [1,2,3], capital = [0,1,2]

  ### Output  ➤ 6

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= k <= 10^5**
- **0 <= w <= 10^9**
- **n == profits.length**
- **n == capital.length**
- **1 <= n <= 10^5**
- **0 <= profits[i] <= 10^4**
- **0 <= capital[i] <= 10^9**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Greedy**
3. **Sorting**
4. **Heap (Priority Queue)**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/15%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20502.%20IPO%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA_%F0%9F%92%AF502_IPO.java) |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁HEAP](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/15%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20502.%20IPO%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA_HEAP_502_IPO.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/15%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20502.%20IPO%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP_502_IPO.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/15%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20502.%20IPO%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_502_IPO.py) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰HEAP](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/15%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20502.%20IPO%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_HEAP_502_IPO.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/15%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20502.%20IPO%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_502_IPO.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/15%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20502.%20IPO%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C_502_IPO.c)  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/ipo/solutions/5316120/without-heap-without-sorting-beats-100-run-100-memory-proofhttps://leetcode.com/problems/ipo/solutions/5316120/without-heap-without-sorting-beats-100-run-100-memory-proof)  |
