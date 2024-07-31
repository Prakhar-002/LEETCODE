# 1105. Filling Bookcase Shelves

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/filling-bookcase-shelves/description/?envType=daily-question&envId=2024-07-31"><strong>➥ ☢️ 1105 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `books` where `books[i] = [thicknessi, heighti]` indicates the thickness and height of the `i-th` book. You are also given an integer `shelfWidth`.

### We want to place these books in order onto bookcase shelves that have a total width `shelfWidth`.

### We choose some of the books to place on this shelf such that the sum of their thickness is less than or equal to `shelfWidth`, then build another level of the shelf of the bookcase so that the total height of the bookcase has increased by the maximum height of the books we just put down. We repeat this process until there are no more books to place.

### Note that at each step of the above process, the order of the books we place is the same order as the given sequence of books.

- For example, if we have an ordered list of `5` books, we might place the first and second book onto the first shelf, the third book on the second shelf, and the fourth and fifth book on the last shelf.

### Return *the minimum possible height that the total bookshelf can be after placing shelves in this manner*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1105 que 1](https://github.com/user-attachments/assets/0a734476-3d62-4ec2-8377-374619afdb84)

  ### 📥 Input  ➤ books = [[1,1],[2,3],[2,3],[1,1],[1,1],[1,1],[1,2]], shelfWidth = 4

  ### 📤 Output  ➤ 6

  ### 🔦 Explanation  ➤ The sum of the heights of the 3 shelves is 1 + 3 + 2 = 6.</br> Notice that book number 2 does not have to be on the first shelf.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ books = [[1,3],[2,4],[3,2]], shelfWidth = 6

  ### 📤 Output  ➤ 4

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= books.length <= 1000`** </br>
🔹 **1 <= thickness<sub>i</sub> <= shelfWidth <= 1000** </br>
🔹 **1 <= height<sub>i</sub> <= 1000** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/31%20-%2007%20-%202024%20---%201105.%20Filling%20Bookcase%20Shelves%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1105-FillingBookcaseShelves.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/31%20-%2007%20-%202024%20---%201105.%20Filling%20Bookcase%20Shelves%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1105-FillingBookcaseShelves.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/31%20-%2007%20-%202024%20---%201105.%20Filling%20Bookcase%20Shelves%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1105-FillingBookcaseShelves.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/31%20-%2007%20-%202024%20---%201105.%20Filling%20Bookcase%20Shelves%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1105-FillingBookcaseShelves.js) |

