# 2616. Minimize the Maximum Difference of Pairs

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimize-the-maximum-difference-of-pairs/description/?envType=daily-question&envId=2025-06-13"><strong>➥ ☢️ 2616 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `nums` of length `n` and an integer `p`. Your task is to find `p` pairs of indices within `nums` such that the *maximum* difference among all the selected pairs is minimized. Furthermore, no index can be used more than once across all `p` pairs.

### For any pair of elements at indices `i` and `j`, the difference of that pair is given by `|nums[i] - nums[j]|`, where `|x|` represents the absolute value of `x`.

### Return the *minimum* possible *maximum* difference among all `p` pairs you can form. By convention, the maximum of an empty set is considered to be zero.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [10,1,2,7,1,3], p = 2

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ The first pair is formed from the indices 1 and 4, and the second pair is formed from the indices 2 and 5.</br> The maximum difference is max(|nums[1] - nums[4]|, |nums[2] - nums[5]|) = max(|1 - 1|, |2 - 3|) = max(0, 1) = 1. Therefore, we return 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [4,2,1,2], p = 1

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ Let the indices 1 and 3 form a pair. The difference of that pair is |2 - 2| = 0, which is the minimum we can attain.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 10<sup>5</sup> </br>

🔹 0 <= nums[i] <= 10<sup>9</sup> </br>

🔹 0 <= p <= (nums.length)/2 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Binary Search**  </br>

🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
