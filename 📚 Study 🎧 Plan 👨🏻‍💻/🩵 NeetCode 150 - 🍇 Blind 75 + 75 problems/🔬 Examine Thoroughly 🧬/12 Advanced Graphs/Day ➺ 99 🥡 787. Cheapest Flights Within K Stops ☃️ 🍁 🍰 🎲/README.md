# 787. Cheapest Flights Within K Stops

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/cheapest-flights-within-k-stops/description/"><strong>➥ ☢️ 787 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a network of `n` cities (nodes), numbered from 0 to `n - 1`. The connections between cities are defined by an array `flights`, where `flights[i] = [fromi, toi, pricei]` indicates a directed flight from city `fromi` to city `toi` at a cost of `pricei`.

### Your task is to find the cheapest price to travel from a source city `src` to a destination city `dst` with *at most* `k` stops.

### If no such route exists (meeting the `k` stop limitation), return -1.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  <img width="332" height="392" alt="787 que 1" src="https://github.com/user-attachments/assets/0d0a53ec-caa1-4372-9558-aaba14d8bea7" />

  ### 📥 `Input`  ➤ n = 4, flights = [[0,1,100],[1,2,100],[2,0,100],[1,3,600],[2,3,200]], src = 0, dst = 3, k = 1

  ### 📤 `Output`  ➤ 700

  ### 🔦 `Explanation`  ➤
The optimal path with at most 1 stop from city 0 to 3 is marked in red and has cost 100 + 600 = 700.
Note that the path through cities [0,1,2,3] is cheaper but is invalid because it uses 2 stops.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="332" height="242" alt="787 que 2" src="https://github.com/user-attachments/assets/a573678d-5802-41c5-8070-2bfa8b099998" />

  ### 📥 `Input` ➤ n = 3, flights = [[0,1,100],[1,2,100],[0,2,500]], src = 0, dst = 2, k = 1

  ### 📤 `Output`  ➤ 200

  ### 🔦 `Explanation` ➤
The optimal path with at most 1 stop from city 0 to 2 is marked in red and has cost 100 + 100 = 200.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img width="332" height="242" alt="787 que 3" src="https://github.com/user-attachments/assets/49bcfef4-2445-4690-9980-1b2174ee9e24" />

  ### 📥 `Input` ➤ n = 3, flights = [[0,1,100],[1,2,100],[0,2,500]], src = 0, dst = 2, k = 0

  ### 📤 `Output`  ➤ 500

  ### 🔦 `Explanation` ➤
The optimal path with no stops from city 0 to 2 is marked in red and has cost 500.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= n <= 100 </br>
🔹 0 <= flights.length <= (n * (n - 1) / 2) </br>
🔹 flights[i].length == 3 </br>
🔹 0 <= fromi, toi < n </br>
🔹 fromi != toi </br>
🔹 1 <= pricei <= 10<sup>4</sup> </br>
🔹 There will not be any multiple flights between two cities. </br>
🔹 0 <= src, dst, k < n </br>
🔹 src != dst </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Dynamic Programming**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Graph**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Shortest Path**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2099%20%F0%9F%A5%A1%20787.%20Cheapest%20Flights%20Within%20K%20Stops%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20787.%20Cheapest%20Flights%20Wi.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2099%20%F0%9F%A5%A1%20787.%20Cheapest%20Flights%20Within%20K%20Stops%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20787.%20Cheapest%20Flights%20With.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2099%20%F0%9F%A5%A1%20787.%20Cheapest%20Flights%20Within%20K%20Stops%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20787.%20Cheapest%20Flights%20Wi.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2099%20%F0%9F%A5%A1%20787.%20Cheapest%20Flights%20Within%20K%20Stops%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20787.%20Cheapest%20Flight.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/3d99d53f-0d51-4fbb-898b-6eec23cf0a58" width = "700px" height="462px" />

</h1>
