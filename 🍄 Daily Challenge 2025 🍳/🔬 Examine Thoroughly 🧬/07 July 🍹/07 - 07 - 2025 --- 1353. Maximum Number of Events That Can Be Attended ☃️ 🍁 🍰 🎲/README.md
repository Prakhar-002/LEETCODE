# 1353. Maximum Number of Events That Can Be Attended

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended/description/?envType=daily-question&envId=2025-07-07"><strong>➥ ☢️ 1353 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of events, `events`, where `events[i] = [startDay_i, endDay_i]`. This means that event `i` starts on `startDay_i` and ends on `endDay_i`.

### You have the flexibility to attend event `i` on any day `d` such that `startDay_i <= d <= endDay_i`. However, you can only attend at most one event on any given day `d`.

### Your objective is to return the *maximum* number of events that you can attend.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/30d29782-af09-4858-8236-771096cf816c" width="400" height="267"/>

  ### 📥 `Input`  ➤ events = [[1,2],[2,3],[3,4]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤
You can attend all the three events.
One way to attend them all is as shown.
Attend the first event on day 1.
Attend the second event on day 2.
Attend the third event on day 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ events= [[1,2],[2,3],[3,4],[1,2]]

  ### 📤 `Output`  ➤ 4

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= events.length <= 10<sup>5</sup> </br>

🔹 events[i].length == 2 </br>

🔹 1 <= startDay_i <= endDay_i <= 10<sup>5</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Greedy**  </br>

🔸 **Sorting**  </br>

🔸 **Heap (Priority Queue)**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/07%20-%2007%20-%202025%20---%201353.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Attended%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201353.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Attended.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/07%20-%2007%20-%202025%20---%201353.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Attended%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201353.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Attended.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/07%20-%2007%20-%202025%20---%201353.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Attended%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201353.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Attended.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/07%20-%2007%20-%202025%20---%201353.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Attended%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201353.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Atten.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/9a77ae4e-d992-468e-8388-3ca02b23178e" width = "700px" height="462px" />

</h1>
