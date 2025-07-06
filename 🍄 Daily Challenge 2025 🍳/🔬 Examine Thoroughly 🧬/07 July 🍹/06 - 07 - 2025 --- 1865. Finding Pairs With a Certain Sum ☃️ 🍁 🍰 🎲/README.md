# 1865. Finding Pairs With a Certain Sum

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/finding-pairs-with-a-certain-sum/description/?envType=daily-question&envId=2025-07-06"><strong>➥ ☢️ 1865 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are tasked to implement a data structure that supports queries of two distinct types:

1. **Add:** Add a positive integer to an element at a specific index within the array `nums2`.
2. **Count:** Count the number of pairs `(i, j)` such that `nums1[i] + nums2[j]` equals a specified value, `tot`, where `0 <= i < nums1.length` and `0 <= j < nums2.length`.

### To facilitate this, you need to implement the `FindSumPairs` class with the following methods:

- `FindSumPairs(int[] nums1, int[] nums2)`: Initializes the `FindSumPairs` object with the two integer arrays, `nums1` and `nums2`.
- `void add(int index, int val)`: Adds the integer `val` to `nums2[index]` (i.e., `nums2[index] += val`).
- `int count(int tot)`: Returns the number of pairs `(i, j)` where `nums1[i] + nums2[j] == tot`.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ 

["FindSumPairs", "count", "add", "count", "count", "add", "add", "count"]
[[[1, 1, 2, 2, 2, 3], [1, 4, 5, 2, 5, 4]], [7], [3, 2], [8], [4], [0, 1], [1, 1], [7]]

  ### 📤 `Output`  ➤ [null, 8, null, 2, 1, null, null, 11]

  ### 🔦 `Explanation`  ➤ 

FindSumPairs findSumPairs = new FindSumPairs([1, 1, 2, 2, 2, 3], [1, 4, 5, 2, 5, 4]);
findSumPairs.count(7);  // return 8; pairs (2,2), (3,2), (4,2), (2,4), (3,4), (4,4) make 2 + 5 and pairs (5,1), (5,5) make 3 + 4
findSumPairs.add(3, 2); // now nums2 = [1,4,5,4,5,4]
findSumPairs.count(8);  // return 2; pairs (5,2), (5,4) make 3 + 5
findSumPairs.count(4);  // return 1; pair (5,0) makes 3 + 1
findSumPairs.add(0, 1); // now nums2 = [2,4,5,4,5,4]
findSumPairs.add(1, 1); // now nums2 = [2,5,5,4,5,4]
findSumPairs.count(7);  // return 11; pairs (2,1), (2,2), (2,4), (3,1), (3,2), (3,4), (4,1), (4,2), (4,4) make 2 + 5 and pairs (5,3), (5,5) make 3 + 4

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums1.length <= 1000 </br>

🔹 1 <= nums2.length <= 10<sup>5</sup> </br>

🔹 1 <= nums1[i] <= 10<sup>9</sup> </br>

🔹 1 <= nums2[i] <= 10<sup>5</sup> </br>

🔹 0 <= index < nums2.length </br>

🔹 1 <= val <= 10<sup>5</sup> </br>

🔹 1 <= tot <= 10<sup>9</sup> </br>

🔹 At most 1000 calls are made to add and count each. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Hash Table**  </br>

🔸 **Design**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/06%20-%2007%20-%202025%20---%201865.%20Finding%20Pairs%20With%20a%20Certain%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201865.%20Finding%20Pairs%20With%20a%20Certain%20Sum.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/06%20-%2007%20-%202025%20---%201865.%20Finding%20Pairs%20With%20a%20Certain%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201865.%20Finding%20Pairs%20With%20a%20Certain%20Sum.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/06%20-%2007%20-%202025%20---%201865.%20Finding%20Pairs%20With%20a%20Certain%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201865.%20Finding%20Pairs%20With%20a%20Certain%20Sum.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/06%20-%2007%20-%202025%20---%201865.%20Finding%20Pairs%20With%20a%20Certain%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201865.%20Finding%20Pairs%20With%20a%20Certain%20Sum.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/57138527-f68c-4647-a137-3f206562b8cc" width = "700px" height="462px" />

</h1>
