# 874. Walking Robot Simulation

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/walking-robot-simulation/?envType=daily-question&envId=2026-04-03"><strong>➥ ☢️ 874 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### A robot on an infinite XY-plane starts at point `(0, 0)` facing **north**. The robot receives an array of integers `commands`, which represents a sequence of moves that it needs to execute. There are only three possible types of instructions the robot can receive:
### &nbsp;&nbsp;&nbsp;&nbsp;• `-2`: Turn **left** `90` degrees.
### &nbsp;&nbsp;&nbsp;&nbsp;• `-1`: Turn **right** `90` degrees.
### &nbsp;&nbsp;&nbsp;&nbsp;• `1 <= k <= 9`: Move **forward** `k` units, one unit at a time.
### Some of the grid squares are `obstacles`. The `ith` obstacle is at grid point `obstacles[i] = (xi, yi)`. If the robot runs into an obstacle, it will **stay in its current location** (on the block adjacent to the obstacle) and move onto the next command.
### Return the **maximum squared Euclidean distance** that the robot reaches at any point in its path.
### **Note:**
### &nbsp;&nbsp;&nbsp;&nbsp;• There can be an obstacle at `(0, 0)`. If this happens, the robot will **ignore** the obstacle until it has moved off the origin. However, it will be **unable to return** to `(0, 0)` due to the obstacle.
### &nbsp;&nbsp;&nbsp;&nbsp;• **North** means +Y direction. **East** means +X direction. **South** means -Y direction. **West** means -X direction.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ commands = [4,-1,3], obstacles = []
  ### 📤 `Output`  ➤ 25
  ### 🔦 `Explanation`  ➤ Move north `4` units to `(0,4)`. Turn right. Move east `3` units to `(3,4)`. Furthest point is `(3,4)` → `3² + 4² = 25`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ commands = [4,-1,4,-2,4], obstacles = [[2,4]]
  ### 📤 `Output`  ➤ 65
  ### 🔦 `Explanation` ➤ Move north to `(0,4)`. Turn right. Move east `1` unit, blocked at `(1,4)`. Turn left. Move north `4` units to `(1,8)`. Furthest point is `(1,8)` → `1² + 8² = 65`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ commands = [6,-1,-1,6], obstacles = [[0,0]]
  ### 📤 `Output`  ➤ 36
  ### 🔦 `Explanation` ➤ Move north `6` units to `(0,6)`. Turn right twice (now facing south). Move south `5` units, blocked by obstacle at `(0,0)`, stops at `(0,1)`. Furthest point is `(0,6)` → `6² = 36`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= commands.length <= 10^4` </br>
🔹 `commands[i]` is either `-2`, `-1`, or an integer in the range `[1, 9]`. </br>
🔹 `0 <= obstacles.length <= 10^4` </br>
🔹 `-3 * 10^4 <= xi, yi <= 3 * 10^4` </br>
🔹 The answer is guaranteed to be less than `2^31`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Simulation** </br>

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

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
