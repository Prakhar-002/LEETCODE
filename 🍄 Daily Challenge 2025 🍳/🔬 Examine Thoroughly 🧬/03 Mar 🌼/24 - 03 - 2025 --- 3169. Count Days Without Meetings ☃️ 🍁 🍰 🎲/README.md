# 3169. Count Days Without Meetings

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-days-without-meetings/description/?envType=daily-question&envId=2025-03-24"><strong>➥ ☢️ 3169 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

You are given a **positive integer** `days`, representing the **total number of days** an employee is available for work (**starting from day 1**).  

You are also given a **2D integer array** `meetings` of size `n`, where:  
- `meetings[i] = [startᵢ, endᵢ]` represents a **meeting** scheduled from **startᵢ to endᵢ** (**inclusive**).  
- Meetings may **overlap**.

### 🏆 Goal:  
Return the **count of days** when the employee is **available for work** but **no meetings are scheduled**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ days = 10, meetings = [[5,7],[1,3],[9,10]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ There is no meeting scheduled on the 4th and 8th days.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ days = 5, meetings = [[2,4],[1,3]]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ There is no meeting scheduled on the 5th day.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ days = 6, meetings = [[1,6]]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ Meetings are scheduled for all working days.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ days = 7, meetings = [[2,3], [5,5]]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ Meetings are scheduled on days 2,3, and 5. So, the employee is free on days 1,4,6 and 7

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= days <= 10<sup>9</sup> </br>

🔹 1 <= meetings.length <= 10<sup>5</sup> </br>

🔹 `meetings[i].length == 2` </br>

🔹 **`1 <= meetings[i][0] <= meetings[i][1] <= days`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Sorting**  </br>

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
