# Q2. Range Frequency Queries

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/range-frequency-queries/description/?envType=problem-list-v2&envId=ssd-ssd5-comprehensive-data-operations-simulation"><strong>➥ ☢️ Q2 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design a data structure to find the **frequency** of a given value in a given subarray.

### The **frequency** of a value in a subarray is the number of times that value occurs within `arr[left...right]`.

### `RangeFreqQuery(int[] arr)` constructs the object with the given 0-indexed integer array `arr`.

### `int query(int left, int right, int value)` returns the frequency of `value` in the subarray `arr[left...right]` (inclusive).

### A **subarray** is a contiguous sequence of elements within the array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`["RangeFreqQuery", "query", "query"]`  
`[[[12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56]], [1, 2, 4], [0, 11, 33]]`

### 📤 `Output`  ➤  
`[null, 1, 2]`

### 🔦 `Explanation`  ➤  
`RangeFreqQuery rangeFreqQuery = new RangeFreqQuery([12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56]);`  
`rangeFreqQuery.query(1, 2, 4);` returns `1` because `4` appears once in subarray `[33, 4]`  
`rangeFreqQuery.query(0, 11, 33);` returns `2` because `33` appears twice in the full array

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= arr.length <= 10^5` </br>
🔹 `1 <= arr[i], value <= 10^4` </br>
🔹 `0 <= left <= right < arr.length` </br>
🔹 At most `10^5` calls will be made to `query`

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Binary Search**  </br>
🔸 **Design**  </br>
🔸 **Segment Tree**  </br>

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

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
