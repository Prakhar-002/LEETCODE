# 3206. Alternating Groups I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/alternating-groups-i/description/"><strong>➥ ♻️ 3206 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is a **circle** of **red** and **blue** tiles.  
### You are given an **array** of integers `colors`.  

- The color of tile `i` is represented by `colors[i]`:
  - `colors[i] == 0` ➤ **Red** tile.
  - `colors[i] == 1` ➤ **Blue** tile.

- An **alternating group** is every **3 contiguous tiles** in the circle with **alternating colors**.  
- The **middle tile** must have a **different color** from its left and right tiles.

### **Return** the number of alternating groups.

🔹 **Note**: Since `colors` represents a **circle**, the **first and the last tiles** are considered to be **next to each other**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ colors = `[1,1,1]`

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ 

- There are no **alternating groups** since all tiles have the same color.

<img src="" width="150px" height="150px"/>

### 🔀 `Alternating groups`  ➤ 

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ colors = `[0,1,0,0,1]`

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ 

- The **three valid alternating groups** are:
  - `[0,1,0]`
  - `[1,0,0]`
  - `[0,0,1]`

<img src="" width="150px" height="150px"/>

### 🔀 `Alternating groups`  ➤ 

<img src="" width="150px" height="150px"/>
<img src="" width="150px" height="150px"/>
<img src="" width="150px" height="150px"/>

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `3 <= colors.length <= 100` </br>
🔹 `0 <= colors[i] <= 1` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Sliding Window**  </br>

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


