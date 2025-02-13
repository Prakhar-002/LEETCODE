# 1962. Remove Stones to Minimize the Total

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/remove-stones-to-minimize-the-total/description/"><strong>➥ ☢️ 1962 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `piles`, where `piles[i]` represents the number of stones in the i<sup>th</sup> pile, and an integer k. You should apply the following operation exactly k times:

- Choose any `piles[i]` and remove `floor(piles[i] / 2)` stones from it.

### Notice that you can apply the operation on the same pile more than once.

### Return t*he minimum possible total number of stones remaining after applying the* `k` *operations*.

### `floor(x)` is the greatest integer that is smaller than or equal to `x` (i.e., rounds `x` down).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ piles = [5,4,9], k = 2

  ### 📤 `Output`  ➤ 12

  ### 🔦 `Explanation`  ➤ Steps of a possible scenario are:</br></br>➺ Apply the operation on pile 2. The resulting piles are [5,4,5].</br></br>➺ Apply the operation on pile 0. The resulting piles are [3,4,5].</br></br> The total number of stones in [3,4,5] is 12.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ piles = [4,3,6,7], k = 3

  ### 📤 `Output`  ➤ 12

  ### 🔦 `Explanation` ➤ Steps of a possible scenario are:</br></br>➺ Apply the operation on pile 2. The resulting piles are [4,3,3,7].</br></br>➺ Apply the operation on pile 3. The resulting piles are [4,3,3,4].</br></br>➺ Apply the operation on pile 0. The resulting piles are [2,3,3,4].</br></br> The total number of stones in [2,3,3,4] is 12.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= piles.length <= 10<sup>5</sup>** </br>

🔹 **1 <= piles[i] <= 10<sup>4</sup>** </br>

🔹 **1 <= k <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>
🔸 **Heap (Priority Queue)**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%201962.%20Remove%20Stones%20to%20Minimize%20the%20Total%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201962.%20Remove%20Stones%20to%20Minimize%20the%20Total.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%201962.%20Remove%20Stones%20to%20Minimize%20the%20Total%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201962.%20Remove%20Stones%20to%20Minimize%20the%20Total.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%201962.%20Remove%20Stones%20to%20Minimize%20the%20Total%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201962.%20Remove%20Stones%20to%20Minimize%20the%20Total.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%201962.%20Remove%20Stones%20to%20Minimize%20the%20Total%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201962.%20Remove%20Stones%20to%20Minimize%20the%20Total.js) |
