# 3108. Minimum Cost Walk in Weighted Graph

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-cost-walk-in-weighted-graph/?envType=daily-question&envId=2025-03-22"><strong>➥ 🫀 3108 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given:
- An **undirected weighted graph** with `n` vertices labeled from `0` to `n - 1`.
- An **integer** `n` and an **array** `edges`, where `edges[i] = [ui, vi, wi]` indicates that there is an edge between vertices `ui` and `vi` with a weight of `wi`.
- A **2D array** `query`, where `query[i] = [si, ti]` represents a query.

### **Walk Definition** 🚶‍♂️:
- A **walk** is a sequence of vertices and edges.
- The **walk starts and ends with a vertex**.
- Each edge **connects** the vertex that comes before it and the vertex that comes after it.
- **A walk may revisit the same edge or vertex multiple times**.

### **Cost of a Walk** 💰:
- The **cost** of a walk **starting at** node `u` and **ending at** node `v` is defined as **the bitwise AND** of the weights of the edges traversed during the walk.
- If the sequence of edge weights encountered is `[w0, w1, w2, ..., wk]`, then the cost is:
  
  **`w0 & w1 & w2 & ... & wk`**  
  *(where `&` is the bitwise AND operator)*.

### **Goal** 🎯:
For each query `[si, ti]`, **find the minimum cost** of the walk starting at vertex `si` and ending at vertex `ti`.

- If **no such walk exists**, return `-1`.
- Return an **array `answer`**, where `answer[i]` is the minimum cost for `query[i]`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤
```plaintext
n = 5, 
edges = [[0,1,7],[1,3,7],[1,2,1]], 
query = [[0,3],[3,4]]
```

### 📤 `Output` ➤
```plaintext
[1, -1]
```

### 🔦 `Explanation` ➤

<img src="https://github.com/user-attachments/assets/60166d6e-0e62-42d0-b6dd-09bb200bfbef" width='351px' hieght='152px' />

1️⃣ **Query `[0,3]`**:
   - Path: `0 -> 1 (7), 1 -> 2 (1), 2 -> 1 (1), 1 -> 3 (7)`
   - Cost: `7 & 1 & 1 & 7 = 1`
   
2️⃣ **Query `[3,4]`**:
   - No path exists between nodes `3` and `4`.
   - Return `-1`.

✅ **Output `[1, -1]`**

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤
```plaintext
n = 3, 
edges = [[0,2,7],[0,1,15],[1,2,6],[1,2,1]], 
query = [[1,2]]
```

### 📤 `Output` ➤
```plaintext
[0]
```

### 🔦 `Explanation` ➤

<img src="https://github.com/user-attachments/assets/84a4f61b-5b55-42fb-b41e-ab6a19415492" width='211px' hieght='183px' />

1️⃣ **Query `[1,2]`**:
   - Path: `1 -> 2 (1), 2 -> 1 (6), 1 -> 2 (1)`
   - Cost: `1 & 6 & 1 = 0`
   
✅ **Output `[0]`**

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= `n` <= 10<sup>5</sup> </br>
🔹 0 <= `edges.length` <= 10<sup>5</sup> </br>
🔹 `edges[i].length == 3` </br>
🔹 0 <= u<sub>i</sub>, v<sub>i</sub> <= `n - 1` </br>
🔹 u<sub>i</sub> != v<sub>i</sub> </br>
🔹 0 <= w<sub>i</sub> <= 10<sup>5</sup> </br>
🔹 1 <= `query.length` <= 10<sup>5</sup> </br>
🔹 `query[i].length == 2` </br>
🔹 0 <= s<sub>i</sub>, t<sub>i</sub> <= `n - 1` </br>
🔹 s<sub>i</sub> != t<sub>i</sub> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Union Find**  </br>
🔸 **Graph**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/20%20-%2003%20-%202025%20---%203108.%20Minimum%20Cost%20Walk%20in%20Weighted%20Graph%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203108.%20Minimum%20Cost%20Walk%20in%20Weighted%20Graph.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/20%20-%2003%20-%202025%20---%203108.%20Minimum%20Cost%20Walk%20in%20Weighted%20Graph%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203108.%20Minimum%20Cost%20Walk%20in%20Weighted%20Graph.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/20%20-%2003%20-%202025%20---%203108.%20Minimum%20Cost%20Walk%20in%20Weighted%20Graph%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203108.%20Minimum%20Cost%20Walk%20in%20Weighted%20Graph.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/20%20-%2003%20-%202025%20---%203108.%20Minimum%20Cost%20Walk%20in%20Weighted%20Graph%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203108.%20Minimum%20Cost%20Walk%20in%20Weighted%20Graph.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
