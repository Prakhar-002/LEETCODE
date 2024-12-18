# 1475. Final Prices With a Special Discount in a Shop

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/?envType=daily-question&envId=2024-12-18"><strong>➥ ♻️ 1475 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `prices` where `prices[i]` is the price of the i<sup>th</sup> item in a shop.

### There is a special discount for items in the shop. If you buy the i<sup>th</sup> item, then you will receive a discount equivalent to `prices[j]` where `j` is the minimum index such that `j > i` and `prices[j] <= prices[i]`. Otherwise, you will not receive any discount at all.

### Return an integer array `answer` where i<sup>th</sup> is the final price you will pay for the ith item of the shop, considering the special discount.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ prices = [8,4,6,2,3]

  ### 📤 `Output`  ➤ [4,2,4,2,3]

  ### 🔦 `Explanation`  ➤ ➺

➺ For item 0 with price[0]=8 you will receive a discount equivalent to prices[1]=4, therefore, the final price you will pay is 8 - 4 = 4.

➺ For item 1 with price[1]=4 you will receive a discount equivalent to prices[3]=2, therefore, the final price you will pay is 4 - 2 = 2.

➺ For item 2 with price[2]=6 you will receive a discount equivalent to prices[3]=2, therefore, the final price you will pay is 6 - 2 = 4.

➺ For items 3 and 4 you will not receive any discount at all.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ prices = [1,2,3,4,5]

  ### 📤 `Output`  ➤ [1,2,3,4,5]

  ### 🔦 `Explanation` ➤ In this case, for all items, you will not receive any discount at all.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ prices = [10,1,1,6]

  ### 📤 `Output`  ➤ [9,0,1,6]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= prices.length <= 500`** </br>

🔹 **`1 <= prices[i] <= 1000`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Stack**  </br>
🔸 **Monotonic Stack**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
