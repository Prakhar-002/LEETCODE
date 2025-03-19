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
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
