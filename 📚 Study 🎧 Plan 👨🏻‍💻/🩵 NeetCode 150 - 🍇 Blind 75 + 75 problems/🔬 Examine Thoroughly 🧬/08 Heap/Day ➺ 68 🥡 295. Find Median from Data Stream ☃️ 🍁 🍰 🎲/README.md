# 295. Find Median from Data Stream

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-median-from-data-stream/description/"><strong>➥ 🫀 295 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### The median of an ordered integer list is its middle value. If the list contains an even number of elements, there is no single middle value; instead, the median is the mean (average) of the two middle values.

### For example:

- For arr = [2,3,4], the median is 3.
- For arr = [2,3], the median is (2 + 3) / 2 = 2.5.

### Your task is to implement the `MedianFinder` class to support adding numbers from a data stream and finding the median of the current set of numbers:

- `MedianFinder()`: Initializes a `MedianFinder` object.
- `void addNum(int num)`: Adds the integer `num` from the data stream to the data structure, effectively inserting it into your tracked set of numbers.
- `double findMedian()`: Calculates and returns the median of all numbers added so far. You need to ensure your answer is within 10<sup>-5</sup> of the true median.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ 

```JS
["MedianFinder", "addNum", "addNum", "findMedian", "addNum", "findMedian"]
[[], [1], [2], [], [3], []]
```

  ### 📤 `Output`  ➤ [null, null, null, 1.5, null, 2.0]

  ### 🔦 `Explanation`  ➤ 

```JS
MedianFinder medianFinder = new MedianFinder();
medianFinder.addNum(1);    // arr = [1]
medianFinder.addNum(2);    // arr = [1, 2]
medianFinder.findMedian(); // return 1.5 (i.e., (1 + 2) / 2)
medianFinder.addNum(3);    // arr[1, 2, 3]
medianFinder.findMedian(); // return 2.0
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 -10<sup>5</sup> <= num <= 10<sup>5</sup> </br>

🔹 There will be at least one element in the data structure before calling findMedian. </br>

🔹 At most 5 * 10<sup>4</sup> calls will be made to addNum and findMedian. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Two Pointers**  </br>

🔸 **Design**  </br>

🔸 **Sorting**  </br>

🔸 **Heap (Priority Queue)**  </br>

🔸 **Data Stream**  </br>

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

<img src ="https://github.com/user-attachments/assets/9cd657a6-b4b2-4700-9ea6-b848563ea64f" width = "700px" height="462px" />

</h1>
