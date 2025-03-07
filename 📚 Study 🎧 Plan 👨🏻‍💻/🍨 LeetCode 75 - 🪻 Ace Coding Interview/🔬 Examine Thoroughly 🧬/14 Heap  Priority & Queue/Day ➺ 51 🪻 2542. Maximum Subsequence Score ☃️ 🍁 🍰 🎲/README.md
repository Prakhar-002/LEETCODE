# 2542. Maximum Subsequence Score

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-subsequence-score/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 2542 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

# 2542. Maximum Subsequence Score

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-subsequence-score/description/"><strong>➥ ☢️ 2542. Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two 0-indexed integer arrays `nums1` and `nums2` of equal length `n` and a positive integer `k`.  

### You must choose a **subsequence** of indices from `nums1` of length `k`.

### For chosen indices i<sub>0</sub>, i<sub>1</sub>, ..., i<sub>k - 1</sub>, your **score** is defined as:

- The sum of the selected elements from `nums1` multiplied with the minimum of the selected elements from `nums2`.

### In simple terms:

- (nums1[i<sub>0</sub>] + nums1[i<sub>1</sub>] + ... + nums1[i<sub>k - 1</sub>]) * min(nums2[i<sub>0</sub>], nums2[i<sub>1</sub>], ..., nums2[i<sub>k - 1</sub>])

### Return *the `maximum possible score`*.

### A **subsequence of indices** of an array is a set that can be derived from the set `{0, 1, ..., n-1}` by deleting some or no elements.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums1 = [1,3,3,2], nums2 = [2,1,3,4], k = 3

  ### 📤 `Output`  ➤ 12

  ### 🔦 `Explanation`  ➤ The four possible subsequence scores are:</br></br>- Choose indices `[0, 1, 2]`: `(1+3+3) * min(2,1,3) = 7`</br></br>- Choose indices `[0, 1, 3]`: `(1+3+2) * min(2,1,4) = 6`</br></br>- Choose indices `[0, 2, 3]`: `(1+3+2) * min(2,3,4) = 12`</br></br>- Choose indices `[1, 2, 3]`: `(3+3+2) * min(1,3,4) = 8`</br></br>Therefore, the **maximum score** is `12`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums1 = [4,2,3,1,1], nums2 = [7,5,10,9,6], k = 1

  ### 📤 `Output`  ➤ 30

  ### 🔦 `Explanation` ➤  Choosing index `2` is optimal: `nums1[2] * nums2[2] = 3 * 10 = 30`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == nums1.length == nums2.length`** </br>
🔹 **`1 <= n <= 10⁵`** </br>
🔹 **`0 <= nums1[i], nums2[i] <= 10⁵`** </br>
🔹 **`1 <= k <= n`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>
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
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |


