# 2206. Divide Array Into Equal Pairs

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/divide-array-into-equal-pairs/description/?envType=daily-question&envId=2025-03-17"><strong>➥ ♻️ 2206 Leetcode Easy ♻️ </strong></a>
</h2>

</br>  

# Description 📜 ˋ°•*⁀➷  

### You are given:  

- An **integer array** `nums` consisting of `2 * n` integers.  

### **Goal**:  

Divide `nums` into `n` **pairs** such that:  

- 1️⃣ **Each element** belongs to **exactly one** pair.  

- 2️⃣ **Each pair** consists of **equal elements**.  

Return `true` if such a division is possible; otherwise, return `false`.  

</br>  

# Example 💡 1️⃣ ˋ°•*⁀➷  

  ### 📥 `Input` ➤ nums = `[3,2,3,2,2,2]`  

  ### 📤 `Output` ➤ `true`  

  ### 🔦 `Explanation` ➤  

- The array contains **6 elements**, so it should be divided into **6 / 2 = 3 pairs**.  

- Possible valid pairs: **(2,2), (3,3), (2,2)**.  

✅ **Pairs satisfy the conditions** → Return `true`.  

</br>  

# Example 💡 2️⃣ ˋ°•*⁀➷  

  ### 📥 `Input` ➤ nums = `[1,2,3,4]`  

  ### 📤 `Output` ➤ `false`  

  ### 🔦 `Explanation` ➤  

- The array contains **4 elements**, so it should be divided into **4 / 2 = 2 pairs**.  

- No valid way to pair elements such that **both numbers in a pair are equal**.  

❌ **No valid pairs possible** → Return `false`.  

</br>  

# Constraints 🔒 ˋ°•*⁀➷  

🔹 `nums.length == 2 * n` </br>
🔹 `1 <= n <= 500` </br>
🔹 `1 <= nums[i] <= 500` </br>

</br>  

# Topics 📋 ˋ°•*⁀➷  

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/17%20-%2003%20-%202025%20---%202206.%20Divide%20Array%20Into%20Equal%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202206.%20Divide%20Array%20Into%20Equal%20Pairs.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/17%20-%2003%20-%202025%20---%202206.%20Divide%20Array%20Into%20Equal%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202206.%20Divide%20Array%20Into%20Equal%20Pairs.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/17%20-%2003%20-%202025%20---%202206.%20Divide%20Array%20Into%20Equal%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202206.%20Divide%20Array%20Into%20Equal%20Pairs.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/17%20-%2003%20-%202025%20---%202206.%20Divide%20Array%20Into%20Equal%20Pairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202206.%20Divide%20Array%20Into%20Equal%20Pairs.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/7afcf2a2-4159-457a-8bf2-a864cbdba28b" width = "700px" height="462px" />

</h1>
