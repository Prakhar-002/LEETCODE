# Q3. Process Restricted Friend Requests

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/process-restricted-friend-requests/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-union-find"><strong>➥ 🫀 Q3 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `n` indicating the number of people in a network. Each person is labeled from `0` to `n - 1`.

### You are also given a **0-indexed** 2D integer array `restrictions`, where `restrictions[i] = [xi, yi]` means that person `xi` and person `yi` **cannot become friends**, either **directly** or **indirectly** through other people.

### Initially, no one is friends with each other. You are given a list of friend requests as a **0-indexed** 2D integer array `requests`, where `requests[j] = [uj, vj]` is a friend request between person `uj` and person `vj`.

### A friend request is **successful** if `uj` and `vj` can be friends. Each friend request is processed in the given order (i.e., `requests[j]` occurs before `requests[j + 1]`), and upon a successful request, `uj` and `vj` become **direct friends** for all future friend requests.

### Return a **boolean array** `result`, where each `result[j]` is `true` if the `jth` friend request is successful or `false` if it is not.

### **Note**: If `uj` and `vj` are already direct friends, the request is still **successful**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤ `n = 3, restrictions = [[0,1]], requests = [[0,2],[2,1]]`

### 📤 `Output`  ➤ `[true,false]`

### 🔦 `Explanation`  ➤ Request 0: Person 0 and person 2 can be friends, so they become direct friends. </br> Request 1: Person 2 and person 1 cannot be friends since person 0 and person 1 would be indirect friends (1--2--0).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `n = 3, restrictions = [[0,1]], requests = [[1,2],[0,2]]`

### 📤 `Output`  ➤ `[true,false]`

### 🔦 `Explanation` ➤ Request 0: Person 1 and person 2 can be friends, so they become direct friends. </br> Request 1: Person 0 and person 2 cannot be friends since person 0 and person 1 would be indirect friends (0--2--1).

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `n = 5, restrictions = [[0,1],[1,2],[2,3]], requests = [[0,4],[1,2],[3,1],[3,4]]`

### 📤 `Output`  ➤ `[true,false,true,false]`

### 🔦 `Explanation` ➤ Request 0: Person 0 and person 4 can be friends, so they become direct friends. </br> Request 1: Person 1 and person 2 cannot be friends since they are directly restricted. </br> Request 2: Person 3 and person 1 can be friends, so they become direct friends. Request 3: </br> Person 3 and person 4 cannot be friends since person 0 and person 1 would be indirect friends (0--4--3--1).

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= n <= 1000` </br>
🔹 `0 <= restrictions.length <= 1000` </br>
🔹 `restrictions[i].length == 2` </br>
🔹 `0 <= xi, yi <= n - 1` </br>
🔹 `xi != yi` </br>
🔹 `1 <= requests.length <= 1000` </br>
🔹 `requests[j].length == 2` </br>
🔹 `0 <= uj, vj <= n - 1` </br>
🔹 `uj != vj` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Union Find** </br>
🔸 **Graph** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Union%20Find/Q3.%20Process%20Restricted%20Friend%20Requests/%F0%9F%8D%81JAVA%20-%20Process%20Restricted%20Friend%20Requests.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Union%20Find/Q3.%20Process%20Restricted%20Friend%20Requests/%F0%9F%8E%B2CPP%20-%20Process%20Restricted%20Friend%20Requests.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Union%20Find/Q3.%20Process%20Restricted%20Friend%20Requests/%F0%9F%8D%B0PYTHON%20-%20Process%20Restricted%20Friend%20Requests.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Union%20Find/Q3.%20Process%20Restricted%20Friend%20Requests/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Process%20Restricted%20Friend%20Requests.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/fad78a10-a926-4731-a01f-d84a4591a874" width = "700px" height="462px" />

</h1>
