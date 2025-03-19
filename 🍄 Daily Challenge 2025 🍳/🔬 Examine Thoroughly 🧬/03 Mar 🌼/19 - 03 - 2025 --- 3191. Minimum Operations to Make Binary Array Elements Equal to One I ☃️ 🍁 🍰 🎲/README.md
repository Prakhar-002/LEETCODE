# 3191. Minimum Operations to Make Binary Array Elements Equal to One I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i/description/?envType=daily-question&envId=2025-03-19"><strong>➥ ☢️ 3191 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷  

### You are given:  
- A **binary array** `nums` consisting of `0`s and `1`s.  

### **Allowed Operation**:  
You can **choose any 3 consecutive elements** in `nums` and **flip all of them**.  
- **Flipping** means:  
  - `0` → `1`  
  - `1` → `0`  
- You can apply this operation **any number of times (including 0 times)**.  

### **Goal**:  
Return the **minimum number of operations** required to make **all elements in `nums` equal to `1`**.  
- If it is **impossible**, return `-1`.  

</br>  

# Example 💡 1️⃣ ˋ°•*⁀➷  

  ### 📥 `Input` ➤ nums = `[0,1,1,1,0,0]`  

  ### 📤 `Output` ➤ `3`  

  ### 🔦 `Explanation` ➤  

1️⃣ **Flip elements at indices `[0,1,2]`** → `nums = [1,0,0,1,0,0]`  
2️⃣ **Flip elements at indices `[1,2,3]`** → `nums = [1,1,1,0,0,0]`  
3️⃣ **Flip elements at indices `[3,4,5]`** → `nums = [1,1,1,1,1,1]` ✅  

✅ **Minimum operations = 3**  

</br>  

# Example 💡 2️⃣ ˋ°•*⁀➷  

  ### 📥 `Input` ➤ nums = `[0,1,1,1]`  

  ### 📤 `Output` ➤ `-1`  

  ### 🔦 `Explanation` ➤  

- There is **no way** to make all elements `1` using the allowed operation.  
❌ **Return `-1`**.  

</br>  

# Constraints 🔒 ˋ°•*⁀➷  

🔹 `3 <= nums.length <= 10^5` </br>
🔹 `0 <= nums[i] <= 1` </br>

</br>  

# Topics 📋 ˋ°•*⁀➷  

🔸 **Array**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Queue**  </br>
🔸 **Sliding Window**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/19%20-%2003%20-%202025%20---%203191.%20Minimum%20Operations%20to%20Make%20Binary%20Array%20Elements%20Equal%20to%20One%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203191.%20Minimum%20Operations%20to%20Make%20Bina.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/19%20-%2003%20-%202025%20---%203191.%20Minimum%20Operations%20to%20Make%20Binary%20Array%20Elements%20Equal%20to%20One%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203191.%20Minimum%20Operations%20to%20Make%20Bi.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/19%20-%2003%20-%202025%20---%203191.%20Minimum%20Operations%20to%20Make%20Binary%20Array%20Elements%20Equal%20to%20One%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203191.%20Minimum%20Operations%20to%20Mak.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/ffaa8ca1-9b71-4180-9fd2-26327684e280" width = "700px" height="462px" />

</h1>
