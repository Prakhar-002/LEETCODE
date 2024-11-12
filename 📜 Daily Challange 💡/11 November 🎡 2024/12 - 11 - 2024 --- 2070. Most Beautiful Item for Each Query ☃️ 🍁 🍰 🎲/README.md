# 2070. Most Beautiful Item for Each Query

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/most-beautiful-item-for-each-query/description/?envType=daily-question&envId=2024-11-12"><strong>➥ ☢️ 2070 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 2D integer array `items` where items[i] = [price<sub>i</sub>, beauty<sub>i</sub>] denotes the price and beauty of an item respectively.

### You are also given a `0-indexed` integer array `queries`. For each `queries[j]`, you want to determine the `maximum beauty` of an item whose `price` is `less than or equal` to `queries[j]`. If no such item exists, then the answer to this query is `0`.

### Return *an array `answer` of the same length as `queries` where `answer[j]` is the answer to the j<sup>th</sup> query*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ items = [[1,2],[3,2],[2,4],[5,6],[3,5]], queries = [1,2,3,4,5,6]

  ### 📤 `Output`  ➤ [2,4,5,5,6,6]

  ### 🔦 `Explanation`  ➤ 

➺ For queries[0]=1, [1,2] is the only item which has price <= 1. Hence, the answer for this query is 2.
➺ For queries[1]=2, the items which can be considered are [1,2] and [2,4]. 
  The maximum beauty among them is 4.
➺ For queries[2]=3 and queries[3]=4, the items which can be considered are [1,2], [3,2], [2,4], and [3,5].
  The maximum beauty among them is 5.
➺ For queries[4]=5 and queries[5]=6, all items can be considered.
Hence, the answer for them is the maximum beauty of all items, i.e., 6.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ items = [[1,2],[1,2],[1,3],[1,4]], queries = [1]

  ### 📤 `Output`  ➤ [4]

  ### 🔦 `Explanation` ➤ The price of every item is equal to 1, so we choose the item with the maximum beauty 4. </br> Note that multiple items can have the same price and/or beauty.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ items = [[10,1000]], queries = [5]

  ### 📤 `Output`  ➤ [0]

  ### 🔦 `Explanation`  ➤ No item has a price less than or equal to 5, so no item can be chosen.</br> Hence, the answer to the query is 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= items.length, queries.length <= 10<sup>5</sup>** </br>

🔹 **`items[i].length == 2`** </br>

🔹 **1 <= price<sub>i</sub>, beauty<sub>i</sub>, queries[j] <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/12%20-%2011%20-%202024%20---%202070.%20Most%20Beautiful%20Item%20for%20Each%20Query%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202070.%20Most%20Beautiful%20Item%20for%20Each%20Query.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/12%20-%2011%20-%202024%20---%202070.%20Most%20Beautiful%20Item%20for%20Each%20Query%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202070.%20Most%20Beautiful%20Item%20for%20Each%20Query.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/12%20-%2011%20-%202024%20---%202070.%20Most%20Beautiful%20Item%20for%20Each%20Query%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202070.%20Most%20Beautiful%20Item%20for%20Each%20Query.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/12%20-%2011%20-%202024%20---%202070.%20Most%20Beautiful%20Item%20for%20Each%20Query%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202070.%20Most%20Beautiful%20Item%20for%20Each%20Query.js) |

