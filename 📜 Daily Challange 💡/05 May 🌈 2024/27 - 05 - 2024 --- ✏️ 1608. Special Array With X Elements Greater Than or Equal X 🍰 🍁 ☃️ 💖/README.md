# 1608. Special Array With X Elements Greater Than or Equal X

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/description/?envType=daily-question&envId=2024-05-27"><strong>➥ ♻️ 1608 Leetcode Que  Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `nums` of non-negative integers. `nums` is considered `special` if there exists a number `x` such that there are `exactly` `x` numbers in `nums` that are `greater than or equal to x`.

### Notice that `x` `does not` have to be an element in `nums`.

### Return *x if the array is `special`, otherwise, return `-1`. It can be proven that if `nums` is special, the value for `x` is `unique`*.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ nums = [3,5]

  ### Output  ➤ 2

  ### Explanation  ➤ There are 2 values (3 and 5) that are greater than or equal to 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  nums = [0,0]

  ### Output  ➤ -1

  ### Explanation ➤ No numbers fit the criteria for x. </br> If x = 0, there should be 0 numbers >= x, but there are 2. </br> If x = 1, there should be 1 number >= x, but there are 0. </br> If x = 2, there should be 2 numbers >= x, but there are 0. </br> x cannot be greater since there are only 2 numbers in nums.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ nums = [0,4,3,0,4]

  ### Output  ➤ 3

  ### Explanation  ➤ There are 3 values that are greater than or equal to 3.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= nums.length <= 100**
- **0 <= nums[i] <= 1000**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Binary Search**
3. **Sorting**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/27%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201608.%20Special%20Array%20With%20X%20Elements%20Greater%20Than%20or%20Equal%20X%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%8D%81JAVA_1608_SpecialArrayWithXElementsGreaterThanOrEqualX.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/27%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201608.%20Special%20Array%20With%20X%20Elements%20Greater%20Than%20or%20Equal%20X%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_1608_SpecialArrayWithXElementsGreaterThanOrEqualX.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/27%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201608.%20Special%20Array%20With%20X%20Elements%20Greater%20Than%20or%20Equal%20X%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_1608_SpecialArrayWithXElementsGreaterThanOrEqualX.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/27%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201608.%20Special%20Array%20With%20X%20Elements%20Greater%20Than%20or%20Equal%20X%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%92%96C_1608_SpecialArrayWithXElementsGreaterThanOrEqualX.c)  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/solutions/5216642/only-n-without-sorting-concise-newbie-friendly-simple-explanation-4-lang)  |
