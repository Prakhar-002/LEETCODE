# 703. Kth Largest Element in a Stream

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/kth-largest-element-in-a-stream/description/?envType=daily-question&envId=2024-08-12"><strong>➥ ☢️ 703 Leetcode Medium ☢️ </strong></a>
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

    kthLargest.add(3);   // return 4
    
    kthLargest.add(5);   // return 5
    
    kthLargest.add(10);  // return 5
    
    kthLargest.add(9);   // return 8
    
    kthLargest.add(4);   // return 8

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]()  |
