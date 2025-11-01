# 57. Insert Interval

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/insert-interval/description/"><strong>➥ ☢️ 52 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of non-overlapping intervals `intervals` where `intervals[i] = [starti, endi]` represent the start and the end of the ith interval and `intervals` is sorted in ascending order by `starti`. You are also given an interval `newInterval = [start, end]` that represents the start and end of another interval.

### Insert `newInterval` into `intervals` such that `intervals` is still sorted in ascending order by `starti` and `intervals` still does not have any overlapping intervals (merge overlapping intervals if necessary).

### Return `intervals` after the insertion.

### Note that you don't need to modify `intervals` in-place. You can make a new array and return it.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `intervals = [[1,3],[6,9]], newInterval = [2,5]`

  ### 📤 `Output`  ➤ `[[1,5],[6,9]]`

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]`

  ### 📤 `Output`  ➤ `[[1,2],[3,10],[12,16]]`

  ### 🔦 `Explanation`  ➤ ➺
  - Because the new interval `[4,8]` overlaps with `[3,5]`, `[6,7]`, `[8,10]`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `0 <= intervals.length <= 10^4` </br>
🔹 `intervals[i].length == 2` </br>
🔹 `0 <= starti <= endi <= 10^5` </br>
🔹 `intervals` is sorted by `starti` in ascending order. </br>
🔹 `newInterval.length == 2` </br>
🔹 `0 <= start <= end <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>

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
