# 853. Car Fleet

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/car-fleet/description/"><strong>➥ ☢️ 853 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` cars at given miles away from the starting mile `0`, traveling to reach the mile `target`.

### You are given two integer arrays `position` and `speed`, both of length `n`, where `position[i]` is the starting mile of the i<sup>th</sup> car and `speed[i]` is the speed of the i<sup>th</sup> car in miles per hour.

### A car cannot pass another car, but it can catch up and then travel next to it at the speed of the slower car.

### A **car fleet** is a car or cars driving next to each other. The speed of the car fleet is the minimum speed of any car in the fleet.

### If a car catches up to a car fleet at the mile `target`, it will still be considered as part of the car fleet.

### Return the **number of car fleets** that will arrive at the destination.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ target = 12, position = [10,8,0,5,3], speed = [2,4,1,1,3]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ 

    - The cars starting at 10 (speed 2) and 8 (speed 4) become a fleet, meeting each other at 12. The car starting at 0 (speed 1) does not catch up to any other car, so it is a fleet by itself.

    - The cars starting at 5 (speed 1) and 3 (speed 3) become a fleet, meeting each other at 6. The fleet moves at speed 1 until it reaches the target.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ target = 10, position = [3], speed = [3]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤  There is only one car, hence there is only one fleet.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ target = 100, position = [0,2,4], speed = [4,2,1]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ 

    - The cars starting at 0 (speed 4) and 2 (speed 2) become a fleet, meeting each other at 4.

    - The car starting at 4 (speed 1) travels to 5.
    Then, the fleet at 4 (speed 2) and the car at position 5 (speed 1) become one fleet, meeting each other at 6. The fleet moves at speed 1 until it reaches the `target`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == position.length == speed.length`** </br>

🔹 **1 <= n <= 10<sup>5</sup>** </br>

🔹 **0 < target <= 10<sup>6</sup>** </br>

🔹 **`0 <= position[i] < target`** </br>

🔹 **All the values of `position` are unique.** </br>

🔹 **0 < speed[i] <= 10<sup>6</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Stack**  </br>
🔸 **Sorting**  </br>
🔸 **Monotonic Stack**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Stack/Day%20%E2%9E%BA%2026%20%F0%9F%A5%A1%20853.%20Car%20Fleet%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20853.%20Car%20Fleet.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Stack/Day%20%E2%9E%BA%2026%20%F0%9F%A5%A1%20853.%20Car%20Fleet%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20853.%20Car%20Fleet.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Stack/Day%20%E2%9E%BA%2026%20%F0%9F%A5%A1%20853.%20Car%20Fleet%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20853.%20Car%20Fleet.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Stack/Day%20%E2%9E%BA%2026%20%F0%9F%A5%A1%20853.%20Car%20Fleet%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20853.%20Car%20Fleet.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/48868177-3308-499e-8e5c-f8a8b6c5fae0" width = "700px" height="462px" />

</h1>
