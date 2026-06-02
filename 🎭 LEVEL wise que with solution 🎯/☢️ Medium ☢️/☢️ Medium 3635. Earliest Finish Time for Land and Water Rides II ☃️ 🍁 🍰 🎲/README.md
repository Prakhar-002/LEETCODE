# 3635. Earliest Finish Time for Land and Water Rides II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-ii/description/"><strong>➥ ☢️ 3635 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given two categories of theme park attractions: **land rides** and **water rides**.
### &nbsp;&nbsp;&nbsp;&nbsp;• **Land rides**: `landStartTime[i]` – the earliest time the `ith` land ride can be boarded. `landDuration[i]` – how long the `ith` land ride lasts.
### &nbsp;&nbsp;&nbsp;&nbsp;• **Water rides**: `waterStartTime[j]` – the earliest time the `jth` water ride can be boarded. `waterDuration[j]` – how long the `jth` water ride lasts.
### A tourist must experience **exactly one ride from each category**, in **either order**.
### &nbsp;&nbsp;&nbsp;&nbsp;• A ride may be started at its **opening time** or any **later moment**.
### &nbsp;&nbsp;&nbsp;&nbsp;• If a ride is started at time `t`, it finishes at time `t + duration`.
### &nbsp;&nbsp;&nbsp;&nbsp;• **Immediately** after finishing one ride the tourist may board the other (if it is already open) or **wait** until it opens.
### Return the **earliest possible time** at which the tourist can **finish both rides**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ landStartTime = [2,8], landDuration = [4,1], waterStartTime = [6], waterDuration = [3]
  ### 📤 `Output`  ➤ 9
  ### 🔦 `Explanation`  ➤ Best plan: start land ride `0` at time `2`, finish at `6`. Start water ride `0` at time `6` (opens exactly then), finish at `9`. All other plans finish later.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ landStartTime = [5], landDuration = [3], waterStartTime = [1], waterDuration = [10]
  ### 📤 `Output`  ➤ 14
  ### 🔦 `Explanation` ➤ Best plan: start water ride `0` at time `1`, finish at `11`. Start land ride `0` at time `11` (opens at `5`), finish at `14`. The reverse order finishes at `18`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ landStartTime = [1,10], landDuration = [2,1], waterStartTime = [3,5], waterDuration = [2,1]
  ### 📤 `Output`  ➤ 6
  ### 🔦 `Explanation` ➤ Best plan: start land ride `0` at `1`, finish at `3`. Start water ride `0` at `3`, finish at `5`. Or start water ride `1` at `5`, finish at `6`. Optimal finish time is `6`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `1 <= n, m <= 10^4` </br>
🔹 `landStartTime.length == landDuration.length == n` </br>
🔹 `waterStartTime.length == waterDuration.length == m` </br>
🔹 `1 <= landStartTime[i], landDuration[i], waterStartTime[j], waterDuration[j] <= 1000` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Two Pointers** </br>
🔸 **Binary Search** </br>
🔸 **Greedy** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/02%20-%2004%20-%202025%20---%203633.%20Earliest%20Finish%20Time%20for%20Land%20and%20Water%20Rides%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203633.%20Earliest%20Finish%20Time%20for%20Land%20and%20Water%20Ride.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/02%20-%2004%20-%202025%20---%203633.%20Earliest%20Finish%20Time%20for%20Land%20and%20Water%20Rides%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203633.%20Earliest%20Finish%20Time%20for%20Land%20and%20Water%20Rides%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/02%20-%2004%20-%202025%20---%203633.%20Earliest%20Finish%20Time%20for%20Land%20and%20Water%20Rides%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203633.%20Earliest%20Finish%20Time%20for%20Land%20and%20Water%20Ride.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%A4%A0%20Daily%20Challenge%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8D%8F/02%20-%2004%20-%202025%20---%203633.%20Earliest%20Finish%20Time%20for%20Land%20and%20Water%20Rides%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203633.%20Earliest%20Finish%20Time%20for%20Land%20and%20Water%20.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/984cbc89-6172-400d-90ce-5c52647a69a5" width = "700px" height="462px" /> 

</h1>

v