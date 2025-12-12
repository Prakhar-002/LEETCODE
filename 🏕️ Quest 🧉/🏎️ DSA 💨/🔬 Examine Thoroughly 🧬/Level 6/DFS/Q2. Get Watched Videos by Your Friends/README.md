# Q2. Get Watched Videos by Your Friends

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/get-watched-videos-by-your-friends/description/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-dfs"><strong>➥ ☢️ Q2 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` people, each person has a unique `id` between `0` and `n - 1`. You are given the arrays `watchedVideos` and `friends`, where `watchedVideos[i]` and `friends[i]` contain the list of watched videos and the list of friends respectively for the person with `id = i`.

### Level `1` of videos are all watched videos by your **friends**, level `2` of videos are all watched videos by the **friends of your friends**, and so on. In general, the level `k` of videos are all watched videos by people with the **shortest path exactly equal to `k`** from you. Given your `id` and the `level` of videos, return the list of videos ordered by their **frequencies (increasing)**. For videos with the same frequency, order them **alphabetically** from least to greatest.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`watchedVideos = [["A","B"],["C"],["B","C"],["D"]]`  
`friends = [[1,2],[0,3],[0,3],[1,2]]`  
`id = 0, level = 1`

### 📤 `Output`  ➤ `["B","C"]`

### 🔦 `Explanation`  ➤  
You have `id = 0` and your friends are persons `1` and `2`.  
- Person `1` watched: `["C"]`  
- Person `2` watched: `["B","C"]`  
The frequencies are: `B -> 1`, `C -> 2`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤  
`watchedVideos = [["A","B"],["C"],["B","C"],["D"]]`  
`friends = [[1,2],[0,3],[0,3],[1,2]]`  
`id = 0, level = 2`

### 📤 `Output`  ➤ `["D"]`

### 🔦 `Explanation` ➤  
You have `id = 0` and the only friend of your friends at level `2` is person `3`, who watched `["D"]`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `n == watchedVideos.length == friends.length` </br>
🔹 `2 <= n <= 100` </br>
🔹 `1 <= watchedVideos[i].length <= 100` </br>
🔹 `1 <= watchedVideos[i][j].length <= 8` </br>
🔹 `0 <= friends[i].length < n` </br>
🔹 `0 <= friends[i][j] < n` </br>
🔹 `0 <= id < n` </br>
🔹 `1 <= level < n` </br>
🔹 If `friends[i]` contains `j`, then `friends[j]` contains `i`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Breadth-First Search** </br>
🔸 **Graph** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/DFS/Q2.%20Get%20Watched%20Videos%20by%20Your%20Friends/%F0%9F%8D%81JAVA%20-%20Get%20Watched%20Videos%20by%20Your%20Friends.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/DFS/Q2.%20Get%20Watched%20Videos%20by%20Your%20Friends/%F0%9F%8E%B2CPP%20-%20Get%20Watched%20Videos%20by%20Your%20Friends.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/DFS/Q2.%20Get%20Watched%20Videos%20by%20Your%20Friends/%F0%9F%8D%B0PYTHON%20-%20Get%20Watched%20Videos%20by%20Your%20Friends.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/DFS/Q2.%20Get%20Watched%20Videos%20by%20Your%20Friends/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Get%20Watched%20Videos%20by%20Your%20Friends.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/b07f7560-7201-4fa0-9954-878d72b97b1c" width = "700px" height="462px" />

</h1>
