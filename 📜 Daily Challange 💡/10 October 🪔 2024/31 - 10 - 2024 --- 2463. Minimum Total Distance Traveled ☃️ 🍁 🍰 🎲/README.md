# 2463. Minimum Total Distance Traveled

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-total-distance-traveled/?envType=daily-question&envId=2024-10-21"><strong>➥ 🫀 2463 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are some robots and factories on the X-axis. You are given an integer array `robot` where `robot[i]` is the position of the i<sup>th</sup> robot. You are also given a 2D integer array `factory` where `factory[j] = [position-j, limit-j]` indicates that position<sub>j</sub> is the position of the j<sup>th</sup> factory and that the j<sup>th</sup> factory can repair at most limit<sub>j</sub> robots.

### The positions of each robot are `unique`. The positions of each factory are also unique. Note that a robot can be `in the same position` as a factory initially.

### All the robots are initially broken; they keep moving in one direction. The direction could be the negative or the positive direction of the X-axis. When a robot reaches a factory that did not reach its limit, the factory repairs the robot, and it stops moving.

### At any moment, you can set the initial direction of moving for some robot. Your target is to minimize the total distance traveled by all the robots.

### Return the minimum total distance traveled by all the robots. The test cases are generated such that all the robots can be repaired.

### Note that:

- All robots move at the same speed.

- If two robots move in the same direction, they will never collide.

- If two robots move in opposite directions and they meet at some point, they do not collide. They cross each other.

- If a robot passes by a factory that reached its limits, it crosses it as if it does not exist.

- If the robot moved from a position `x` to a position `y`, the distance it moved is `|y - x|`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ robot = [0,4,6], factory = [[2,2],[6,2]]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ As shown in the figure:

    ➺ The first robot at position 0 moves in the positive direction. It will be repaired at the first factory.
    ➺ The second robot at position 4 moves in the negative direction. It will be repaired at the first factory.
    ➺ The third robot at position 6 will be repaired at the second factory. It does not need to move.
    The limit of the first factory is 2, and it fixed 2 robots.
    The limit of the second factory is 2, and it fixed 1 robot.
    The total distance is |2 - 0| + |2 - 4| + |6 - 6| = 4. 
    It can be shown that we cannot achieve a better total distance than 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ robot = [1,-1], factory = [[-2,1],[2,1]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ As shown in the figure:

    ➺ The first robot at position 1 moves in the positive direction. It will be repaired at the second factory.
    ➺ The second robot at position -1 moves in the negative direction. It will be repaired at the first factory.
    The limit of the first factory is 1, and it fixed 1 robot.
    The limit of the second factory is 1, and it fixed 1 robot.
    The total distance is |2 - 1| + |(-2) - (-1)| = 2. 
    It can be shown that we cannot achieve a better total distance than 2.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= robot.length, factory.length <= 100`** </br>

🔹 **`factory[j].length == 2`** </br>

🔹 **-10<sup>9</sup> <= robot[i], position<sub>j</sub> <= 10<sup>9</sup>** </br>

🔹 **0 <= limit<sub>j</sub> <= robot.length** </br>

🔹 **The input will be generated such that it is always possible to repair every robot.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/31%20-%2010%20-%202024%20---%202463.%20Minimum%20Total%20Distance%20Traveled%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202463.%20Minimum%20Total%20Distance%20Traveled.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/31%20-%2010%20-%202024%20---%202463.%20Minimum%20Total%20Distance%20Traveled%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202463.%20Minimum%20Total%20Distance%20Traveled.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/31%20-%2010%20-%202024%20---%202463.%20Minimum%20Total%20Distance%20Traveled%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202463.%20Minimum%20Total%20Distance%20Traveled.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/31%20-%2010%20-%202024%20---%202463.%20Minimum%20Total%20Distance%20Traveled%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202463.%20Minimum%20Total%20Distance%20Traveled.js) |
