# 1701. Average Waiting Time

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/average-waiting-time/description/?envType=daily-question&envId=2024-07-09"><strong>➥ ☢️ 1701 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is a restaurant with a single chef. You are given an array `customers`, where `customers[i] = [arrivali, timei]:`

- `arrival`<sub>i</sub> is the arrival time of the i<sup>th</sup> `customer`. The arrival times are sorted in non-decreasing order.

- time<sub>i</sub> is the time needed to prepare the order of the i<sup>th</sup> `customer`.

### When a customer arrives, he gives the chef his order, and the chef starts preparing it once he is idle. The customer waits till the chef finishes preparing his order. The chef does not prepare food for more than one customer at a time. The chef prepares food for customers `in the order they were given in the input`.

### Return *the `average` waiting time of all customers. Solutions within `10`<sup>-5</sup> from the actual answer are considered accepted*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ customers = [[1,2],[2,5],[4,3]]

  ### 📤 Output  ➤ 5.00000

  ### 🔦 Explanation  ➤ 

    1 ➺ The first customer arrives at time 1, the chef takes his order and starts preparing it immediately at time 1, and finishes at time 3, so the waiting time of the first customer is 3 - 1 = 2.

    2 ➺ The second customer arrives at time 2, the chef takes his order and starts preparing it at time 3, and finishes at time 8, so the waiting time of the second customer is 8 - 2 = 6.

    3 ➺ The third customer arrives at time 4, the chef takes his order and starts preparing it at time 8, and finishes at time 11, so the waiting time of the third customer is 11 - 4 = 7.

    So the average waiting time = (2 + 6 + 7) / 3 = 5.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ customers = [[5,2],[5,4],[10,3],[20,1]]

  ### 📤 Output  ➤ 3.25000

  ### 🔦 Explanation ➤ 

    1 ➺ The first customer arrives at time 5, the chef takes his order and starts preparing it immediately at time 5, and finishes at time 7, so the waiting time of the first customer is 7 - 5 = 2.

    2 ➺ The second customer arrives at time 5, the chef takes his order and starts preparing it at time 7, and finishes at time 11, so the waiting time of the second customer is 11 - 5 = 6.

    3 ➺ The third customer arrives at time 10, the chef takes his order and starts preparing it at time 11, and finishes at time 14, so the waiting time of the third customer is 14 - 10 = 4.

    4 ➺ The fourth customer arrives at time 20, the chef takes his order and starts preparing it immediately at time 20, and finishes at time 21, so the waiting time of the fourth customer is 21 - 20 = 1.

    So the average waiting time = (2 + 6 + 4 + 1) / 4 = 3.25.


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= customers.length <= 10<sup>5</sup>** </br>
🔹 **1 <= arrivali, timei <= 10<sup>4</sup>** </br>
🔹 **arrival<sub>i</sub> <= arrival<sub>i+1</sub>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/09%20-%2007%20-%202024%20---%201701.%20Average%20Waiting%20Time%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1701-AverageWaitingTime.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/09%20-%2007%20-%202024%20---%201701.%20Average%20Waiting%20Time%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1701-AverageWaitingTime.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/09%20-%2007%20-%202024%20---%201701.%20Average%20Waiting%20Time%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1701-AverageWaitingTime.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/09%20-%2007%20-%202024%20---%201701.%20Average%20Waiting%20Time%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1701-AverageWaitingTime.js) |
