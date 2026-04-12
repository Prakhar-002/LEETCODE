# 2069. Walking Robot Simulation II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/walking-robot-simulation-ii/?envType=daily-question&envId=2026-04-03"><strong>➥ ☢️ 2069 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### A `width x height` grid is on an XY-plane with the **bottom-left** cell at `(0, 0)` and the **top-right** cell at `(width - 1, height - 1)`. The grid is aligned with the four cardinal directions (`"North"`, `"East"`, `"South"`, and `"West"`). A robot is initially at cell `(0, 0)` facing direction `"East"`.
### The robot can be instructed to move for a specific number of steps. For each step, it does the following:
### &nbsp;&nbsp;&nbsp;&nbsp;1. Attempts to move **forward** one cell in the direction it is facing.
### &nbsp;&nbsp;&nbsp;&nbsp;2. If the cell the robot is moving to is **out of bounds**, the robot instead **turns 90 degrees counterclockwise** and retries the step.
### After the robot finishes moving the number of steps required, it **stops** and awaits the next instruction.
### Implement the `Robot` class:
### &nbsp;&nbsp;&nbsp;&nbsp;• `Robot(int width, int height)` Initializes the `width x height` grid with the robot at `(0, 0)` facing `"East"`.
### &nbsp;&nbsp;&nbsp;&nbsp;• `void step(int num)` Instructs the robot to move forward `num` steps.
### &nbsp;&nbsp;&nbsp;&nbsp;• `int[] getPos()` Returns the current cell the robot is at, as an array of length 2, `[x, y]`.
### &nbsp;&nbsp;&nbsp;&nbsp;• `String getDir()` Returns the current direction of the robot, `"North"`, `"East"`, `"South"`, or `"West"`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ ["Robot","step","step","getPos","getDir","step","step","step","getPos","getDir"] with [[6,3],[2],[2],[],[],[2],[1],[4],[],[]]
  ### 📤 `Output`  ➤ [null,null,null,[4,0],"East",null,null,null,[1,2],"West"]
  ### 🔦 `Explanation`  ➤ Robot starts at `(0,0)` facing East. After steps of `2,2` → `(4,0)` East. After steps of `2,1,4` → wraps around the perimeter, ending at `(1,2)` facing West.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ ["Robot","step","getPos","getDir"] with [[2,2],[3],[],[]]
  ### 📤 `Output`  ➤ [null,null,[0,1],"North"]
  ### 🔦 `Explanation` ➤ Robot starts at `(0,0)` facing East on a `2x2` grid. Moving `3` steps: East to `(1,0)`, then out of bounds so turns North → `(1,1)`, out of bounds turns West → `(0,1)`. Final position `(0,1)` facing North.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ ["Robot","step","getPos","getDir"] with [[3,2],[10],[],[]]
  ### 📤 `Output`  ➤ [null,null,[1,0],"East"]
  ### 🔦 `Explanation` ➤ The robot traverses the perimeter of the `3x2` grid. The perimeter length is `2*(3+2)-4 = 6`. After `10` steps, `10 % 6 = 4` effective steps from origin, landing at `(1,0)` facing East.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `2 <= width, height <= 100` </br>
🔹 `1 <= num <= 10^5` </br>
🔹 At most `10^4` calls in total will be made to `step`, `getPos`, and `getDir`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Design** </br>
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
