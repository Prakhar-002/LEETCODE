# Q1. Range Sum Query - Mutable

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/range-sum-query-mutable/description/?envType=problem-list-v2&envId=dsa-tree-shaped-deep-forest-segment-tree"><strong>➥ ☢️ Q1 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `nums`, handle multiple queries of the following types:
- **Update** the value of an element in `nums`.
- **Calculate the sum** of the elements of `nums` between indices `left` and `right` inclusive where `left <= right`.

### Implement the `NumArray` class:
- `NumArray(int[] nums)` initializes the object with the integer array `nums`.
- `void update(int index, int val)` updates the value of `nums[index]` to be `val`.
- `int sumRange(int left, int right)` returns the sum of the elements of `nums` between indices `left` and `right` inclusive (i.e. `nums[left] + nums[left + 1] + ... + nums[right]`).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`["NumArray", "sumRange", "update", "sumRange"]`  
`[[[1, 3, 5]], [0, 2], [1, 2], [0, 2]]`

### 📤 `Output`  ➤ `[null, 9, null, 8]`

### 🔦 `Explanation`  ➤  
`NumArray numArray = new NumArray([1, 3, 5]);`  
`numArray.sumRange(0, 2); // return 1 + 3 + 5 = 9`  
`numArray.update(1, 2);   // nums = [1, 2, 5]`  
`numArray.sumRange(0, 2); // return 1 + 2 + 5 = 8`

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length <= 3 * 10^4` </br>
🔹 `-100 <= nums[i] <= 100` </br>
🔹 `0 <= index < nums.length` </br>
🔹 `-100 <= val <= 100` </br>
🔹 `0 <= left <= right < nums.length` </br>
🔹 At most `3 * 10^4` calls will be made to `update` and `sumRange`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Divide and Conquer** </br>
🔸 **Design** </br>
🔸 **Binary Indexed Tree** </br>
🔸 **Segment Tree** </br>

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

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
