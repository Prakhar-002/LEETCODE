# 904. Fruit Into Baskets

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ 904 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are visiting a farm with a single row of fruit trees arranged from left to right. These trees are represented by an integer array `fruits`, where `fruits[i]` indicates the type of fruit produced by the i<sup>th</sup> tree.

You want to collect as much fruit as possible, but the owner has strict rules you must follow:

1.  You have only two baskets, and each basket can hold only a single type of fruit. There is no limit to the number of fruits each basket can hold.
2.  Starting from any tree of your choice, you must pick exactly one fruit from every tree (including the starting tree) as you move to the *right*.
3.  All picked fruits *must* fit in one of your baskets. You cannot pick a fruit that doesn't match either of the fruit types you've chosen for your two baskets.
4.  Once you encounter a tree whose fruit *cannot* fit into your baskets, you must stop picking fruits.

Your task is to return the maximum number of fruits you can pick while following these rules.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ fruits = [1,2,1]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ We can pick from all 3 trees.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ fruits = [0,1,2,2]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ We can pick from trees [1,2,2].
If we had started at the first tree, we would only pick from trees [0,1].

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ fruits = [1,2,3,2,2]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ We can pick from trees [2,3,2,2].
If we had started at the first tree, we would only pick from trees [1,2].

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= fruits.length <= 10<sup>5</sup> </br>

🔹 0 <= fruits[i] < fruits.length </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Hash Table**  </br>

🔸 **Sliding Window**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://leetcode.com/problems/fruit-into-baskets/description/?envType=daily-question&envId=2025-08-04" width = "700px" height="462px" />

</h1>
