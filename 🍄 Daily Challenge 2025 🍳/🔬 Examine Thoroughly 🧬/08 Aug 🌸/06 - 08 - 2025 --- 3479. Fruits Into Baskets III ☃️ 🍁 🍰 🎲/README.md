# 3479. Fruits Into Baskets III

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/fruits-into-baskets-iii/description/?envType=daily-question&envId=2025-08-06"><strong>➥ ☢️ 3479 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two arrays of integers, `fruits` and `baskets`, each of length `n`. The array `fruits` represents the quantity of each of the `n` different fruit types. The array `baskets` represents the capacity of each of the `n` baskets.

### Your task is to simulate the process of placing fruits into baskets, following these steps from left to right:

1. Each type of fruit must be placed into the leftmost available basket that has a capacity greater than or equal to the quantity of that fruit type. In other words, try to fit the fruit into the first available basket that is large enough.
2. Each basket can hold only one type of fruit (it's dedicated to that type).
3. If a particular type of fruit cannot be placed into *any* of the available baskets (because all remaining baskets are too small), then that fruit type remains unplaced.

### After attempting to place all the fruits, return the *number* of fruit types that remained unplaced.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ fruits = [4,2,5], baskets = [3,5,4]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤

- fruits[0] = 4 is placed in baskets[1] = 5.
- fruits[1] = 2 is placed in baskets[0] = 3.
- fruits[2] = 5 cannot be placed in baskets[2] = 4.

Since one fruit type remains unplaced, we return 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ fruits = [3,6,1], baskets = [6,4,7]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤

- fruits[0] = 3 is placed in baskets[0] = 6.
- fruits[1] = 6 cannot be placed in baskets[1] = 4 (insufficient capacity) but can be placed in the next available basket, baskets[2] = 7.
- fruits[2] = 1 is placed in baskets[1] = 4.

Since all fruits are successfully placed, we return 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == fruits.length == baskets.length </br>

🔹 1 <= n <= 10<sup>5</sup> </br>

🔹 1 <= fruits[i], baskets[i] <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Binary Search**  </br>

🔸 **Segment Tree**  </br>

🔸 **Ordered Set**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/06%20-%2008%20-%202025%20---%203479.%20Fruits%20Into%20Baskets%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203479.%20Fruits%20Into%20Baskets%20III.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/06%20-%2008%20-%202025%20---%203479.%20Fruits%20Into%20Baskets%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203479.%20Fruits%20Into%20Baskets%20III.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/06%20-%2008%20-%202025%20---%203479.%20Fruits%20Into%20Baskets%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203479.%20Fruits%20Into%20Baskets%20III.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/06%20-%2008%20-%202025%20---%203479.%20Fruits%20Into%20Baskets%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203479.%20Fruits%20Into%20Baskets%20III.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/3e8d8e30-ae9a-46c6-a91d-20bf35de1370" width = "700px" height="462px" />

</h1>
