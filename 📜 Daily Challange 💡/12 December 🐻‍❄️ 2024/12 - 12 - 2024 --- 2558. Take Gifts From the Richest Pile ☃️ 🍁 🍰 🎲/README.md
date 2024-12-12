# 2558. Take Gifts From the Richest Pile

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/take-gifts-from-the-richest-pile/description/?envType=daily-question&envId=2024-12-12"><strong>➥ ♻️ 2558 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array gifts denoting the number of gifts in various piles. Every second, you do the following:

- Choose the pile with the maximum number of gifts.

- If there is more than one pile with the maximum number of gifts, choose any.

- Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts.

### Return *the number of gifts remaining after `k` seconds*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ gifts = [25,64,9,4,100], k = 4

  ### 📤 `Output`  ➤ 29

  ### 🔦 `Explanation`  ➤ 

The gifts are taken in the following way:

➺ In the first second, the last pile is chosen and 10 gifts are left behind.

➺ Then the second pile is chosen and 8 gifts are left behind.

➺ After that the first pile is chosen and 5 gifts are left behind.

➺ Finally, the last pile is chosen again and 3 gifts are left behind.

The final remaining gifts are [5,8,9,4,3], so the total number of gifts remaining is 29.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ gifts = [1,1,1,1], k = 4

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation` ➤ In this case, regardless which pile you choose, you have to leave behind 1 gift in each pile. </br> That is, you can't take any pile with you. </br> So, the total gifts remaining are 4.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= gifts.length <= 10<sup>3</sup>** </br>

🔹 **1 <= gifts[i] <= 10<sup>9</sup>** </br>

🔹 **1 <= k <= 10<sup>3</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/12%20-%2012%20-%202024%20---%202558.%20Take%20Gifts%20From%20the%20Richest%20Pile%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202558.%20Take%20Gifts%20From%20the%20Richest%20Pile.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/12%20-%2012%20-%202024%20---%202558.%20Take%20Gifts%20From%20the%20Richest%20Pile%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202558.%20Take%20Gifts%20From%20the%20Richest%20Pile.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/12%20-%2012%20-%202024%20---%202558.%20Take%20Gifts%20From%20the%20Richest%20Pile%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202558.%20Take%20Gifts%20From%20the%20Richest%20Pile.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/12%20-%2012%20-%202024%20---%202558.%20Take%20Gifts%20From%20the%20Richest%20Pile%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202558.%20Take%20Gifts%20From%20the%20Richest%20Pile.js) |
