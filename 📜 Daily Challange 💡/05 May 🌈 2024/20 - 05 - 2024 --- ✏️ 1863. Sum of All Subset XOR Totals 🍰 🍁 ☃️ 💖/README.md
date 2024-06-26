# 1863. Sum of All Subset XOR Totals

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/sum-of-all-subset-xor-totals/description/?envType=daily-question&envId=2024-05-20"><strong>➥ ♻️ 1863 Leetcode Que  Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### The XOR total of an array is defined as the bitwise XOR of all its elements, or 0 if the array is empty.

- For example, the **XOR total** of the array `[2,5,6]` is `2 XOR 5 XOR 6 = 1`.

### Given an array `nums`, return *the `sum` of all `XOR totals` for every `subset` of nums*. 

### Note: Subsets with the `same` elements should be counted `multiple` times.

### An array `a` is a `subset` of an array `b` if `a` can be obtained from `b` by deleting some (possibly zero) elements of `b`.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ nums = [1,3]

  ### Output  ➤ 6

  ### Explanation  ➤ The 4 subsets of [1,3] are:

    - The empty subset has an XOR total of 0.

    - [1] has an XOR total of 1.
    
    - [3] has an XOR total of 3.
    
    - [1,3] has an XOR total of 1 XOR 3 = 2.
    
    0 + 1 + 3 + 2 = 6

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ nums = [5,1,6]

  ### Output  ➤ 28

  ### Explanation ➤ The 8 subsets of [5,1,6] are:

    - The empty subset has an XOR total of 0.
    
    - [5] has an XOR total of 5.
    
    - [1] has an XOR total of 1.
    
    - [6] has an XOR total of 6.
    
    - [5,1] has an XOR total of 5 XOR 1 = 4.
    
    - [5,6] has an XOR total of 5 XOR 6 = 3.
    
    - [1,6] has an XOR total of 1 XOR 6 = 7.
    
    - [5,1,6] has an XOR total of 5 XOR 1 XOR 6 = 2.
    
    0 + 5 + 1 + 6 + 4 + 3 + 7 + 2 = 28


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤  nums = [3,4,5,6,7,8]

  ### Output  ➤ 480

  ### Explanation  ➤ The sum of all XOR totals for every subset is 480.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= nums.length <= 12**
- **1 <= nums[i] <= 20**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Math**
3. **Backtracking**
4. **Bit Manipulation**
5. **Combinatorics**
6. **Enumeration**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/20%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201863.%20Sum%20of%20All%20Subset%20XOR%20Totals%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%8D%81JAVA_1863_SumofAllSubsetXORTotals.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/20%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201863.%20Sum%20of%20All%20Subset%20XOR%20Totals%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_1863_SumofAllSubsetXORTotals.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/20%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201863.%20Sum%20of%20All%20Subset%20XOR%20Totals%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_1863_SumofAllSubsetXORTotals.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/20%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201863.%20Sum%20of%20All%20Subset%20XOR%20Totals%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%92%96C_1863_SumofAllSubsetXORTotals.c)  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/sum-of-all-subset-xor-totals/solutions/5182585/100-java-simple-consice-without-making-subarrays)  |
