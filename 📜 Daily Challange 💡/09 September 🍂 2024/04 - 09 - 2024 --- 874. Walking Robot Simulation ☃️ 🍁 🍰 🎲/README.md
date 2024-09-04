# 874. Walking Robot Simulation

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/walking-robot-simulation/description/?envType=daily-question&envId=2024-09-04"><strong>➥ ☢️ 874 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A robot on an infinite XY-plane starts at point `(0, 0)` facing north. The robot can receive a sequence of these three possible types of `commands` ➺

- `-2` ➺ Turn left `90` degrees.

- -`1` ➺ Turn right `90` degrees.

- `1 <= k <= 9` ➺ Move forward `k` units, one unit at a time.

### Some of the grid squares are `obstacles`. The ~i-th~ obstacle is at grid point `obstacles[i] = (xi, yi)`. If the robot runs into an obstacle, then it will instead stay in its current location and move on to the next command.

### Return *the `maximum Euclidean distance` that the robot ever gets from the origin `squared` (i.e. if the distance is `5`, return `25`)*.

### Note ➺

🏷️ **North means +Y direction.** </br>

🏷️ **East means +X direction.** </br>

🏷️ **South means -Y direction.** </br>

🏷️ **West means -X direction.** </br>

🏷️ **There can be obstacle in [0,0].** </br>

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ commands = [4,-1,3], obstacles = []

  ### 📤 `Output`  ➤ 25

  ### 🔦 `Explanation`  ➤ ➺The robot starts at (0, 0):
    
    1. Move north 4 units to (0, 4).
    
    2. Turn right.
    
    3. Move east 3 units to (3, 4).
    
    The furthest point the robot ever gets from the origin
    is (3, 4), which squared is 32 + 42 = 25 units away.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ commands = [4,-1,4,-2,4], obstacles = [[2,4]]

  ### 📤 `Output`  ➤  65

  ### 🔦 `Explanation` ➤ The robot starts at (0, 0):

    1. Move north 4 units to (0, 4).
    
    2. Turn right.
    
    3. Move east 1 unit and get blocked by the obstacle at (2, 4), 
        robot is at (1, 4).
    
    4. Turn left.
    
    5. Move north 4 units to (1, 8).
    
    The furthest point the robot ever gets from the origin
    is (1, 8), which squared is 12 + 82 = 65 units away.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ commands = [6,-1,-1,6], obstacles = []

  ### 📤 `Output`  ➤ 36

  ### 🔦 `Explanation`  ➤  The robot starts at (0, 0):

    1. Move north 6 units to (0, 6).

    2. Turn right.

    3. Turn right.

    4. Move south 6 units to (0, 0).

    The furthest point the robot ever gets from the origin
    is (0, 6), which squared is 62 = 36 units away.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= commands.length <= 10<sup>4</sup>** </br>

🔹 **`commands[i]` is either `-2`, `-1`, or an integer in the range `[1, 9]`.** </br>

🔹 **0 <= obstacles.length <= 10<sup>4</sup>** </br>

🔹 **-3 * 10<sup>4</sup> <= xi, yi <= 3 * 10<sup>4</sup>** </br>

🔹 **The answer is guaranteed to be less than 2<sup>31</sup>.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/04%20-%2009%20-%202024%20---%20874.%20Walking%20Robot%20Simulation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-874-WalkingRobotSimulation.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/04%20-%2009%20-%202024%20---%20874.%20Walking%20Robot%20Simulation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-874-WalkingRobotSimulation.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/04%20-%2009%20-%202024%20---%20874.%20Walking%20Robot%20Simulation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-874-WalkingRobotSimulation.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/04%20-%2009%20-%202024%20---%20874.%20Walking%20Robot%20Simulation%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-874-WalkingRobotSimulation.js) |

