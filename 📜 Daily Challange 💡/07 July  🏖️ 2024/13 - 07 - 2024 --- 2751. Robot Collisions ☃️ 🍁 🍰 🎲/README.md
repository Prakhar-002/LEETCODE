# 2751. Robot Collisions

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/robot-collisions/description/?envType=daily-question&envId=2024-07-13"><strong>➥ 🫀 2751 Leetcode Que Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` 1-indexed robots, each having a position on a line, health, and movement direction.

### You are given 0-indexed integer arrays `positions`, `healths`, and a string `directions` (`directions[i]` is either `'L'` for `left` or `'R'` for `right`). All integers in `positions` are `unique`.

### All robots start moving on the line `simultaneously` at the `same speed` in their given directions. If two robots ever share the same position while moving, they will `collide`.

### If two robots collide, the robot with `lower health` is `removed` from the line, and the health of the other robot `decreases by one`. The surviving robot continues in the `same` direction it was going. If both robots have the `same` health, they are both removed from the line.

### Your task is to determine the `health` of the robots that survive the collisions, in the same `order` that the robots were given, i.e. final heath of robot 1 (if survived), final health of robot 2 (if survived), and so on. If there are no survivors, return an empty array.

### Return *an array containing the health of the remaining robots (in the order they were given in the input), after no further collisions can occur*.

### Note: The positions may be unsorted.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2751  que 1](https://github.com/user-attachments/assets/5b41a117-3af0-444b-b7f2-510f02fbe993)

  ### 📥 Input  ➤ positions = [5,4,3,2,1], healths = [2,17,9,15,10], directions = "RRRRR"

  ### 📤 Output  ➤ [2,17,9,15,10]

  ### 🔦 Explanation  ➤  No collision occurs in this example, since all robots are moving in the same direction. So, the health of the robots in order from the first robot is returned, [2, 17, 9, 15, 10].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2751  que 2](https://github.com/user-attachments/assets/194ad1ba-5663-400a-9aea-f45b5541cb88)

  ### 📥 Input ➤ positions = [3,5,2,6], healths = [10,10,15,12], directions = "RLRL"

  ### 📤 Output  ➤ [14]

  ### 🔦 Explanation ➤ There are 2 collisions in this example. Firstly, robot 1 and robot 2 will collide, and since both have the same health, they will be removed from the line. Next, robot 3 and robot 4 will collide and since robot 4's health is smaller, it gets removed, and robot 3's health becomes 15 - 1 = 14. Only robot 3 remains, so we return [14].


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

![2751  que 3](https://github.com/user-attachments/assets/9727a573-5660-433b-8dc9-92e93f4f90d6)

  ### 📥 Input ➤ positions = [1,2,5,6], healths = [10,10,11,11], directions = "RLRL"

  ### 📤 Output  ➤ []

  ### 🔦 Explanation  ➤  Robot 1 and robot 2 will collide and since both have the same health, they are both removed. Robot 3 and 4 will collide and since both have the same health, they are both removed. So, we return an empty array, [].

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= positions.length == healths.length == directions.length == n <= 10<sup>5</sup>** </br>
🔹 **1 <= positions[i], healths[i] <= 10<sup>9</sup>** </br>
🔹 **`directions[i] == 'L'` or `directions[i] == 'R'`** </br>
🔹 **All values in `positions` are distinct** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Stack**  </br>
🔸 **Sorting**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/13%20-%2007%20-%202024%20---%202751.%20Robot%20Collisions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-2751-RobotCollisions.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/13%20-%2007%20-%202024%20---%202751.%20Robot%20Collisions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-2751-RobotCollisions.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/13%20-%2007%20-%202024%20---%202751.%20Robot%20Collisions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-2751-RobotCollisions.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/13%20-%2007%20-%202024%20---%202751.%20Robot%20Collisions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-2751-RobotCollisions.js) |

