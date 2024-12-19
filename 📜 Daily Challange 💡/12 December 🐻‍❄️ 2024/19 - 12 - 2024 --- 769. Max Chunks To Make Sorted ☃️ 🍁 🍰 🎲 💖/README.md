# 769. Max Chunks To Make Sorted

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/max-chunks-to-make-sorted/description/?envType=daily-question&envId=2024-12-19"><strong>➥ ☢️ 769 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `arr` of length `n` that represents a permutation of the integers in the range `[0, n - 1]`.

### We split `arr` into some number of chunks (i.e., partitions), and individually sort each chunk. After concatenating them, the result should equal the sorted array.

### Return *the largest number of chunks we can make to sort the array*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ arr = [4,3,2,1,0]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ ➺Splitting into two or more chunks will not return the required result. </br> For example, splitting into [4, 3], [2, 1, 0] will result in [3, 4, 0, 1, 2], which isn't sorted.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  arr = [1,0,2,3,4]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ We can split into two chunks, such as [1, 0], [2, 3, 4]. </br> However, splitting into [1, 0], [2], [3], [4] is the highest number of chunks possible.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == arr.length`** </br>

🔹 **`1 <= n <= 10`** </br>

🔹 **`0 <= arr[i] < n`** </br>

🔹 **All the elements of arr are unique.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Stack**  </br>
🔸 **Greedy**  </br>
🔸 **Sorting**  </br>
🔸 **Monotonic Stack**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
