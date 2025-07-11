# 2402. Meeting Rooms III

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/meeting-rooms-iii/description/?envType=daily-question&envId=2025-07-11"><strong>➥ 🫀 2402 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `n`, representing the number of rooms labeled from 0 to `n - 1`. You are also given a 2D integer array `meetings`, where `meetings[i] = [start<sub>i</sub>, end<sub>i</sub>]` signifies that the i<sup>th</sup> meeting is to be held during the half-closed time interval `[start<sub>i</sub>, end<sub>i</sub>)`. All values of `start<sub>i</sub>` are guaranteed to be unique.

### Meetings are assigned to rooms following a specific allocation scheme:

1. Each meeting is assigned to the available room with the smallest room number.
2. If no rooms are currently unused when a meeting arrives, the meeting is delayed until a room becomes free. The delayed meeting has the same duration as the original meeting.
3. When a room becomes unused, meetings that had an earlier original start time are prioritized to use that room.

### ### Your objective: Determine and return the room number that hosted the largest number of meetings. If there are several such rooms with the same maximum meeting count, return the room with the *smallest* room number among them.

### A *half-closed interval* `[a, b)` refers to the set of times between `a` and `b`, inclusive of `a`, but not inclusive of `b`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 2, meetings = [[0,10],[1,5],[2,7],[3,4]]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤
- At time 0, both rooms are not being used. The first meeting starts in room 0.
- At time 1, only room 1 is not being used. The second meeting starts in room 1.
- At time 2, both rooms are being used. The third meeting is delayed.
- At time 3, both rooms are being used. The fourth meeting is delayed.
- At time 5, the meeting in room 1 finishes. The third meeting starts in room 1 for the time period [5,10).
- At time 10, the meetings in both rooms finish. The fourth meeting starts in room 0 for the time period [10,11).
Both rooms 0 and 1 held 2 meetings, so we return 0.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 3, meetings = [[1,20],[2,10],[3,5],[4,9],[6,8]]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤
- At time 1, all three rooms are not being used. The first meeting starts in room 0.
- At time 2, rooms 1 and 2 are not being used. The second meeting starts in room 1.
- At time 3, only room 2 is not being used. The third meeting starts in room 2.
- At time 4, all three rooms are being used. The fourth meeting is delayed.
- At time 5, the meeting in room 2 finishes. The fourth meeting starts in room 2 for the time period [5,10).
- At time 6, all three rooms are being used. The fifth meeting is delayed.
- At time 10, the meetings in rooms 1 and 2 finish. The fifth meeting starts in room 1 for the time period [10,12).
Room 0 held 1 meeting while rooms 1 and 2 each held 2 meetings, so we return 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= n <= 100 </br>

🔹 1 <= meetings.length <= 10<sup>5</sup> </br>

🔹 meetings[i].length == 2 </br>

🔹 0 <= start<sub>i</sub> < end<sub>i</sub> <= 5 * 10<sup>5</sup> </br>

🔹 All the values of start<sub>i</sub> are unique. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Hash Table**  </br>

🔸 **Sorting**  </br>

🔸 **Heap (Priority Queue)**  </br>

🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/11%20-%2007%20-%202025%20---%202402.%20Meeting%20Rooms%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202402.%20Meeting%20Rooms%20III.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/11%20-%2007%20-%202025%20---%202402.%20Meeting%20Rooms%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202402.%20Meeting%20Rooms%20III.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/11%20-%2007%20-%202025%20---%202402.%20Meeting%20Rooms%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202402.%20Meeting%20Rooms%20III.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/11%20-%2007%20-%202025%20---%202402.%20Meeting%20Rooms%20III%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202402.%20Meeting%20Rooms%20III.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img width = "700px" height="462px" alt="image" src="https://github.com/user-attachments/assets/7cea2f26-381a-46dd-931b-7b151ca7d1e3" />

</h1>
