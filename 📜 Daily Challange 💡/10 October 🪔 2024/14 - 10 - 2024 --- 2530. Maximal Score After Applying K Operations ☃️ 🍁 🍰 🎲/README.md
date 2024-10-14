# 2530. Maximal Score After Applying K Operations

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ 2530 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a `0-indexed` integer array `nums` and an integer `k`. You have a `starting score` of `0`.

### In one `operation`:

1. choose an index `i` such that `0 <= i < nums.length`,

2. increase your `score` by `nums[i]`, and

3. replace `nums[i]` with `ceil(nums[i] / 3)`.

### Return *the maximum possible `score` you can attain after applying exactly `k` operations*.

### The ceiling function `ceil(val)` is the least integer greater than or equal to `val`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [10,10,10,10,10], k = 5

  ### 📤 `Output`  ➤ 50

  ### 🔦 `Explanation`  ➤  Apply the operation to each array element exactly once. The final score is 10 + 10 + 10 + 10 + 10 = 50.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [1,10,3,3,3], k = 3

  ### 📤 `Output`  ➤ 17

  ### 🔦 `Explanation` ➤ You can do the following operations:

    Operation 1 ➺ Select i = 1, so nums 
        becomes [1,4,3,3,3]. Your score increases by 10.

    Operation 2 ➺ Select i = 1, so nums 
        becomes [1,2,3,3,3]. Your score increases by 4.

    Operation 3 ➺ Select i = 2, so nums 
        becomes [1,1,1,3,3]. Your score increases by 3.

    The final score is 10 + 4 + 3 = 17.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [1,10,3,3,3,7,8,9], k = 5 

  ### 📤 `Output`  ➤ 38

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length, k <= 10<sup>5</sup>** </br>

🔹 **1 <= nums[i] <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>
🔸 **Heap (Priority Queue)**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/14%20-%2010%20-%202024%20---%202530.%20Maximal%20Score%20After%20Applying%20K%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202530.%20Maximal%20Score%20After%20Applying%20K%20Operations.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/14%20-%2010%20-%202024%20---%202530.%20Maximal%20Score%20After%20Applying%20K%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202530.%20Maximal%20Score%20After%20Applying%20K%20Operations.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/14%20-%2010%20-%202024%20---%202530.%20Maximal%20Score%20After%20Applying%20K%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202530.%20Maximal%20Score%20After%20Applying%20K%20Operations.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/14%20-%2010%20-%202024%20---%202530.%20Maximal%20Score%20After%20Applying%20K%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202530.%20Maximal%20Score%20After%20Applying%20K%20Operations.js) |


