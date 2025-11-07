# 2528. Maximize the Minimum Powered City

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximize-the-minimum-powered-city/description/?envType=daily-question&envId=2025-11-07"><strong>➥ 🫀 2528 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed integer array `stations` of length `n`, where `stations[i]` represents the number of power stations in the ith city.

### Each power station can provide power to every city in a fixed range. In other words, if the range is denoted by `r`, then a power station at city `i` can provide power to all cities `j` such that `|i - j| <= r` and `0 <= i, j <= n - 1`.

### Note that `|x|` denotes absolute value. For example, `|7 - 5| = 2` and `|3 - 10| = 7`.
### The power of a city is the total number of power stations it is being provided power from.

### The government has sanctioned building `k` more power stations, each of which can be built in any city, and have the same range as the pre-existing ones.

### Given the two integers `r` and `k`, return the maximum possible minimum power of a city, if the additional power stations are built optimally.

### Note that you can build the `k` power stations in multiple cities.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `stations = [1,2,4,5,0], r = 1, k = 2`

  ### 📤 `Output`  ➤ `5`

  ### 🔦 `Explanation`  ➤ ➺

  - One of the optimal ways is to install both the power stations at city 1. 
  - So `stations` will become `[1,4,4,5,0]`.
    - City 0 is provided by 1 + 4 = 5 power stations.
    - City 1 is provided by 1 + 4 + 4 = 9 power stations.
    - City 2 is provided by 4 + 4 + 5 = 13 power stations.
    - City 3 is provided by 5 + 4 = 9 power stations.
    - City 4 is provided by 5 + 0 = 5 power stations.
  - So the minimum power of a city is 5.
  - Since it is not possible to obtain a larger power, we return 5.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `stations = [4,4,4,4], r = 0, k = 3`

  ### 📤 `Output`  ➤ `4`

  ### 🔦 `Explanation`  ➤ ➺

  - It can be proved that we cannot make the minimum power of a city greater than 4.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `n == stations.length` </br>
🔹 `1 <= n <= 10^5` </br>
🔹 `0 <= stations[i] <= 10^5` </br>
🔹 `0 <= r <= n - 1` </br>
🔹 `0 <= k <= 10^9` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Binary Search** </br>
🔸 **Greedy** </br>
🔸 **Queue** </br>
🔸 **Sliding Window** </br>
🔸 **Prefix Sum** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/07%20-%2011%20-%202025%20---%202528.%20Maximize%20the%20Minimum%20Powered%20City%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202528.%20Maximize%20the%20Minimum%20Powered%20City.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/07%20-%2011%20-%202025%20---%202528.%20Maximize%20the%20Minimum%20Powered%20City%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202528.%20Maximize%20the%20Minimum%20Powered%20City.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/07%20-%2011%20-%202025%20---%202528.%20Maximize%20the%20Minimum%20Powered%20City%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202528.%20Maximize%20the%20Minimum%20Powered%20City.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/07%20-%2011%20-%202025%20---%202528.%20Maximize%20the%20Minimum%20Powered%20City%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202528.%20Maximize%20the%20Minimum%20Powered%20City.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/ca08b6d4-2e47-4163-9a48-3b21aa0828b3" width = "700px" height="462px" />

</h1>
