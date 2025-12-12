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
