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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Segment%20Tree/Q1.%20Range%20Sum%20Query%20-%20Mutable/%F0%9F%8D%81JAVA%20-%20Range%20Sum%20Query%20-%20Mutable.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Segment%20Tree/Q1.%20Range%20Sum%20Query%20-%20Mutable/%F0%9F%8E%B2CPP%20-%20Range%20Sum%20Query%20-%20Mutable.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Segment%20Tree/Q1.%20Range%20Sum%20Query%20-%20Mutable/%F0%9F%8D%B0PYTHON%20-%20Range%20Sum%20Query%20-%20Mutable.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Segment%20Tree/Q1.%20Range%20Sum%20Query%20-%20Mutable/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Range%20Sum%20Query%20-%20Mutable.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/7f4f8a83-b3ff-4711-87bb-732077a291a2" width = "700px" height="462px" />

</h1>
