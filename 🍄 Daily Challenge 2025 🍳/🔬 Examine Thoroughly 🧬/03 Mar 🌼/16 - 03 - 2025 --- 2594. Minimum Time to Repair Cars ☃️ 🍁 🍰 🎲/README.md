# 2594. Minimum Time to Repair Cars

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-time-to-repair-cars/description/?envType=daily-question&envId=2025-03-16"><strong>➥ ☢️ 2594 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷  

### You are given:  
- An **integer array** `ranks`, where `ranks[i]` represents the **rank of the `i`-th mechanic**.  
- An **integer** `cars`, representing the total number of cars waiting in the garage to be repaired.  

### Mechanic's Repair Formula:  
- A mechanic with a **rank `r`** takes `r * n²` minutes to repair `n` cars.  
- **All mechanics work simultaneously** to repair the cars.  

### **Goal**:  
Return the **minimum time** required to repair all the cars.  

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷  

  ### 📥 `Input` ➤ ranks = `[4,2,3,1]`, cars = `10`  

  ### 📤 `Output` ➤ `16`  

  ### 🔦 `Explanation` ➤  

<h4>

- **First mechanic (rank 4)** repairs **2 cars** → `4 * 2 * 2 = 16` minutes.  

- **Second mechanic (rank 2)** repairs **2 cars** → `2 * 2 * 2 = 8` minutes.  

- **Third mechanic (rank 3)** repairs **2 cars** → `3 * 2 * 2 = 12` minutes.  

- **Fourth mechanic (rank 1)** repairs **4 cars** → `1 * 4 * 4 = 16` minutes.  

✅ **Minimum time required = 16 minutes**.  

</h4>

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷  

  ### 📥 `Input` ➤ ranks = `[5,1,8]`, cars = `6`  

  ### 📤 `Output` ➤ `16`  

  ### 🔦 `Explanation` ➤  

<h4>

- **First mechanic (rank 5)** repairs **1 car** → `5 * 1 * 1 = 5` minutes.  

- **Second mechanic (rank 1)** repairs **4 cars** → `1 * 4 * 4 = 16` minutes.  

- **Third mechanic (rank 8)** repairs **1 car** → `8 * 1 * 1 = 8` minutes.  

✅ **Minimum time required = 16 minutes**.  

</h4>

</br>

# Constraints 🔒 ˋ°•*⁀➷  

🔹 `1 <= ranks.length <= 10⁵` </br>  
🔹 `1 <= ranks[i] <= 100` </br>  
🔹 `1 <= cars <= 10⁶` </br>  

</br>

# Topics 📋 ˋ°•*⁀➷  

🔸 **Array**  </br>  
🔸 **Binary Search**  </br>  

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/16%20-%2003%20-%202025%20---%202594.%20Minimum%20Time%20to%20Repair%20Cars%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202594.%20Minimum%20Time%20to%20Repair%20Cars.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/16%20-%2003%20-%202025%20---%202594.%20Minimum%20Time%20to%20Repair%20Cars%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202594.%20Minimum%20Time%20to%20Repair%20Cars.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/16%20-%2003%20-%202025%20---%202594.%20Minimum%20Time%20to%20Repair%20Cars%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202594.%20Minimum%20Time%20to%20Repair%20Cars.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/16%20-%2003%20-%202025%20---%202594.%20Minimum%20Time%20to%20Repair%20Cars%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202594.%20Minimum%20Time%20to%20Repair%20Cars2594.%20Minimum%20Time%20to%20Repair%20Cars.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
