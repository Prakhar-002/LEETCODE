# 703. Kth Largest Element in a Stream

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/kth-largest-element-in-a-stream/description/?envType=daily-question&envId=2024-08-12"><strong>➥ ♻️ 703 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design a class to find the `k-th` largest element in a stream. Note that it is the `k-th` largest element in the sorted order, not the `k-th` distinct element.

### Implement `KthLargest` class ➺

- `KthLargest(int k, int[] nums)` Initializes the object with the integer `k` and the stream of integers `nums`.

- `int add(int val)` Appends the integer `val` to the stream and returns the element representing the `k-th` largest element in the stream.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ["KthLargest", "add", "add", "add", "add", "add"]  [[3, [4, 5, 8, 2]], [3], [5], [10], [9], [4]]

  ### 📤 `Output`  ➤ [null, 4, 5, 5, 8, 8]

  ### 🔦 `Explanation`  ➤ KthLargest kthLargest = new KthLargest(3, [4, 5, 8, 2]);

```Js
    kthLargest.add(3);   // return 4
    
    kthLargest.add(5);   // return 5
    
    kthLargest.add(10);  // return 5
    
    kthLargest.add(9);   // return 8
    
    kthLargest.add(4);   // return 8
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= k <= 10<sup>4</sup>** </br>

🔹 **0 <= nums.length <= 10<sup>4</sup>** </br>

🔹 **-10<sup>4</sup> <= nums[i] <= 10<sup>4</sup>** </br>

🔹 **-10<sup>4</sup> <= val <= 10<sup>4</sup>** </br>

🔹 **At most 10<sup>4</sup> calls will be made to `add`.** </br>

🔹 **It is guaranteed that there will be at least `k` elements in the array when you search for the `k-th` element.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Tree**  </br>
🔸 **Design**  </br>
🔸 **Binary Search Tree**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Binary Tree**  </br>
🔸 **Data Stream**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/12%20-%2008%20-%202024%20---%20703.%20Kth%20Largest%20Element%20in%20a%20Stream%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-703-KthLargestElementInAStream.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/12%20-%2008%20-%202024%20---%20703.%20Kth%20Largest%20Element%20in%20a%20Stream%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-703-KthLargestElementInAStream.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/12%20-%2008%20-%202024%20---%20703.%20Kth%20Largest%20Element%20in%20a%20Stream%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-703-KthLargestElementInAStream.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/12%20-%2008%20-%202024%20---%20703.%20Kth%20Largest%20Element%20in%20a%20Stream%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-703-KthLargestElementInAStream.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/272748ee-9680-4232-89ef-d8b67d7ef8b6" width = "700px" height="462px" />

</h1>
