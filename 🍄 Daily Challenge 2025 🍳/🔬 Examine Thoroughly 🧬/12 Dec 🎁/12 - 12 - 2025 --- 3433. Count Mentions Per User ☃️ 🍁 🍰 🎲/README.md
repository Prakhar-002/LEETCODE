# 3433. Count Mentions Per User

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-mentions-per-user/description/?envType=daily-question&envId=2025-12-12"><strong>➥ ☢️ 3433 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `numberOfUsers` representing the total number of users and an array `events` of size `n x 3`.

### Each `events[i]` can be either of the following two types:

1. **Message Event**: `["MESSAGE", "timestampᵢ", "mentions_stringᵢ"]`  
  - This event indicates that a set of users was mentioned in a message at `timestampᵢ`.  
  - The `mentions_stringᵢ` string can contain one of the following tokens:  
    - `id<number>`: where `<number>` is an integer in range `[0, numberOfUsers - 1]`. There can be **multiple** ids separated by a single whitespace and may contain duplicates. This can mention even the **offline** users.  
    - `ALL`: mentions **all** users.  
    - `HERE`: mentions all **online** users.

2. **Offline Event**: `["OFFLINE", "timestampᵢ", "idᵢ"]`  
  - This event indicates that the user `idᵢ` becomes **offline** at `timestampᵢ` for **60 time units**. The user will automatically be online again at time `timestampᵢ + 60`.

### Return an array `mentions` where `mentions[i]` represents the number of mentions the user with id `i` has across all `"MESSAGE"` events.

### All users are initially **online**, and if a user goes offline or comes back online, their status change is processed **before** handling any message event that occurs at the same timestamp. A user can be mentioned **multiple times** in a single message event, and each mention should be counted **separately**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`numberOfUsers = 2`  
`events = [["MESSAGE","10","id1 id0"],["OFFLINE","11","0"],["MESSAGE","71","HERE"]]`

### 📤 `Output`  ➤ `[2,2]`

### 🔦 `Explanation`  ➤  
Initially, all users are online.  
At timestamp `10`, `id1` and `id0` are mentioned. `mentions = [1,1]`  
At timestamp `11`, `id0` goes offline.  
At timestamp `71`, `id0` comes back online and `"HERE"` is mentioned. `mentions = [2,2]`

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤  
`numberOfUsers = 2`  
`events = [["MESSAGE","10","id1 id0"],["OFFLINE","11","0"],["MESSAGE","12","ALL"]]`

### 📤 `Output`  ➤ `[2,2]`

### 🔦 `Explanation` ➤  
Initially, all users are online.  
At timestamp `10`, `id1` and `id0` are mentioned. `mentions = [1,1]`  
At timestamp `11`, `id0` goes offline.  
At timestamp `12`, `"ALL"` is mentioned. This includes offline users, so both `id0` and `id1` are mentioned. `mentions = [2,2]`

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤  
`numberOfUsers = 2`  
`events = [["OFFLINE","10","0"],["MESSAGE","12","HERE"]]`

### 📤 `Output`  ➤ `[0,1]`

### 🔦 `Explanation` ➤  
Initially, all users are online.  
At timestamp `10`, `id0` goes offline.  
At timestamp `12`, `"HERE"` is mentioned. Because `id0` is still offline, they are not mentioned. `mentions = [0,1]`

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= numberOfUsers <= 100` </br>
🔹 `1 <= events.length <= 100` </br>
🔹 `events[i].length == 3` </br>
🔹 `events[i][0]` is one of `"MESSAGE"` or `"OFFLINE"`. </br>
🔹 `1 <= int(events[i][1]) <= 10^5` </br>
🔹 The number of `id<number>` mentions in any `"MESSAGE"` event is between `1` and `100`. </br>
🔹 `0 <= <number> <= numberOfUsers - 1` </br>
🔹 It is guaranteed that the user id referenced in the `"OFFLINE"` event is **online** at the time the event occurs. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Sorting** </br>
🔸 **Simulation** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
