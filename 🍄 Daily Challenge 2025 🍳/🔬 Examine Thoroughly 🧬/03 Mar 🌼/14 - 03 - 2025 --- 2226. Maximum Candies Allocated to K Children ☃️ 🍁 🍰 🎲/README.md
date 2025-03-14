# 2226. Maximum Candies Allocated to K Children

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/?envType=daily-question&envId=2025-03-14"><strong>➥ ☢️ 2226 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given:
- A **0-indexed integer array** `candies`, where `candies[i]` represents a pile of candies of size `candies[i]`.
- An integer `k`, representing the number of children.

### **Rules:**
- Each **pile** can be **split** into multiple sub-piles.
- **Merging piles is NOT allowed**.
- Each child must receive **the same number of candies** from **one pile only**.
- Some piles **may go unused**.

### **Goal**:
Return **the maximum** number of candies **each child can receive**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ candies = `[5,8,6]`, k = `3`
  
  ### 📤 `Output` ➤ `5`

  ### 🔦 `Explanation` ➤ We can divide candies[1] into 2 piles of size 5 and 3, and candies[2] into 2 piles of size 5 and 1. We now have five piles of candies of sizes 5, 5, 3, 5, and 1. We can allocate the 3 piles of size 5 to 3 children. It can be proven that each child cannot receive more than 5 candies.

1️⃣ **Split `candies[1] = 8`** → `[5, 5, 3]`  

2️⃣ **Split `candies[2] = 6`** → `[5, 5, 3, 5, 1]`  

🎁 **Three piles of `5` candies available** → Allocate to `3` children.  

✅ **Max candies per child = `5`**

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ candies = `[2,5]`, k = `11`
  
  ### 📤 `Output` ➤ `0`

  ### 🔦 `Explanation` ➤ There are 11 children but only 7 candies in total, so it is impossible to ensure each child receives at least one candy. Thus, each child gets no candy and the answer is 0.

- **Total candies = `2 + 5 = 7`**, but **`k = 11`**.

- **Impossible** to allocate at least 1 candy to each child.  

❌ **Return `0`**

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= candies.length <= 10^5` </br>
🔹 `1 <= candies[i] <= 10^7` </br>
🔹 `1 <= k <= 10^12` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/14%20-%2003%20-%202025%20---%202226.%20Maximum%20Candies%20Allocated%20to%20K%20Children%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202226.%20Maximum%20Candies%20Allocated%20to%20K%20Children.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/14%20-%2003%20-%202025%20---%202226.%20Maximum%20Candies%20Allocated%20to%20K%20Children%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202226.%20Maximum%20Candies%20Allocated%20to%20K%20Children.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/14%20-%2003%20-%202025%20---%202226.%20Maximum%20Candies%20Allocated%20to%20K%20Children%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202226.%20Maximum%20Candies%20Allocated%20to%20K%20Children.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/14%20-%2003%20-%202025%20---%202226.%20Maximum%20Candies%20Allocated%20to%20K%20Children%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202226.%20Maximum%20Candies%20Allocated%20to%20K%20Children.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
