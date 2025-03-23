# 1976. Number of Ways to Arrive at Destination

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/description/?envType=daily-question&envId=2025-03-23"><strong>➥ ☢️ 1976 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

You are in a **city** that consists of `n` intersections numbered from `0` to `n - 1`, with **bi-directional roads** between some intersections.

### 🔹 Given:
- An **integer** `n` representing the number of intersections.
- A **2D integer array** `roads`, where `roads[i] = [uᵢ, vᵢ, timeᵢ]` represents a **road** between intersections `uᵢ` and `vᵢ` that takes `timeᵢ` minutes to travel.

### 🏆 Goal:
- Find **how many ways** you can travel from intersection `0` to intersection `n - 1` in the **shortest amount of time**.
- **Return the count modulo** `10⁹ + 7` since the answer may be large.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/8aa18785-a993-4b07-9628-036830fa050b" width="255px" height="400px"/>

  ### 📥 `Input`  ➤ n = 7, roads = [[0,6,7],[0,1,2],[1,2,3],[1,3,3],[6,3,3],[3,5,1],[6,5,1],[2,5,1],[0,4,5],[4,6,2]]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ ➺ The shortest amount of time it takes to go from intersection 0 to intersection 6 is 7 minutes.
The four ways to get there in 7 minutes are:  
- 0 ➝ 6  
- 0 ➝ 4 ➝ 6  
- 0 ➝ 1 ➝ 2 ➝ 5 ➝ 6  
- 0 ➝ 1 ➝ 3 ➝ 5 ➝ 6  

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 2, roads = [[1,0,10]]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ There is only one way to go from intersection 0 to intersection 1, and it takes 10 minutes.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 3, roads = [[0,1,5],[1,2,5],[0,2,10]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤  The shortest time to travel from intersection 0 to 2 is 10.  There are two ways to achieve this: directly (0->2) or via intersection 1 (0->1->2) in same amount of time.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n <= 200` </br>
🔹 `n - 1 <= roads.length <= n * (n - 1) / 2` </br>
🔹 `roads[i].length == 3` </br>
🔹 0 <= u<sub>i</sub>, v<sub>i</sub> <= n - 1 </br>
🔹 1 <= time<sub>i</sub> <= 10<sup>9</sup> </br>
🔹 u<sub>i</sub> != v<sub>i</sub> </br>
🔹 There is at most one road connecting any two intersections. </br>
🔹 You can reach any intersection from any other intersection. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Dynamic Programming**  </br>
🔸 **Graph**  </br>
🔸 **Topological Sort**  </br>
🔸 **Shortest Path**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/23%20-%2003%20-%202025%20---%201976.%20Number%20of%20Ways%20to%20Arrive%20at%20Destination%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201976.%20Number%20of%20Ways%20to%20Arrive%20at%20Destination.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/23%20-%2003%20-%202025%20---%201976.%20Number%20of%20Ways%20to%20Arrive%20at%20Destination%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201976.%20Number%20of%20Ways%20to%20Arrive%20at%20Destination.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/23%20-%2003%20-%202025%20---%201976.%20Number%20of%20Ways%20to%20Arrive%20at%20Destination%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201976.%20Number%20of%20Ways%20to%20Arrive%20at%20Destination.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/23%20-%2003%20-%202025%20---%201976.%20Number%20of%20Ways%20to%20Arrive%20at%20Destination%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201976.%20Number%20of%20Ways%20to%20Arrive%20at%20Destination.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
