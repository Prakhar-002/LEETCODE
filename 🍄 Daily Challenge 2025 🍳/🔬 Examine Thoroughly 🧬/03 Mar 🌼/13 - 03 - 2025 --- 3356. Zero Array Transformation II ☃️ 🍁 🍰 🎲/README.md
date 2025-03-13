# 3356. Zero Array Transformation II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/zero-array-transformation-ii/description/?envType=daily-question&envId=2025-03-13"><strong>➥ ☢️ 3356 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given:
- An **integer array** `nums` of length `n`
- A **2D array** `queries`, where `queries[i] = [li, ri, vali]`

### Each `queries[i]` represents the following **operation**:
- **Decrement** each index in the range `[li, ri]` in `nums` by **at most** `vali`
- The **amount of decrement can be chosen independently** for each index.

### A Zero Array is an array with all its elements equal to 0.

### **Goal**:
Return **the minimum** non-negative value of `k` such that after processing the first `k` queries in sequence, `nums` becomes a **Zero Array** (**all elements become `0`**).

- If **no such `k` exists**, return `-1`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = `[2, 0, 2]`, queries = `[[0,2,1],[0,2,1],[1,1,3]]`

  ### 📤 `Output` ➤ `2`

  ### 🔦 `Explanation` ➤ 

- For i = 0 (l = 0, r = 2, val = 1):

    - Decrement values at indices [0, 1, 2] by [1, 0, 1] respectively.

    - The array will become [1, 0, 1].
- For i = 1 (l = 0, r = 2, val = 1):

    - Decrement values at indices [0, 1, 2] by [1, 0, 1] respectively.

    - The array will become [0, 0, 0], which is a Zero Array. Therefore, the minimum value of k is 2.

1️⃣ **Apply Query `[0,2,1]`** → `nums = [1, 0, 1]`  
2️⃣ **Apply Query `[0,2,1]`** → `nums = [0, 0, 0]` **(Zero Array)**  

✅ **Minimum `k = 2`**

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = `[4, 3, 2, 1]`, queries = `[[1,3,2],[0,2,1]]`

  ### 📤 `Output` ➤ `-1`

  ### 🔦 `Explanation` ➤ 

- For i = 0 (l = 1, r = 3, val = 2):

    - Decrement values at indices [1, 2, 3] by [2, 2, 1] respectively.

    - The array will become [4, 1, 0, 0].
- For i = 1 (l = 0, r = 2, val = 1):

    - Decrement values at indices [0, 1, 2] by [1, 1, 0] respectively.

    - The array will become [3, 0, 0, 0], which is not a Zero Array.

1️⃣ **Apply Query `[1,3,2]`** → `nums = [4, 1, 0, 0]`  
2️⃣ **Apply Query `[0,2,1]`** → `nums = [3, 0, 0, 0]`  

❌ **Not a Zero Array** → Return `-1`

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 10<sup>5</sup> </br>
🔹 0 <= nums[i] <= 5 * 10<sup>5</sup> </br>
🔹 1 <= queries.length <= 10<sup>5</sup> </br>
🔹 queries[i] == [l<sub>i</sub>, r<sub>i</sub>, val<sub>i</sub>] </br>
🔹 `queries[i].length == 3` </br>
🔹 0 <= l<sub>i</sub> <= r<sub>i</sub> < nums.length </br>
🔹 1 <= val<sub>i</sub> <= 5 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/13%20-%2003%20-%202025%20---%203356.%20Zero%20Array%20Transformation%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203356.%20Zero%20Array%20Transformation%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/13%20-%2003%20-%202025%20---%203356.%20Zero%20Array%20Transformation%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203356.%20Zero%20Array%20Transformation%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/13%20-%2003%20-%202025%20---%203356.%20Zero%20Array%20Transformation%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203356.%20Zero%20Array%20Transformation%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/13%20-%2003%20-%202025%20---%203356.%20Zero%20Array%20Transformation%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203356.%20Zero%20Array%20Transformation%20II.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
