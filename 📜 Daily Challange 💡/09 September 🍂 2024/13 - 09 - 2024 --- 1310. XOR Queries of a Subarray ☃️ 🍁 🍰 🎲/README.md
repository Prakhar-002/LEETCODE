# 1310. XOR Queries of a Subarray

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/xor-queries-of-a-subarray/description/?envType=daily-question&envId=2024-09-13"><strong>➥ ☢️ 1310 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `arr` of positive integers. You are also given the array `queries` where `queries[i] = [left-i, right-i]`.

### For each query `i` compute the `XOR` of elements from `lefti` to `righti` (that is, `arr[lefti] XOR arr[lefti + 1] XOR ... XOR arr[righti]` ).

### Return *an array `answer` where `answer[i]` is the answer to the `i-th` query*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ arr = [1,3,4,8], queries = [[0,1],[1,2],[0,3],[3,3]]

  ### 📤 `Output`  ➤  [2,7,14,8] 

  ### 🔦 `Explanation`  ➤ 

    The binary representation of the elements in the array are:
    ➺ 1 = 0001 
    ➺ 3 = 0011 
    ➺ 4 = 0100 
    ➺ 8 = 1000 

    ➺ The XOR values for queries are:
    ➺ [0,1] = 1 xor 3 = 2 
    ➺ [1,2] = 3 xor 4 = 7 
    ➺ [0,3] = 1 xor 3 xor 4 xor 8 = 14 
    ➺ [3,3] = 8

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [4,8,2,10], queries = [[2,3],[1,3],[0,0],[0,3]]

  ### 📤 `Output`  ➤ [8,0,4,4]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= arr.length, queries.length <= 3 * 10<sup>4</sup>** </br>

🔹 **1 <= arr[i] <= 10<sup>9</sup>** </br>

🔹 **`queries[i].length == 2`** </br>

🔹 **0 <= left<sub>i</sub> <= right<sub>i</sub> < arr.length** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/13%20-%2009%20-%202024%20---%201310.%20XOR%20Queries%20of%20a%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1310.%20XOR%20Queries%20of%20a%20Subarray.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/13%20-%2009%20-%202024%20---%201310.%20XOR%20Queries%20of%20a%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1310.%20XOR%20Queries%20of%20a%20Subarray.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/13%20-%2009%20-%202024%20---%201310.%20XOR%20Queries%20of%20a%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1310.%20XOR%20Queries%20of%20a%20Subarray.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/13%20-%2009%20-%202024%20---%201310.%20XOR%20Queries%20of%20a%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1310.%20XOR%20Queries%20of%20a%20Subarray.js) |
