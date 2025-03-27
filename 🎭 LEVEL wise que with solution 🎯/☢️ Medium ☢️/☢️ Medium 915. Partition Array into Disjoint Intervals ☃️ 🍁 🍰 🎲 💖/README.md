# 915. Partition Array into Disjoint Intervals

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/partition-array-into-disjoint-intervals/description/"><strong>➥ ☢️ 915 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `nums`, you need to divide it into two contiguous subarrays called `left` and `right` such that:

- 1️⃣ Every element in `left` is **less than or equal** to every element in `right`.  

- 2️⃣ Both `left` and `right` are **non-empty**.  

- 3️⃣ `left` has the **smallest possible size** while satisfying the above conditions.  

Your goal is to return the **length** (number of elements) of the `left` subarray after this partitioning.  
You are **guaranteed** that at least **one valid partitioning** exists for the given input.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [5,0,3,8,6]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ left = [5,0,3], right = [8,6]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,1,0,6,12]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ left = [1,1,1,0], right = [6,12]

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2, 2, 1, 3, 4, 5]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ left = [2, 2, 1], right = [3, 4, 5]. <br/> The element in the left must less then element in right side. Therefore '3' value makes sense 
</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [4, 3, 2, 1, 5, 6, 7]

  ### 📤 `Output`  ➤ 4

   ### 🔦 `Explanation`  ➤  The reason for using [4, 3, 2, 1]. it less then number in rightSide 5 6 7 Therefore it returns smallest Possible left side length which can happens . 

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= nums.length <= 10<sup>5</sup> </br>\
🔹 0 <= nums[i] <= 10<sup>6</sup> </br>
🔹 There is at least one valid answer for the given input. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
