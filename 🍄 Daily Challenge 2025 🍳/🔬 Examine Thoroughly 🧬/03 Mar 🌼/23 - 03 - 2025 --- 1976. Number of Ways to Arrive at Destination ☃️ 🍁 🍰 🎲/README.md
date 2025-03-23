# 

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ ---- Leetcode Medium ☢️ </strong></a>
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

<img src="" width="" height=""/>

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
