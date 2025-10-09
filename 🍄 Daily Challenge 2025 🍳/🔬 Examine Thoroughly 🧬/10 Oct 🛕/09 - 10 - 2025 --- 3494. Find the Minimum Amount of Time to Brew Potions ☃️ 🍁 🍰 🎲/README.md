# 3494. Find the Minimum Amount of Time to Brew Potions

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-minimum-amount-of-time-to-brew-potions/description/?envType=daily-question&envId=2025-10-09"><strong>➥ ☢️ 3494 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two integer arrays, `skill` and `mana`, of length `n` and `m`, respectively.

### In a laboratory, `n` wizards must brew `m` potions in order. Each potion has a mana capacity `mana[j]` and must pass through all the wizards sequentially to be brewed properly. The time taken by the `i`th wizard on the `j`th potion is `timeij = skill[i] * mana[j]`.

### Since the brewing process is delicate, a potion must be passed to the next wizard immediately after the current wizard completes their work. This means the timing must be synchronized so that each wizard begins working on a potion exactly when it arrives. ​

### Return the minimum amount of time required for the potions to be brewed properly.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `skill = [1,5,2,4], mana = [5,1,4,2]`

  ### 📤 `Output`  ➤ `110`

  ### 🔦 `Explanation`  ➤ 

| Potion Number | Start Time | Wizard 0 Done By | Wizard 1 Done By | Wizard 2 Done By | Wizard 3 Done By |
|----------------|-------------|------------------|------------------|------------------|------------------|
| 0              | 0           | 5                | 30               | 40               |60               |
| 1              | 52          | 53               | 58               | 60               | 64               |
| 2              | 54          | 58               | 78               | 86               | 102              |
| 3              | 86          | 88               | 98               | 102              | 110              |

  - As an example for why wizard 0 cannot start working on the 1st potion before time `t = 52`, consider the case where the wizards started preparing the 1st potion at time `t = 50`. At time `t = 58`, wizard 2 is done with the 1st potion, but wizard 3 will still be working on the 0th potion till time `t = 60`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `skill = [1,1,1], mana = [1,1,1]`

  ### 📤 `Output`  ➤ `5`

  ### 🔦 `Explanation`  ➤ ➺

  - Preparation of the 0th potion begins at time t = 0, and is completed by time t = 3.
  - Preparation of the 1st potion begins at time t = 1, and is completed by time t = 4.
  - Preparation of the 2nd potion begins at time t = 2, and is completed by time t = 5.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `skill = [1,2,3,4], mana = [1,2]`

  ### 📤 `Output`  ➤ `21`

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `n == skill.length` </br>
🔹 `m == mana.length` </br>
🔹 `1 <= n, m <= 5000` </br>
🔹 `1 <= mana[i], skill[i] <= 5000` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Simulation** </br>
🔸 **Prefix Sum** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/09%20-%2010%20-%202025%20---%203494.%20Find%20the%20Minimum%20Amount%20of%20Time%20to%20Brew%20Potions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203494.%20Find%20the%20Minimum%20Amount%20of%20Time%20to%20Brew%20Potio.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/09%20-%2010%20-%202025%20---%203494.%20Find%20the%20Minimum%20Amount%20of%20Time%20to%20Brew%20Potions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203494.%20Find%20the%20Minimum%20Amount%20of%20Time%20to%20Brew%20Potions.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/09%20-%2010%20-%202025%20---%203494.%20Find%20the%20Minimum%20Amount%20of%20Time%20to%20Brew%20Potions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203494.%20Find%20the%20Minimum%20Amount%20of%20Time%20to%20Brew%20Potio.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/09%20-%2010%20-%202025%20---%203494.%20Find%20the%20Minimum%20Amount%20of%20Time%20to%20Brew%20Potions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203494.%20Find%20the%20Minimum%20Amount%20of%20Time%20to%20Brew%20P.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1abe3475-ff2d-4089-a054-b869830555d0" width = "700px" height="462px" />

</h1>
