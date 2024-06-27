# 2597. The Number of Beautiful Subsets

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ 2597 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `nums` of `positive` integers and a positive integer `k`.

### A subset of `nums` is `beautiful` if it does not contain two integers with an absolute difference equal to `k`.

### Return *the number of `non-empty beautiful` subsets of the array nums*.

### A `subset` of `nums` is an array that can be obtained by deleting some (possibly none) elements from `nums`. Two subsets are different if and only if the chosen indices to delete are different.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤  nums = [2,4,6], k = 2

  ### Output  ➤ 4

  ### Explanation  ➤ The beautiful subsets of the array nums are: [2], [4], [6], [2, 6]. </br> It can be proved that there are only 4 beautiful subsets in the array [2,4,6].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ nums = [1], k = 1

  ### Output  ➤ 1

  ### Explanation ➤ The beautiful subset of the array nums is [1]. </br> It can be proved that there is only 1 beautiful subset in the array [1].
 

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= nums.length <= 20**
- **1 <= nums[i], k <= 1000**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Dynamic Programming**
3. **Backtracking**
4. **Sorting**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/23%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%202597.%20The%20Number%20of%20Beautiful%20Subsets%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%8D%81JAVA_2597TheNumberOfBeautifulSubsets.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/23%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%202597.%20The%20Number%20of%20Beautiful%20Subsets%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%8D%B0PYTHON__2597TheNumberOfBeautifulSubsets.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/23%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%202597.%20The%20Number%20of%20Beautiful%20Subsets%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%E2%98%83%EF%B8%8FJAVASCRIPT_2597TheNumberOfBeautifulSubsets.js) |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/23%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%202597.%20The%20Number%20of%20Beautiful%20Subsets%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%94%8F%20Leetcode%20sol%202597%20The%20Number%20Of%20Beautiful%20Subsets.md)  |
