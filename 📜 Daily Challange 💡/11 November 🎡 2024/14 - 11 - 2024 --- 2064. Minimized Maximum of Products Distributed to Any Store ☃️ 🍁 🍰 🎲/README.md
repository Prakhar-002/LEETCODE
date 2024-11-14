# 2064. Minimized Maximum of Products Distributed to Any Store

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store/description/?envType=daily-question&envId=2024-11-14"><strong>➥ ☢️ 2064 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `n` indicating there are `n` specialty retail stores. There are `m` product types of varying amounts, which are given as a `0-indexed` integer array `quantities`, where `quantities[i]` represents the number of products of the `i-th` product type.

### You need to distribute `all products` to the retail stores following these rules:

- A store can only be given `at most one product type` but can be given any amount of it.

- After distribution, each store will have been given some number of products (possibly `0`). Let `x` represent the maximum number of products given to any store. You want `x` to be as small as possible, i.e., you want to minimize the `maximum` number of products that are given to any store.

### Return *the minimum possible `x`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 6, quantities = [11,6]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ One optimal way is:
➺  The 11 products of type 0 are distributed to the first four stores in these amounts: 2, 3, 3, 3
➺  The 6 products of type 1 are distributed to the other two stores in these amounts: 3, 3
The maximum number of products given to any store is max(2, 3, 3, 3, 3, 3) = 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 7, quantities = [15,10,10]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ One optimal way is:
➺ The 15 products of type 0 are distributed to the first three stores in these amounts: 5, 5, 5
➺ The 10 products of type 1 are distributed to the next two stores in these amounts: 5, 5
➺ The 10 products of type 2 are distributed to the last two stores in these amounts: 5, 5
The maximum number of products given to any store is max(5, 5, 5, 5, 5, 5, 5) = 5.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  n = 1, quantities = [100000]

  ### 📤 `Output`  ➤ 100000

  ### 🔦 `Explanation`  ➤ The only optimal way is:
➺ The 100000 products of type 0 are distributed to the only store.
The maximum number of products given to any store is max(100000) = 100000.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == quantities.length`** </br>

🔹 **1 <= m <= n <= 10<sup>5</sup>** </br>

🔹 **1 <= quantities[i] <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
