# Q3. Data Stream as Disjoint Intervals

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/data-stream-as-disjoint-intervals/description/?envType=problem-list-v2&envId=ssd-ssd2-data-stream-processing"><strong>➥ 🫀 Q3 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a data stream of non-negative integers `a1, a2, ..., an`, summarize all numbers seen so far as a list of disjoint intervals.

### Implement the `SummaryRanges` class:
- `SummaryRanges()` initializes the object with an empty stream.  
- `void addNum(int value)` adds the integer `value` into the data stream.  
- `int[][] getIntervals()` returns the current summary of all integers seen so far as a list of **disjoint** intervals `[starti, endi]`, sorted by `starti`. 

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`["SummaryRanges", "addNum", "getIntervals", "addNum", "getIntervals", "addNum", "getIntervals", "addNum", "getIntervals", "addNum", "getIntervals"]`  
`[[], [1], [], [3], [], [7], [], [2], [], [6], []]` 

### 📤 `Output`  ➤  
`[null, null, [[1, 1]], null, [[1, 1], [3, 3]], null, [[1, 1], [3, 3], [7, 7]], null, [[1, 3], [7, 7]], null, [[1, 3], [6, 7]]]` 

### 🔦 `Explanation`  ➤  

```JS
SummaryRanges summaryRanges = new SummaryRanges();
summaryRanges.addNum(1);      // arr = [1]
summaryRanges.getIntervals(); // return [[1, 1]]
summaryRanges.addNum(3);      // arr = [1, 3]
summaryRanges.getIntervals(); // return [[1, 1], [3, 3]]
summaryRanges.addNum(7);      // arr = [1, 3, 7]
summaryRanges.getIntervals(); // return [[1, 1], [3, 3], [7, 7]]
summaryRanges.addNum(2);      // arr = [1, 2, 3, 7]
summaryRanges.getIntervals(); // return [[1, 3], [7, 7]]
summaryRanges.addNum(6);      // arr = [1, 2, 3, 6, 7]
summaryRanges.getIntervals(); // return [[1, 3], [6, 7]]
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `0 <= value <= 10^4` </br>
🔹 At most `3 * 10^4` calls will be made to `addNum` and `getIntervals` combined. </br>
🔹 At most `10^2` calls will be made to `getIntervals`. </br> 

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **Binary Search**  </br>
🔸 **Union Find**  </br>
🔸 **Design**  </br>
🔸 **Data Stream**  </br>
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
