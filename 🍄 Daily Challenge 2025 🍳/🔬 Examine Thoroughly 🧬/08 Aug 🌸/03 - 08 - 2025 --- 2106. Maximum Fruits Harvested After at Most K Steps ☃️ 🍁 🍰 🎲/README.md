# 2106. Maximum Fruits Harvested After at Most K Steps

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-fruits-harvested-after-at-most-k-steps/description/?envType=daily-question&envId=2025-08-03"><strong>➥ 🫀 2106 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Fruits are positioned along an infinite x-axis. You are given a 2D integer array `fruits` where `fruits[i] = [positioni, amounti]` describes that there are `amounti` fruits located at position `positioni`. It's guaranteed that `fruits` is already sorted in ascending order by `positioni`, and all `positioni` values are unique.

### You are also given an integer `startPos`, representing your initial position, and an integer `k`, indicating the maximum number of steps you can take. From any position, you can move either left or right, with each step costing one unit of distance along the x-axis. When you reach a position, you automatically harvest *all* the fruits present at that location, and the fruits disappear.

### The task is to return the maximum total number of fruits you can harvest, given your starting position, the arrangement of fruits, and the maximum steps you are allowed to take.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="472" height="115" alt="2106 que 1" src="https://github.com/user-attachments/assets/4edbd7bc-04fc-4abc-a8ca-867fc710df82" />

  ### 📥 `Input`  ➤ fruits = [[2,8],[6,3],[8,6]], startPos = 5, k = 4

  ### 📤 `Output`  ➤ 9

  ### 🔦 `Explanation`  ➤
The optimal way is to:

- Move right to position 6 and harvest 3 fruits.
- Move right to position 8 and harvest 6 fruits.

You moved 3 steps and harvested 3 + 6 = 9 fruits in total.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="512" height="129" alt="2106 que 2" src="https://github.com/user-attachments/assets/be4b2ba9-6024-4d50-b643-c6933207ec84" />

  ### 📥 `Input` ➤ fruits = [[0,9],[4,1],[5,7],[6,2],[7,4],[10,9]], startPos = 5, k = 4

  ### 📤 `Output`  ➤ 14

  ### 🔦 `Explanation`  ➤
You can move at most k = 4 steps, so you cannot reach position 0 nor 10.
The optimal way is to:

- Harvest the 7 fruits at the starting position 5
- Move left to position 4 and harvest 1 fruit
- Move right to position 6 and harvest 2 fruits
- Move right to position 7 and harvest 4 fruits

You moved 1 + 3 = 4 steps and harvested 7 + 1 + 2 + 4 = 14 fruits in total.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img width="476" height="100" alt="2106 que 3" src="https://github.com/user-attachments/assets/fa33a6a7-89f9-4bd9-bd4e-713defd7a5d7" />

  ### 📥 `Input` ➤ fruits = [[0,3],[6,4],[8,5]], startPos = 3, k = 2

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤
You can move at most k = 2 steps and cannot reach any position with fruits.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= fruits.length <= 10<sup>5</sup> </br>

🔹 fruits[i].length == 2 </br>

🔹 0 <= startPos, positioni <= 2 * 10<sup>5</sup> </br>

🔹 positioni-1 < positioni for any i > 0 (0-indexed) </br>

🔹 1 <= amounti <= 10<sup>4</sup> </br>

🔹 0 <= k <= 2 * 10<sup>5</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Binary Search**  </br>

🔸 **Sliding Window**  </br>

🔸 **Prefix Sum**  </br>

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

<img src ="" width = "700px" height="462px" />

</h1>
