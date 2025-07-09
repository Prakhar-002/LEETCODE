# 3439. Reschedule Meetings for Maximum Free Time I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/reschedule-meetings-for-maximum-free-time-i/description/?envType=daily-question&envId=2025-07-09"><strong>➥ ☢️ 3439 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given:

- An integer `eventTime` denoting the total duration of an event, spanning from time t = 0 to t = `eventTime`.
- Two integer arrays, `startTime` and `endTime`, both of length `n`. These arrays represent the start and end times, respectively, of `n` non-overlapping meetings occurring within the event timeframe. The i<sup>th</sup> meeting occurs during the time interval `[startTime[i], endTime[i]]`.

### You have the ability to reschedule *at most* `k` meetings by moving their start times. You must maintain the original duration of each meeting. The goal is to maximize the longest continuous period of free time during the event.

### Constraints:

- The relative order of all meetings must remain the same after rescheduling.
- The meetings must remain non-overlapping after rescheduling.
- The meetings cannot be rescheduled to times outside the event (i.e., within the range [0, eventTime]).

### Your task is to return the maximum amount of free time possible after rescheduling meetings, adhering to these rules.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ eventTime = 5, k = 1, startTime = [1,3], endTime = [2,5]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤
Reschedule the meeting at [1, 2] to [2, 3], leaving no meetings during the time [0, 2].

<img src="https://github.com/user-attachments/assets/9c6b4f6d-ed62-4af1-953f-62f7a707ad57" width="375" height="123"/>

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ eventTime = 10, k = 1, startTime = [0,2,9], endTime = [1,4,10]

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤
Reschedule the meeting at [2, 4] to [1, 3], leaving no meetings during the time [3, 9].

<img src="https://github.com/user-attachments/assets/211cda7c-5f4c-4050-adbe-42a926424a65" width="375" height="124"/>

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ eventTime = 5, k = 2, startTime = [0,1,2,3,4], endTime = [1,2,3,4,5]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤
There is no time during the event not occupied by meetings.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= eventTime <= 10<sup>9</sup> </br>

🔹 n == startTime.length == endTime.length </br>

🔹 2 <= n <= 10<sup>5</sup> </br>

🔹 1 <= k <= n </br>

🔹 0 <= startTime[i] < endTime[i] <= eventTime </br>

🔹 endTime[i] <= startTime[i + 1] where i lies in the range [0, n - 2]. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Greedy**  </br>

🔸 **Sliding Window**  </br>

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

<img src ="" width = "700px" height="462px" />

</h1>
