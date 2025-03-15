# 2560. House Robber IV

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/house-robber-iv/description/?envType=daily-question&envId=2025-03-15"><strong>➥ ☢️ 2560 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are several consecutive houses along a street, each of which has some money inside. There is also a robber, who wants to steal money from the homes, but he refuses to steal from adjacent homes.

### Given:

- An **integer array** `nums`, where `nums[i]` represents the **money** stashed in the `i-th` house.

- An **integer** `k`, representing the **minimum number of houses** that must be robbed.

### **Rules:**

- The **robber cannot rob adjacent houses**.

- The **capability of the robber** is the **maximum** amount of money stolen from any **single house** in a given robbery sequence.

- **Always possible** to rob at least `k` houses.


### **Goal**: Return **the minimum possible capability** out of all ways to rob **at least `k` houses**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = `[2,3,5,9]`, k = `2`

  ### 📤 `Output` ➤ `5`

  ### 🔦 `Explanation` ➤ 

<h3>

Possible ways to rob **at least `2` houses**:

- 1️⃣ Rob **indices `[0, 2]`** → **Capability = `max(2, 5) = 5`**  

- 2️⃣ Rob **indices `[0, 3]`** → **Capability = `max(2, 9) = 9`**  

- 3️⃣ Rob **indices `[1, 3]`** → **Capability = `max(3, 9) = 9`**  

🎯 **Return `min(5, 9, 9) = 5`**

</h3>

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = `[2,7,9,3,1]`, k = `2`

  ### 📤 `Output` ➤ `2`

  ### 🔦 `Explanation` ➤ 

<h3>

Possible ways to rob **at least `2` houses**:

- The **best choice** is to rob **indices `[0, 4]`**, giving **Capability = `max(2, 1) = 2`**.  

🎯 **Return `2`**

</h3>

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length <= 10^5` </br>
🔹 `1 <= nums[i] <= 10^9` </br>
🔹 `1 <= k <= (nums.length + 1) / 2` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>

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
