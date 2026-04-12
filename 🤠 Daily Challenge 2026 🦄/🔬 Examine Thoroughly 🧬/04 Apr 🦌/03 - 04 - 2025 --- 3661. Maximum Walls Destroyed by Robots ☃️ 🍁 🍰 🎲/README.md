# 3661. Maximum Walls Destroyed by Robots

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-walls-destroyed-by-robots/description/?envType=daily-question&envId=2026-04-03"><strong>➥ 🫀 3661 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### There is an endless straight line populated with some robots and walls. You are given integer arrays `robots`, `distance`, and `walls`:
### &nbsp;&nbsp;&nbsp;&nbsp;• `robots[i]` is the position of the `ith` robot.
### &nbsp;&nbsp;&nbsp;&nbsp;• `distance[i]` is the maximum distance the `ith` robot's bullet can travel.
### &nbsp;&nbsp;&nbsp;&nbsp;• `walls[j]` is the position of the `jth` wall.
### Every robot has **one bullet** that can either fire to the **left** or the **right** at most `distance[i]` meters.
### A bullet **destroys every wall** in its path that lies within its range. Robots are **fixed obstacles**: if a bullet hits another robot before reaching a wall, it **immediately stops** at that robot and cannot continue.
### Return the **maximum number of unique walls** that can be destroyed by the robots.
### **Notes:**
### &nbsp;&nbsp;&nbsp;&nbsp;• A wall and a robot may share the same position; the wall **can** be destroyed by the robot at that position.
### &nbsp;&nbsp;&nbsp;&nbsp;• Robots are **not destroyed** by bullets.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ robots = [4], distance = [3], walls = [1,10]
  ### 📤 `Output`  ➤ 1
  ### 🔦 `Explanation`  ➤ `robots[0] = 4` fires **left** with `distance[0] = 3`, covering `[1, 4]` and destroys `walls[0] = 1`. Thus, the answer is `1`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ robots = [10,2], distance = [5,1], walls = [5,2,7]
  ### 📤 `Output`  ➤ 3
  ### 🔦 `Explanation` ➤ `robots[0] = 10` fires **left**, covering `[5, 10]`, destroying walls at `5` and `7`. `robots[1] = 2` fires **left**, covering `[1, 2]`, destroying wall at `2`. Thus, the answer is `3`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ robots = [1,2], distance = [100,1], walls = [10]
  ### 📤 `Output`  ➤ 0
  ### 🔦 `Explanation` ➤ Only `robots[0]` can reach the wall, but its shot to the **right** is **blocked** by `robots[1]`. Thus, the answer is `0`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= robots.length == distance.length <= 10^5` </br>
🔹 `1 <= walls.length <= 10^5` </br>
🔹 `1 <= robots[i], walls[j] <= 10^9` </br>
🔹 `1 <= distance[i] <= 10^5` </br>
🔹 All values in `robots` are **unique**. </br>
🔹 All values in `walls` are **unique**. </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Binary Search** </br>
🔸 **Dynamic Programming** </br>
🔸 **Sorting** </br>

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
