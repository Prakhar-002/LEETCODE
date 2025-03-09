# 3208. Alternating Groups II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/alternating-groups-ii/description/?envType=daily-question&envId=2025-03-09"><strong>➥ ☢️ 3208 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is a **circle** of **red** and **blue** tiles.  
### You are given an **array** of integers `colors` and an integer `k`.  

- The color of tile `i` is represented by `colors[i]`:
  - `colors[i] == 0` ➤ **Red** tile.
  - `colors[i] == 1` ➤ **Blue** tile.

- An **alternating group** is every `k` contiguous tiles in the circle with **alternating colors**.  
- Each tile in the group (except the first and last one) has a **different color** from its left and right tiles.

### **Return** the number of alternating groups.

🔹 **Note**: Since `colors` represents a **circle**, the **first and the last tiles** are considered to be **next to each other**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ colors = `[0,1,0,1,0]`, k = `3`

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ 

- The three valid **alternating groups** are:
  - `[0,1,0]`
  - `[1,0,1]`
  - `[0,1,0]`

<img src="https://github.com/user-attachments/assets/a006fc32-7619-4864-9558-50b8973112d0" width="150px" height="150px"/>

### 🔀 `Alternating groups`  ➤ 

<img src="https://github.com/user-attachments/assets/4aec8957-a777-4ae7-bdb9-6aa21741be37" width="150px" height="150px"/> &nbsp;
<img src="https://github.com/user-attachments/assets/3a891ff8-427a-4780-b48b-1fb26111e974" width="150px" height="150px"/> &nbsp;
<img src="https://github.com/user-attachments/assets/0340d2af-dbb8-4da7-a58d-9dfdd323696e" width="150px" height="150px"/> &nbsp;

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ colors = `[0,1,0,0,1,0,1]`, k = `6`

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ 

- The two valid **alternating groups** are:
  - `[0,1,0,0,1,0]`
  - `[1,0,0,1,0,1]`

<img src="https://github.com/user-attachments/assets/d9cc5b14-45df-4e35-99d7-702cd98c455f" width="150px" height="150px"/>

### 🔀 `Alternating groups`  ➤ 

<img src="https://github.com/user-attachments/assets/976620c1-1a10-443f-a831-cfc84c63e45f" width="150px" height="150px"/> &nbsp;
<img src="https://github.com/user-attachments/assets/99115811-d26a-41ba-9e60-d2d2f98e31a4" width="150px" height="150px"/> &nbsp;

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ colors = `[1,1,0,1]`, k = `4`

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ No valid **alternating groups** exist in the given array.

<img src="https://github.com/user-attachments/assets/07f9af4a-489c-45d6-a19b-520c7718bd02" width="150px" height="150px"/>

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `3 <= colors.length <= 10⁵` </br>
🔹 `0 <= colors[i] <= 1` </br>
🔹 `3 <= k <= colors.length` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Sliding Window**  </br>

</br>

# 🌯 Similar 🍲 Questions 🍜 `Solution` 🍱 ˋ°•*⁀➷

### ♻️ [3206. Alternating Groups I](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%203206.%20Alternating%20Groups%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2%20%F0%9F%92%96) </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/09%20-%2003%20-%202025%20---%203208.%20Alternating%20Groups%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%203208.%20Alternating%20Groups%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/09%20-%2003%20-%202025%20---%203208.%20Alternating%20Groups%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%203208.%20Alternating%20Groups%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/09%20-%2003%20-%202025%20---%203208.%20Alternating%20Groups%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%203208.%20Alternating%20Groups%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/09%20-%2003%20-%202025%20---%203208.%20Alternating%20Groups%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203208.%20Alternating%20Groups%20II.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/09%20-%2003%20-%202025%20---%203208.%20Alternating%20Groups%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%203208.%20Alternating%20Groups%20II.c)  |
