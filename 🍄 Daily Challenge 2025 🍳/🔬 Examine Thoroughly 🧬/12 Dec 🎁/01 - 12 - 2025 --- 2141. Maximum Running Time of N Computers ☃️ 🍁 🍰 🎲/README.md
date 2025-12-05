# 2141. Maximum Running Time of N Computers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-running-time-of-n-computers/?envType=daily-question&envId=2025-12-01"><strong>➥ 🫀 2141 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You have `n` computers. You are given the integer `n` and a 0-indexed integer array `batteries` where the ith battery can run a computer for `batteries[i]` minutes. You are interested in running all `n` computers simultaneously using the given batteries.

### Initially, you can insert at most one battery into each computer. After that and at any integer time moment, you can remove a battery from a computer and insert another battery any number of times. The inserted battery can be a totally new battery or a battery from another computer. You may assume that the removing and inserting processes take no time.

### Note that the batteries cannot be recharged.

### Return the maximum number of minutes you can run all the `n` computers simultaneously.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="1042" height="205" alt="2141 que 1" src="https://github.com/user-attachments/assets/2dda3edb-53b4-4130-a8ea-82d71ae5f883" />

  ### 📥 `Input`  ➤ n = 2, batteries = [3,3,3]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ 

```Js
Initially, insert battery 0 into the first computer and battery 1 into the second computer.
After two minutes, remove battery 1 from the second computer and insert battery 2 instead. Note that battery 1 can still run for one minute.
At the end of the third minute, battery 0 is drained, and you need to remove it from the first computer and insert battery 1 instead.
By the end of the fourth minute, battery 1 is also drained, and the first computer is no longer running.
We can run the two computers simultaneously for at most 4 minutes, so we return 4.
```

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="801" height="191" alt="2141 que 2" src="https://github.com/user-attachments/assets/b7f71dcf-25cf-4104-9ca6-286c86757164" />

  ### 📥 `Input` ➤ n = 2, batteries = [1,1,1,1]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ 

```Js
Initially, insert battery 0 into the first computer and battery 2 into the second computer. 
After one minute, battery 0 and battery 2 are drained so you need to remove them and insert battery 1 into the first computer and battery 3 into the second computer. 
After another minute, battery 1 and battery 3 are also drained so the first and second computers are no longer running.
We can run the two computers simultaneously for at most 2 minutes, so we return 2.
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= n <= batteries.length <= 10<sup>5</sup> </br>
🔹 1 <= batteries[i] <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Binary Search** </br>
🔸 **Greedy** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/01%20-%2012%20-%202025%20---%202141.%20Maximum%20Running%20Time%20of%20N%20Computers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202141.%20Maximum%20Running%20Time%20of%20N%20Computers.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/01%20-%2012%20-%202025%20---%202141.%20Maximum%20Running%20Time%20of%20N%20Computers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202141.%20Maximum%20Running%20Time%20of%20N%20Computers.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/01%20-%2012%20-%202025%20---%202141.%20Maximum%20Running%20Time%20of%20N%20Computers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202141.%20Maximum%20Running%20Time%20of%20N%20Computers.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/01%20-%2012%20-%202025%20---%202141.%20Maximum%20Running%20Time%20of%20N%20Computers%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202141.%20Maximum%20Running%20Time%20of%20N%20Computers.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/b783427e-9ea3-46be-bff4-8a3f41105009" width = "700px" height="462px" />

</h1>
