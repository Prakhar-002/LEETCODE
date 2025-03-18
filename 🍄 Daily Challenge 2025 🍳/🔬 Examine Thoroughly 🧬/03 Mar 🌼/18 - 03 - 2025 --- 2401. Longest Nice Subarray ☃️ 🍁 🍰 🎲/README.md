# 2401. Longest Nice Subarray

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-nice-subarray/description/?envType=daily-question&envId=2025-03-18"><strong>➥ ☢️ 2401 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷  

### You are given:  
- An **array** `nums` consisting of **positive integers**.  

### **Definition of a Nice Subarray**:  
A subarray is **nice** if:  
- The **bitwise AND** of **every pair** of elements (in different positions) within the subarray is **equal to `0`**.  

### **Goal**:  
Return the **length** of the **longest nice subarray** in `nums`.  

✅ **Subarrays of length `1` are always nice**.  

</br>  

# Example 💡 1️⃣ ˋ°•*⁀➷  

  ### 📥 `Input` ➤ nums = `[1,3,8,48,10]`  

  ### 📤 `Output` ➤ `3`  

  ### 🔦 `Explanation` ➤  

<h4>

The **longest nice subarray** is `[3,8,48]` because:  

- `3 AND 8 = 0`  

- `3 AND 48 = 0`  

- `8 AND 48 = 0`  

✅ **Max length = 3**.  

</h4>

</br>  

# Example 💡 2️⃣ ˋ°•*⁀➷  

  ### 📥 `Input` ➤ nums = `[3,1,5,11,13]`  

  ### 📤 `Output` ➤ `1`  

  ### 🔦 `Explanation` ➤  

<h4>

- **Any subarray of length `1` is always nice**.  

- No longer subarray satisfies the **bitwise AND = 0** condition.  

✅ **Max length = 1**.  

</h4>

</br>  

# Constraints 🔒 ˋ°•*⁀➷  

🔹 1 <= nums.length <= 10<sup>5</sup> </br>
🔹 1 <= nums[i] <= 10<sup>9</sup> </br>

</br>  

# Topics 📋 ˋ°•*⁀➷  

🔸 **Array**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Sliding Window**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/18%20-%2003%20-%202025%20---%202401.%20Longest%20Nice%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202401.%20Longest%20Nice%20Subarray.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/18%20-%2003%20-%202025%20---%202401.%20Longest%20Nice%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202401.%20Longest%20Nice%20Subarray.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/18%20-%2003%20-%202025%20---%202401.%20Longest%20Nice%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202401.%20Longest%20Nice%20Subarray.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/18%20-%2003%20-%202025%20---%202401.%20Longest%20Nice%20Subarray%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202401.%20Longest%20Nice%20Subarray.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/ebe6fb10-0ce4-49d9-8a94-578f433177ab" width = "700px" height="462px" />

</h1>
