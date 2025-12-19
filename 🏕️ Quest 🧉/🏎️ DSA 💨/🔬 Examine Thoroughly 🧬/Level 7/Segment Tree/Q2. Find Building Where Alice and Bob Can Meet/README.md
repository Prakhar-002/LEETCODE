# Q2. Find Building Where Alice and Bob Can Meet

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-building-where-alice-and-bob-can-meet/description/?envType=problem-list-v2&envId=dsa-tree-shaped-deep-forest-segment-tree"><strong>➥ 🫀 Q2 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed array `heights` of positive integers, where `heights[i]` represents the height of the `i`‑th building. 

### If a person is in building `i`, they can move to any other building `j` if and only if `i < j` and `heights[i] < heights[j]`. 

### You are also given another array `queries` where `queries[i] = [aᵢ, bᵢ]`. On the `i`‑th query, Alice is in building `aᵢ` while Bob is in building `bᵢ`. 

### Return an array `ans` where `ans[i]` is the index of the **leftmost** building where Alice and Bob can meet on the `i`‑th query. If Alice and Bob cannot move to a common building on query `i`, set `ans[i]` to `-1`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`heights = [6,4,8,5,2,7]`  
`queries = [[0,1],[0,3],[2,4],[3,4],[2,2]]`

### 📤 `Output`  ➤ `[2,5,-1,5,2]`

### 🔦 `Explanation`  ➤  
- Query 1: Alice and Bob can move to building `2` since `heights[0] < heights[2]` and `heights[1] < heights[2]`.  
- Query 2: Alice and Bob can move to building `5` since `heights[0] < heights[5]` and `heights[3] < heights[5]`.  
- Query 3: Alice cannot meet Bob since Alice cannot move to any other building.  
- Query 4: Alice and Bob can move to building `5` since `heights[3] < heights[5]` and `heights[4] < heights[5]`.  
- Query 5: Alice and Bob are already in the same building.  

For `ans[i] != -1`, it can be shown that `ans[i]` is the **leftmost** building where they can meet.  
For `ans[i] == -1`, it can be shown there is **no** such building.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤  
`heights = [5,3,8,2,6,1,4,6]`  
`queries = [[0,7],[3,5],[5,2],[3,0],[1,6]]`

### 📤 `Output`  ➤ `[7,6,-1,4,6]`

### 🔦 `Explanation` ➤  
- Query 1: Alice can directly move to Bob's building since `heights[0] < heights[7]`.  
- Query 2: Alice and Bob can move to building `6` since `heights[3] < heights[6]` and `heights[5] < heights[6]`.  
- Query 3: Alice cannot meet Bob since Bob cannot move to any other building.  
- Query 4: Alice and Bob can move to building `4` since `heights[3] < heights[4]` and `heights[0] < heights[4]`.  
- Query 5: Alice can directly move to Bob's building since `heights[1] < heights[6]`.  

For `ans[i] != -1`, `ans[i]` is the **leftmost** building where they can meet.  
For `ans[i] == -1`, there is no building where they can meet.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= heights.length <= 5 * 10^4` </br>
🔹 `1 <= heights[i] <= 10^9` </br>
🔹 `1 <= queries.length <= 5 * 10^4` </br>
🔹 `queries[i] = [aᵢ, bᵢ]` </br>
🔹 `0 <= aᵢ, bᵢ <= heights.length - 1` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Binary Search** </br>
🔸 **Stack** </br>
🔸 **Binary Indexed Tree** </br>
🔸 **Segment Tree** </br>
🔸 **Heap (Priority Queue)** </br>
🔸 **Monotonic Stack** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Segment%20Tree/Q2.%20Find%20Building%20Where%20Alice%20and%20Bob%20Can%20Meet/%F0%9F%8D%81JAVA%20-%20Find%20Building%20Where%20Alice%20and%20Bob%20Can%20Meet.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Segment%20Tree/Q2.%20Find%20Building%20Where%20Alice%20and%20Bob%20Can%20Meet/%F0%9F%8E%B2CPP%20-%20Find%20Building%20Where%20Alice%20and%20Bob%20Can%20Meet.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Segment%20Tree/Q2.%20Find%20Building%20Where%20Alice%20and%20Bob%20Can%20Meet/%F0%9F%8D%B0PYTHON%20-%20Find%20Building%20Where%20Alice%20and%20Bob%20Can%20Meet.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%207/Segment%20Tree/Q2.%20Find%20Building%20Where%20Alice%20and%20Bob%20Can%20Meet/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Find%20Building%20Where%20Alice%20and%20Bob%20Can%20Meet.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/d4d2ac38-59c6-4481-9fbc-f6bdd98adbe9" width = "700px" height="462px" />

</h1>
