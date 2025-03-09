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

<img src="https://github.com/user-attachments/assets/184e1f3a-c379-4fe6-891c-91862a86035e" width="150px" height="150px"/>

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ colors = `[0,1,0,0,1]`

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ 

- The **three valid alternating groups** are:
  - `[0,1,0]`
  - `[1,0,0]`
  - `[0,0,1]`

<img src="https://github.com/user-attachments/assets/78b41308-2a1b-4f66-94b7-f18a79a008b1" width="150px" height="150px"/>

### 🔀 `Alternating groups`  ➤ 

<img src="https://github.com/user-attachments/assets/5d2c36cc-0387-4bb4-bf75-e47b84431f44" width="150px" height="150px"/>
<img src="https://github.com/user-attachments/assets/f217b1d3-85e0-4736-ac43-a532ac7c7543" width="150px" height="150px"/>
<img src="https://github.com/user-attachments/assets/262a2541-cb0b-4f61-b386-00879f5a6464" width="150px" height="150px"/>

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203206.%20Alternating%20Groups%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%203206.%20Alternating%20Groups%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203206.%20Alternating%20Groups%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%203206.%20Alternating%20Groups%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203206.%20Alternating%20Groups%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%203206.%20Alternating%20Groups%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203206.%20Alternating%20Groups%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203206.%20Alternating%20Groups%20I.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203206.%20Alternating%20Groups%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%203206.%20Alternating%20Groups%20I.c)  |
