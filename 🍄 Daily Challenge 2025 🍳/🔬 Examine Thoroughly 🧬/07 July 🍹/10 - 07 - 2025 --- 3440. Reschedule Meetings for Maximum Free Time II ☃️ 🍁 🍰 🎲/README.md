# 3440. Reschedule Meetings for Maximum Free Time II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/reschedule-meetings-for-maximum-free-time-ii/description/?envType=daily-question&envId=2025-07-10"><strong>➥ ☢️ 3440 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `eventTime` that represents the duration of an event (from t = 0 to t = `eventTime`). You are also provided with two integer arrays, `startTime` and `endTime`, each of length `n`, representing the start and end times of `n` non-overlapping meetings scheduled during the event. The ith meeting occupies the time interval `[startTime[i], endTime[i]]`.

### The Task: Your objective is to maximize the longest continuous period of free time during the event by rescheduling *at most one* meeting. When rescheduling a meeting, the following conditions must hold:

1. The meeting's duration must remain unchanged.
2. The meetings must remain non-overlapping (no two meetings can occur simultaneously).
3. The rescheduled meeting's new timeframe must remain within the bounds of the overall event (from time 0 to `eventTime`).
4. **The relative ordering of the meetings *can* change after rescheduling**.

Your function should return the maximum duration of free time achievable after applying this rescheduling, if beneficial.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ eventTime = 5, startTime = [1,3], endTime = [2,5]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤

<img src="https://github.com/user-attachments/assets/5fd5e5af-076b-4cb5-b8d4-c32ab6784963" width="375" height="125"/>

Reschedule the meeting at [1, 2] to [2, 3], leaving no meetings during the time [0, 2].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ eventTime = 10, startTime = [0,7,9], endTime = [1,8,10]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation` ➤

<img src="https://github.com/user-attachments/assets/7d47fa74-8767-4a6a-8662-9c6a6de567cc" width="375" height="125"/>

Reschedule the meeting at [0, 1] to [8, 9], leaving no meetings during the time [0, 7].

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ eventTime = 10, startTime = [0,3,7,9], endTime = [1,4,8,10]

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation` ➤

<img src="https://github.com/user-attachments/assets/83015911-a0c1-4da6-9361-81c3d0903f65" width="375" height="125"/>

Reschedule the meeting at [3, 4] to [8, 9], leaving no meetings during the time [1, 7].

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ eventTime = 5, startTime = [0,1,2,3,4], endTime = [1,2,3,4,5]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤

There is no time during the event not occupied by meetings.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= eventTime <= 10<sup>9</sup> </br>

🔹 n == startTime.length == endTime.length </br>

🔹 2 <= n <= 10<sup>5</sup> </br>

🔹 0 <= startTime[i] < endTime[i] <= eventTime </br>

🔹 endTime[i] <= startTime[i + 1] where i lies in the range [0, n - 2]. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Greedy**  </br>

🔸 **Enumeration**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/10%20-%2007%20-%202025%20---%203440.%20Reschedule%20Meetings%20for%20Maximum%20Free%20Time%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203440.%20Reschedule%20Meetings%20for%20Maximum%20Free%20Time%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/10%20-%2007%20-%202025%20---%203440.%20Reschedule%20Meetings%20for%20Maximum%20Free%20Time%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203440.%20Reschedule%20Meetings%20for%20Maximum%20Free%20Time%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/10%20-%2007%20-%202025%20---%203440.%20Reschedule%20Meetings%20for%20Maximum%20Free%20Time%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203440.%20Reschedule%20Meetings%20for%20Maximum%20Free%20Time%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/10%20-%2007%20-%202025%20---%203440.%20Reschedule%20Meetings%20for%20Maximum%20Free%20Time%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203440.%20Reschedule%20Meetings%20for%20Maximum%20Free%20Time%20I.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" > 

<img alt="image" src="https://github.com/user-attachments/assets/d71c535f-fb3b-4c04-a609-04d68e37aca5" width = "700px" height="462px" />

</h1>
