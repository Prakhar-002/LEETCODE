# 1386. Cinema Seat Allocation

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/cinema-seat-allocation/description/?envType=problem-list-v2&envId=interview-instance-iv"><strong>➥ ☢️ 1386 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/083ccdcb-4ee7-4eb1-8e85-3ad624804975" width="400" height="150"/>

### A cinema has `n` rows of seats, numbered from `1` to `n`, and each row has `10` seats labeled from `1` to `10`. You are given `reservedSeats`, where `reservedSeats[i] = [row, seat]` indicates that this seat is already reserved. A four-person group must occupy four **adjacent** seats in a single row, but seats across an aisle (like seats `3` and `4`, or `7` and `8`) are not adjacent unless the group is split with **two people on each side of the aisle**.

### Return the **maximum number** of four-person groups that can be assigned to the cinema using only unreserved seats.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/aa43822a-3be7-453e-9934-3b655c87dfc6" width="400" height="96"/>

### 📥 `Input`  ➤ `n = 3, reservedSeats = [[1,2],[1,3],[1,8],[2,6],[3,1],[3,10]]`

### 📤 `Output`  ➤ `4`

### 🔦 `Explanation`  ➤ The optimal allocation allows `4` groups of four to be seated while respecting reservations and aisle rules.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `n = 2, reservedSeats = [[2,1],[1,8],[2,6]]`

### 📤 `Output`  ➤ `2`

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `n = 4, reservedSeats = [[4,3],[1,4],[4,6],[1,7]]`

### 📤 `Output`  ➤ `4`

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n <= 10^9` </br>
🔹 `1 <= reservedSeats.length <= min(10 * n, 10^4)` </br>
🔹 `reservedSeats[i].length == 2` with `1 <= reservedSeats[i][0] <= n` and `1 <= reservedSeats[i][1] <= 10` </br>
🔹 All `reservedSeats[i]` are distinct. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Greedy**  </br>
🔸 **Bit Manipulation**  </br>

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

<img src ="https://github.com/user-attachments/assets/736e8c5e-7ec2-410a-b4dd-7ba2176a454d" width = "700px" height="462px" />

</h1>
