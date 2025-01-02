# 933. Number of Recent Calls

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-recent-calls/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ♻️ 933 Leetcode Easy ♻️ </strong></a>
</h2>

</br> 

# Description 📜 ˋ°•*⁀➷

### You have a RecentCounter class which counts the number of recent requests within a certain time frame.

### Implement the RecentCounter class:

- `RecentCounter()` Initializes the counter with zero recent requests.

- `int ping(int t)` Adds a new request at time `t`, where `t` represents some time in milliseconds, and returns the number of requests that has happened in the past `3000` milliseconds (including the new request). Specifically, return the number of requests that have happened in the inclusive range `[t - 3000, t]`.

### It is `guaranteed` that every call to `ping` uses a strictly larger value of `t` than the previous call.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ["RecentCounter", "ping", "ping", "ping", "ping"]  [[], [1], [100], [3001], [3002]]

  ### 📤 `Output`  ➤ [null, 1, 2, 3, 3]

  ### 🔦 `Explanation`  ➤ RecentCounter recentCounter = new RecentCounter();

➺ recentCounter.ping(1);     // requests = [<ins>1</ins>], range is [-2999,1], return 1 </br>

➺ recentCounter.ping(100);   // requests = [<ins>1</ins>, <ins>100</ins>], range is [-2900,100], return 2 </br>

➺ recentCounter.ping(3001);  // requests = [<ins>1</ins>, <ins>100</ins>, <ins>3001</ins>], range is [1,3001], return 3 </br>

➺ recentCounter.ping(3002);  // requests = [<ins>1</ins>, <ins>100</ins>, <ins>3001</ins>, <ins>3002</ins>], range is [2,3002], return 3

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= t <= 10<sup>9</sup>** </br>

🔹 **Each test case will call `ping` with `strictly increasing` values of t.** </br>

🔹 **At most 10<sup>4</sup> calls will be made to ping.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Design**  </br>
🔸 **Queue**  </br>
🔸 **Data Stream**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Queue/Day%20%E2%9E%BA%2027%20%F0%9F%AA%BB%20933.%20Number%20of%20Recent%20Calls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20933.%20Number%20of%20Recent%20Calls.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Queue/Day%20%E2%9E%BA%2027%20%F0%9F%AA%BB%20933.%20Number%20of%20Recent%20Calls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20933.%20Number%20of%20Recent%20Calls.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Queue/Day%20%E2%9E%BA%2027%20%F0%9F%AA%BB%20933.%20Number%20of%20Recent%20Calls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20933.%20Number%20of%20Recent%20Calls.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20Queue/Day%20%E2%9E%BA%2027%20%F0%9F%AA%BB%20933.%20Number%20of%20Recent%20Calls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20933.%20Number%20of%20Recent%20Calls.js) |
