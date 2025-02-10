# 239. Sliding Window Maximum

</br>

<h2 align="center">  

<a href="https://leetcode.com/problems/sliding-window-maximum/description/"><strong>➥ 🫀 239 Leetcode Que Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of integers `nums`, there is a sliding window of size `k` which is moving from the very left of the array to the very right. You can only see the `k` numbers in the window. Each time the sliding window moves right by one position.

### Return *the max sliding window*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ nums = [1,3,-1,-3,5,3,6,7], k = 3

  ### Output  ➤ [3,3,5,5,6,7]

  ### Explanation  ➤

| Window position   | Max |
| ------------- | ------------- |
| [1  3  -1] -3  5  3  6  7   |    3  |
| 1 [3  -1  -3] 5  3  6  7    | 3   |
| 1  3 [-1  -3  5] 3  6  7    | 5   |
| 1  3  -1 [-3  5  3] 6  7     | 5   |
|  1  3  -1  -3 [5  3  6] 7    | 6   |
| 1  3  -1  -3  5 [3  6  7]     | 7   |

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ nums = [1], k = 1

  ### Output  ➤  [1]

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= nums.length <= 10^5**
- **-10^4 <= nums[i] <= 10^4**
- **1 <= k <= nums.length**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Queue**
3. **Sliding Window**
4. **Heap (Priority Queue)**
5. **Monotonic Queue**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
