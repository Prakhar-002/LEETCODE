# 3508. Implement Router

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/implement-router/description/?envType=daily-question&envId=2025-09-20"><strong>➥ ☢️ 3508 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design a data structure that can efficiently manage data packets in a network router. Each data packet consists of the following attributes:

- `source`: A unique identifier for the machine that generated the packet.

- `destination`: A unique identifier for the target machine.

- `timestamp`: The time at which the packet arrived at the router.

### Implement the Router class:

- `Router(int memoryLimit)`: Initializes the Router object with a fixed memory limit. `memoryLimit` is the maximum number of packets the router can store at any given time. If adding a new packet would exceed this limit, the oldest packet must be removed to free up space.

- `bool addPacket(int source, int destination, int timestamp)`: Adds a packet with the given attributes to the router. A packet is considered a duplicate if another packet with the same source, destination, and timestamp already exists in the router. Return `true` if the packet is successfully added (i.e., it is not a duplicate); otherwise return `false`.

- `int[] forwardPacket()`: Forwards the next packet in FIFO (First In First Out) order. Remove the packet from storage. Return the packet as an array `[source, destination, timestamp]`. If there are no packets to forward, return an empty array.

- `int getCount(int destination, int startTime, int endTime)`: Returns the number of packets currently stored in the router (i.e., not yet forwarded) that have the specified `destination` and have timestamps in the inclusive range `[startTime, endTime]`.

### Note that queries for `addPacket` will be made in increasing order of timestamp.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `["Router", "addPacket", "addPacket", "addPacket", "addPacket", "addPacket", "forwardPacket", "addPacket", "getCount"]
[[3], [1, 4, 90], [2, 5, 90], [1, 4, 90], [3, 5, 95], [4, 5, 105], [], [5, 2, 110], [5, 100, 110]]`

  ### 📤 `Output`  ➤ `[null, true, true, false, true, true, [2, 5, 90], true, 1]`

  ### 🔦 `Explanation`  ➤ ➺

```JS
Router router = new Router(3); // Initialize Router with memoryLimit of 3.
router.addPacket(1, 4, 90); // Packet is added. Return True.
router.addPacket(2, 5, 90); // Packet is added. Return True.
router.addPacket(1, 4, 90); // This is a duplicate packet. Return False.
router.addPacket(3, 5, 95); // Packet is added. Return True
router.addPacket(4, 5, 105); // Packet is added, [1, 4, 90] is removed as number of packets exceeds memoryLimit. Return True.
router.forwardPacket(); // Return [2, 5, 90] and remove it from router.
router.addPacket(5, 2, 110); // Packet is added. Return True.
router.getCount(5, 100, 110); // The only packet with destination 5 and timestamp in the inclusive range [100, 110] is [4, 5, 105]. Return 1.
```

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `["Router", "addPacket", "forwardPacket", "forwardPacket"]
[[2], [7, 4, 90], [], []]`

  ### 📤 `Output`  ➤ `[null, true, [7, 4, 90], []]`

  ### 🔦 `Explanation`  ➤ ➺

```JS
Router router = new Router(2); // Initialize Router with memoryLimit of 2.
router.addPacket(7, 4, 90); // Return True.
router.forwardPacket(); // Return [7, 4, 90].
router.forwardPacket(); // There are no packets left, return [].
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= memoryLimit <= 10^5` </br>
🔹 `1 <= source, destination <= 2 * 10^5` </br>
🔹 `1 <= timestamp <= 10^9` </br>
🔹 `1 <= startTime <= endTime <= 10^9` </br>
🔹 At most 10<sup>5</sup> calls will be made to `addPacket`, `forwardPacket`, and `getCount` methods altogether. </br>
🔹 queries for `addPacket` will be made in increasing order of timestamp. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Binary Search** </br>
🔸 **Design** </br>
🔸 **Queue** </br>
🔸 **Ordered Set** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/20%20-%2009%20-%202025%20---%203508.%20Implement%20Router%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203508.%20Implement%20Router.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/20%20-%2009%20-%202025%20---%203508.%20Implement%20Router%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203508.%20Implement%20Router.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/20%20-%2009%20-%202025%20---%203508.%20Implement%20Router%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203508.%20Implement%20Router.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/20%20-%2009%20-%202025%20---%203508.%20Implement%20Router%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203508.%20Implement%20Router.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/0d078971-ae4a-4787-8355-ddfe067a88d9" width = "700px" height="462px" />

</h1>
