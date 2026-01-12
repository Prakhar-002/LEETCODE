# Q1 Range Module

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/range-module/description/?envType=problem-list-v2&envId=ssd-ssd5-comprehensive-data-operations-simulation"><strong>➥ 🫀 Q1 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A Range Module tracks ranges of numbers represented as **half-open intervals** `[left, right)` where `left <= x < right`.

### `RangeModule()` initializes the data structure to track no numbers.

### `void addRange(int left, int right)` adds the half-open interval `[left, right)` to the tracked ranges, merging it with any overlapping or adjacent tracked intervals and adding only the new numbers not already tracked.

### `boolean queryRange(int left, int right)` returns `true` if **every** real number in `[left, right)` is currently tracked, or `false` otherwise.

### `void removeRange(int left, int right)` removes all tracked numbers in the half-open interval `[left, right)` from tracking, splitting or deleting intervals as needed.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`["RangeModule", "addRange", "removeRange", "queryRange", "queryRange", "queryRange"]`  
`[[], [10, 20], [14, 16], [10, 14], [13, 15], [16, 17]]`

### 📤 `Output`  ➤  
`[null, null, null, true, false, true]`

### 🔦 `Explanation`  ➤  

```Js
RangeModule rangeModule = new RangeModule();  
rangeModule.addRange(10, 20); tracks `[10, 20)`  
rangeModule.removeRange(14, 16); removes `[14, 16)`, leaving `[10, 14)` and `[16, 20)`  
rangeModule.queryRange(10, 14); returns `true` (fully covered)  
rangeModule.queryRange(13, 15); returns `false` (14 is missing)  
rangeModule.queryRange(16, 17); returns `true` (16 is covered)
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= left < right <= 10^9` </br>
🔹 At most `10^4` calls will be made to `addRange`, `queryRange`, and `removeRange`.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Design**  </br>
🔸 **Segment Tree**  </br>
🔸 **Ordered Set**  </br>

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
