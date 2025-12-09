# Q2. Largest Component Size by Common Factor

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/largest-component-size-by-common-factor/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-union-find"><strong>➥ 🫀 Q2 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array of **unique positive integers** `nums`. Consider the following graph: 

- There are `nums.length` nodes labeled from `nums[0]` to `nums[nums.length - 1]`.
- There is an **undirected edge** between `nums[i]` and `nums[j]` if `nums[i]` and `nums[j]` share a **common factor greater than 1**. 

### Your task is to **return the size of the largest connected component** in this graph.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="889" height="173" alt="952 Que 1" src="https://github.com/user-attachments/assets/cfa47cb5-dadc-407f-bd30-455e2a804d2d" />

### 📥 `Input`  ➤ `nums = [4,6,15,35]`

### 📤 `Output`  ➤ `4`

### 🔦 `Explanation`  ➤ All numbers are connected through shared factors, so they form a single connected component of size `4`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="908" height="155" alt="952 Que 2" src="https://github.com/user-attachments/assets/ae70edd3-159b-44f4-a689-3058ac0eef7b" />

### 📥 `Input` ➤ `nums = [20,50,9,63]`

### 📤 `Output`  ➤ `2`

### 🔦 `Explanation` ➤ `{20,50}` share common factors and `{9,63}` share common factors, forming components of size `2`, and the largest connected component size is `2`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img width="991" height="516" alt="952 Que 3" src="https://github.com/user-attachments/assets/1dfbea77-4708-4fda-a980-885e9cf85aac" />

### 📥 `Input` ➤ `nums = [2,3,6,7,4,12,21,39]`

### 📤 `Output`  ➤ `8`

### 🔦 `Explanation` ➤ Every number can be connected to every other through a chain of shared factors greater than `1`, so all `8` numbers belong to one connected component.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length <= 2 * 10^4` </br>
🔹 `1 <= nums[i] <= 10^5` </br>
🔹 All the values of **`nums` are unique`**. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Math** </br>
🔸 **Union Find** </br>
🔸 **Number Theory** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Union%20Find/Q2.%20Largest%20Component%20Size%20by%20Common%20Factor/%F0%9F%8D%81JAVA%20-%20Largest%20Component%20Size%20by%20Common%20Factor.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Union%20Find/Q2.%20Largest%20Component%20Size%20by%20Common%20Factor/%F0%9F%8E%B2CPP%20-%20Largest%20Component%20Size%20by%20Common%20Factor.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Union%20Find/Q2.%20Largest%20Component%20Size%20by%20Common%20Factor/%F0%9F%8D%B0PYTHON%20-%20Largest%20Component%20Size%20by%20Common%20Factor.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Union%20Find/Q2.%20Largest%20Component%20Size%20by%20Common%20Factor/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Largest%20Component%20Size%20by%20Common%20Factor.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/698cb2ae-6f4b-47b4-9e1b-926a59068b23" width = "700px" height="462px" />

</h1>
