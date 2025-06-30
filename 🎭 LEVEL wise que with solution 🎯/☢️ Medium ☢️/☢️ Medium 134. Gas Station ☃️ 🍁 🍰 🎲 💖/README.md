# 134. Gas Station

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ 134 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` gas stations positioned along a circular route. The amount of gas at the i<sup>th</sup> station is given by `gas[i]`.

### You have a car with an unlimited gas tank. The cost to travel from the i<sup>th</sup> station to the next (i + 1)<sup>th</sup> station is `cost[i]`. You begin your journey with an empty tank at one of the gas stations.

### Your task: Given two integer arrays, `gas` and `cost`, return the starting gas station's index if it is possible to complete one full circuit in the clockwise direction. If it is not possible, return -1.

### Guaranteed constraint: If there exists a solution, it is unique.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ gas = [1,2,3,4,5], cost = [3,4,5,1,2]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤
Start at station 3 (index 3) and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
Travel to station 4. Your tank = 4 - 1 + 5 = 8
Travel to station 0. Your tank = 8 - 2 + 1 = 7
Travel to station 1. Your tank = 7 - 3 + 2 = 6
Travel to station 2. Your tank = 6 - 4 + 3 = 5
Travel to station 3. The cost is 5. Your gas is just enough to travel back to station 3.
Therefore, return 3 as the starting index.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ gas = [2,3,4], cost = [3,4,3]

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤
You can't start at station 0 or 1, as there is not enough gas to travel to the next station.
Let's start at station 2 and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
Travel to station 0. Your tank = 4 - 3 + 2 = 3
Travel to station 1. Your tank = 3 - 3 + 3 = 3
You cannot travel back to station 2, as it requires 4 unit of gas but you only have 3.
Therefore, you can't travel around the circuit once no matter where you start.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == gas.length == cost.length </br>

🔹 1 <= n <= 10<sup>5</sup> </br>

🔹 0 <= gas[i], cost[i] <= 10<sup>4</sup> </br>

🔹 The input is generated such that the answer is unique. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
