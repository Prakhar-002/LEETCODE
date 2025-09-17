# 1845. Seat Reservation Manager

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/seat-reservation-manager/description/"><strong>➥ ☢️ 1845 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design a system that manages the reservation state of n seats that are numbered from 1 to n.

### Implement the SeatManager class:

- `SeatManager(int n)` Initializes a SeatManager object that will manage n seats numbered from 1 to n. All seats are initially available.

- `int reserve()` Fetches the smallest-numbered unreserved seat, reserves it, and returns its number.

- `void unreserve(int seatNumber)` Unreserves the seat with the given `seatNumber`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `["SeatManager", "reserve", "reserve", "unreserve", "reserve", "reserve", "reserve", "reserve", "unreserve"]
[[5], [], [], [2], [], [], [], [], [5]]`

  ### 📤 `Output`  ➤ `[null, 1, 2, null, 2, 3, 4, 5, null]`

  ### 🔦 `Explanation`  ➤ ➺

  - `SeatManager seatManager = new SeatManager(5);` // Initializes a SeatManager with 5 seats.
  - `seatManager.reserve();`    // All seats are available, so return the lowest numbered seat, which is 1.
  - `seatManager.reserve();`    // The available seats are [2,3,4,5], so return the lowest of them, which is 2.
  - `seatManager.unreserve(2);` // Unreserve seat 2, so now the available seats are [2,3,4,5].
  - `seatManager.reserve();`    // The available seats are [2,3,4,5], so return the lowest of them, which is 2.
  - `seatManager.reserve();`    // The available seats are [3,4,5], so return the lowest of them, which is 3.
  - `seatManager.reserve();`    // The available seats are [4,5], so return the lowest of them, which is 4.
  - `seatManager.reserve();`    // The only available seat is seat 5, so return 5.
  - `seatManager.unreserve(5);` // Unreserve seat 5, so now the available seats are [5].

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n <= 10^5` </br>
🔹 `1 <= seatNumber <= n` </br>
🔹 For each call to `reserve`, it is guaranteed that there will be at least one unreserved seat. </br>
🔹 For each call to `unreserve`, it is guaranteed that `seatNumber` will be reserved. </br>
🔹 At most `10^5` calls in total will be made to `reserve` and `unreserve`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Design** </br>
🔸 **Heap (Priority Queue)** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
