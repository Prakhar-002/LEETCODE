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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/14%20Heap%20%20Priority%20%26%20Queue/Day%20%E2%9E%BA%2051%20%F0%9F%AA%BB%202542.%20Maximum%20Subsequence%20Score%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202542.%20Maximum%20Subsequence.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/14%20Heap%20%20Priority%20%26%20Queue/Day%20%E2%9E%BA%2051%20%F0%9F%AA%BB%202542.%20Maximum%20Subsequence%20Score%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202542.%20Maximum%20Subsequence%20S.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/14%20Heap%20%20Priority%20%26%20Queue/Day%20%E2%9E%BA%2051%20%F0%9F%AA%BB%202542.%20Maximum%20Subsequence%20Score%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202542.%20Maximum%20Subsequence.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/14%20Heap%20%20Priority%20%26%20Queue/Day%20%E2%9E%BA%2051%20%F0%9F%AA%BB%202542.%20Maximum%20Subsequence%20Score%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202542.%20Maximum%20Subsequ.js) |

