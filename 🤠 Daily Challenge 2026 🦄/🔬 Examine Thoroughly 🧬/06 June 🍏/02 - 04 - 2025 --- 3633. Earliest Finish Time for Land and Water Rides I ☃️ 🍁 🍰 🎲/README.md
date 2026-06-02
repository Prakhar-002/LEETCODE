# 3633. Earliest Finish Time for Land and Water Rides I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i/description/?envType=daily-question&envId=2026-06-02"><strong>➥ ♻️ 3633 Leetcode Easy ♻️ </strong></a>
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
🔹 `1 <= n, m <= 100` </br>
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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
