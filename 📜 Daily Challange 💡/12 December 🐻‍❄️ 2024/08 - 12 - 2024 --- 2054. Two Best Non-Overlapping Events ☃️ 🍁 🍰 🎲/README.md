# 2054. Two Best Non-Overlapping Events

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/two-best-non-overlapping-events/description/?envType=daily-question&envId=2024-12-08"><strong>➥ ☢️ 2054 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed 2D integer array of `events` where events[i] = [startTime<sub>i</sub>, endTime<sub>i</sub>, value<sub>i</sub>]. The i<sup>th</sup> event starts at startTime<sub>i</sub> and ends at endTime<sub>i</sub>, and if you attend this event, you will receive a value of value<sub>i</sub>. You can choose at most two non-overlapping events to attend such that the sum of their values is maximized.

### Return *this `maximum` sum*.

### Note that the start time and end time is `inclusive`: that is, you cannot attend two events where one of them starts and the other ends at the same time. More specifically, if you attend an event with end time `t`, the next event must start at or after `t + 1`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ events = [[1,3,2],[4,5,2],[2,4,3]]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ Choose the green events, 0 and 1 for a sum of 2 + 2 = 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ events = [[1,3,2],[4,5,2],[1,5,5]]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ Choose event 2 for a sum of 5.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ events = [[1,5,3],[1,5,1],[6,6,5]]

  ### 📤 `Output`  ➤ 8

  ### 🔦 `Explanation`  ➤ Choose events 0 and 2 for a sum of 3 + 5 = 8.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= events.length <= 10<sup>5</sup>** </br>

🔹 **`events[i].length == 3`** </br>

🔹 ***1 <= startTime<sub>i</sub> <= endTime<sub>i</sub> <= 10<sup>9</sup>* </br>

🔹 **1 <= value<sub>i</sub> <= 10<sup>6</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Sorting**  </br>
🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
