# 2092. Find All People With Secret

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-all-people-with-secret/?envType=daily-question&envId=2025-12-19"><strong>➥ 🫀 2092 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `n` indicating there are `n` people numbered from `0` to `n - 1`. You are also given a 0-indexed 2D integer array `meetings` where `meetings[i] = [xᵢ, yᵢ, timeᵢ]` indicates that person `xᵢ` and person `yᵢ` have a meeting at `timeᵢ`. A person may attend **multiple meetings at the same time**. Finally, you are given an integer `firstPerson`.

### Person `0` has a **secret** and initially shares the secret with person `firstPerson` at time `0`. The secret is then shared every time a meeting takes place with a person that has the secret. More formally, for every meeting, if person `xᵢ` has the secret at `timeᵢ`, then they will share the secret with person `yᵢ`, and **vice versa**. 

### The secrets are shared **instantaneously**, so a person may receive the secret and share it with others in other meetings **within the same time frame**. 

### Return a list of all the people that have the secret after all the meetings have taken place. You may return the answer in **any order**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`n = 6`  
`meetings = [[1,2,5],[2,3,8],[1,5,10]]`  
`firstPerson = 1`

### 📤 `Output`  ➤ `[0,1,2,3,5]`

### 🔦 `Explanation`  ➤  
At time `0`, person `0` shares the secret with person `1`.  
At time `5`, person `1` shares the secret with person `2`.  
At time `8`, person `2` shares the secret with person `3`.  
At time `10`, person `1` shares the secret with person `5`.  
Thus, people `0, 1, 2, 3, 5` know the secret.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤  
`n = 4`  
`meetings = [[3,1,3],[1,2,2],[0,3,3]]`  
`firstPerson = 3`

### 📤 `Output`  ➤ `[0,1,3]`

### 🔦 `Explanation` ➤  
At time `0`, person `0` shares the secret with person `3`.  
At time `2`, neither person `1` nor `2` know the secret.  
At time `3`, person `3` shares the secret with persons `0` and `1`.  
Thus, people `0, 1, 3` know the secret.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤  
`n = 5`  
`meetings = [[3,4,2],[1,2,1],[2,3,1]]`  
`firstPerson = 1`

### 📤 `Output`  ➤ `[0,1,2,3,4]`

### 🔦 `Explanation` ➤  
At time `0`, person `0` shares the secret with person `1`.  
At time `1`, person `1` shares the secret with person `2`, and person `2` shares the secret with person `3` (in the same time frame).  
At time `2`, person `3` shares the secret with person `4`.  
Thus, all people `0, 1, 2, 3, 4` know the secret.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= n <= 10^5` </br>
🔹 `1 <= meetings.length <= 10^5` </br>
🔹 `meetings[i].length == 3` </br>
🔹 `0 <= xᵢ, yᵢ <= n - 1` </br>
🔹 `xᵢ != yᵢ` </br>
🔹 `1 <= timeᵢ <= 10^5` </br>
🔹 `1 <= firstPerson <= n - 1` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Depth-First Search** </br>
🔸 **Breadth-First Search** </br>
🔸 **Union Find** </br>
🔸 **Graph** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/19%20-%2012%20-%202025%20---%202092.%20Find%20All%20People%20With%20Secret%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202092.%20Find%20All%20People%20With%20Secret.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/19%20-%2012%20-%202025%20---%202092.%20Find%20All%20People%20With%20Secret%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202092.%20Find%20All%20People%20With%20Secret.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/19%20-%2012%20-%202025%20---%202092.%20Find%20All%20People%20With%20Secret%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202092.%20Find%20All%20People%20With%20Secret.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/19%20-%2012%20-%202025%20---%202092.%20Find%20All%20People%20With%20Secret%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202092.%20Find%20All%20People%20With%20Secret.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/8e655d9d-5520-424d-9ed1-f9fbb4fd1afb" width = "700px" height="462px" />

</h1>
