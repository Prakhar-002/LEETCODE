# 2601. Prime Subtraction Operation

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/prime-subtraction-operation/description/?envType=daily-question&envId=2024-11-11"><strong>➥ ☢️ 2601 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array nums of length n.

### You can perform the following operation as many times as you want:

- Pick an index `i` that you haven’t picked before, and pick a prime `p` strictly less than `nums[i]`, then subtract `p` from `nums[i].`

### Return *true if you can make `nums` a strictly increasing array using the above operation and false otherwise*.

### A strictly increasing array is an array whose each element is strictly greater than its preceding element.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [4,9,6,10]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ ➺In the first operation: Pick i = 0 and p = 3, and then subtract 3 from nums[0], so that nums becomes [1,9,6,10].</br> In the second operation: i = 1, p = 7, subtract 7 from nums[1], so nums becomes equal to [1,2,6,10].</br> After the second operation, nums is sorted in strictly increasing order, so the answer is true.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [6,8,11,12]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation` ➤ Initially nums is sorted in strictly increasing order, so we don't need to make any operations.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [5,8,3]

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation`  ➤ It can be proven that there is no way to perform operations to make nums sorted in strictly increasing order, so the answer is false.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 1000`** </br>

🔹 **`1 <= nums[i] <= 1000`** </br>

🔹 **`nums.length == n`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Binary Search**  </br>
🔸 **Greedy**  </br>
🔸 **Number Theory**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/11%20-%2011%20-%202024%20---%202601.%20Prime%20Subtraction%20Operation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202601.%20Prime%20Subtraction%20Operation.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/11%20-%2011%20-%202024%20---%202601.%20Prime%20Subtraction%20Operation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202601.%20Prime%20Subtraction%20Operation.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/11%20-%2011%20-%202024%20---%202601.%20Prime%20Subtraction%20Operation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202601.%20Prime%20Subtraction%20Operation.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/11%20-%2011%20-%202024%20---%202601.%20Prime%20Subtraction%20Operation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202601.%20Prime%20Subtraction%20Operation.js) |
