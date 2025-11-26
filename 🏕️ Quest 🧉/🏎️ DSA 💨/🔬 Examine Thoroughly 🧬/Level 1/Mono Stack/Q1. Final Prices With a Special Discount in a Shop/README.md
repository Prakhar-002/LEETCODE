# Q1. Final Prices With a Special Discount in a Shop

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/?envType=problem-list-v2&envId=dsa-linear-shoal-monotonic-stack"><strong>➥ ♻️ Q1 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `prices` where `prices[i]` is the price of the ith item in a shop.

### There is a special discount for items in the shop. If you buy the ith item, then you will receive a discount equivalent to `prices[j]` where j is the minimum index such that j > i and prices[j] <= prices[i]. Otherwise, you will not receive any discount at all.

### Return an integer array `answer` where `answer[i]` is the final price you will pay for the ith item of the shop, considering the special discount.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ prices = [8,4,6,2,3]

  ### 📤 `Output`  ➤ [4,2,4,2,3]

  ### 🔦 `Explanation`  ➤ 

```JS
For item 0 with price[0]=8 you will receive a discount equivalent to prices[1]=4, therefore, the final price you will pay is 8 - 4 = 4.
For item 1 with price[1]=4 you will receive a discount equivalent to prices[3]=2, therefore, the final price you will pay is 4 - 2 = 2.
For item 2 with price[2]=6 you will receive a discount equivalent to prices[3]=2, therefore, the final price you will pay is 6 - 2 = 4.
For items 3 and 4 you will not receive any discount at all.
```

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ prices = [1,2,3,4,5]

  ### 📤 `Output`  ➤ [1,2,3,4,5]

  ### 🔦 `Explanation` ➤ In this case, for all items, you will not receive any discount at all.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ prices = [10,1,1,6]

  ### 📤 `Output`  ➤ [9,0,1,6]

  ### 🔦 `Explanation` ➤ For price[0]=10, discount is price[1]=1, so final price is 9. For price[1]=1, discount is price[2]=1, so final price is 0. For price[2]=1, there is no discount, so the final price is 1. For price[3]=6, there is no discount, so the final price is 6.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= prices.length <= 500 </br>
🔹 1 <= prices[i] <= 1000 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Stack** </br>
🔸 **Monotonic Stack** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Mono%20Stack/Q1.%20Final%20Prices%20With%20a%20Special%20Discount%20in%20a%20Shop/%F0%9F%8D%81JAVA%20-%20Final%20Prices%20With%20a%20Special%20Discount%20in%20a%20Shop.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Mono%20Stack/Q1.%20Final%20Prices%20With%20a%20Special%20Discount%20in%20a%20Shop/%F0%9F%8E%B2CPP%20-%20Final%20Prices%20With%20a%20Special%20Discount%20in%20a%20Shop.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Mono%20Stack/Q1.%20Final%20Prices%20With%20a%20Special%20Discount%20in%20a%20Shop/%F0%9F%8D%B0PYTHON%20-%20Final%20Prices%20With%20a%20Special%20Discount%20in%20a%20Shop.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Mono%20Stack/Q1.%20Final%20Prices%20With%20a%20Special%20Discount%20in%20a%20Shop/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Final%20Prices%20With%20a%20Special%20Discount%20in%20a%20Shop.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/7d09bb9e-f16b-4e52-bf39-08e8e6b9cf7d" width = "700px" height="462px" />

</h1>
