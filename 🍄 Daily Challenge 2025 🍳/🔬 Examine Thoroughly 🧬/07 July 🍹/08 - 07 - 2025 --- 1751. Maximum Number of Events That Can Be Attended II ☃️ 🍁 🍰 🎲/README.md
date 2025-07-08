# 1751. Maximum Number of Events That Can Be Attended II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended-ii/description/?envType=daily-question&envId=2025-07-08"><strong>➥ 🫀 1751 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of events, `events`, where each event is described as `events[i] = [startDay_i, endDay_i, value_i]`. This means the i<sup>th</sup> event starts on `startDay_i` and ends on `endDay_i`, and if you attend this event, you receive a value of `value_i`.

### You are also given an integer `k`, which represents the *maximum* number of events that you can attend.

### Important Constraints:

- You can only attend one event at a time.
- If you choose to attend an event, you must attend the *entire* event (from start to end).
- The end day is inclusive; that is, you cannot attend two events where one starts and the other ends on the same day.

### Your objective is to determine the maximum sum of values that you can achieve by attending at most `k` events.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="575" alt="1751 que 1" src="https://github.com/user-attachments/assets/a7fe56cc-8d41-40e3-8945-eb1b140d3a07" />

  ### 📥 `Input`  ➤ events = [[1,2,4],[3,4,3],[2,3,1]], k = 2

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation`  ➤ Choose the green events, 0 and 1 (0-indexed) for a total value of 4 + 3 = 7.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="573" alt="1751 que 2" src="https://github.com/user-attachments/assets/0cf33200-c2f0-4d1b-8a7e-f34a86b0f96a" />

  ### 📥 `Input` ➤ events = [[1,2,4],[3,4,3],[2,3,10]], k = 2

  ### 📤 `Output`  ➤ 10

  ### 🔦 `Explanation` ➤ Choose event 2 for a total value of 10.
Notice that you cannot attend any other event as they overlap, and that you do not have to attend k events.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img width="574" alt="1751 que 3" src="https://github.com/user-attachments/assets/cac1c960-1649-48a2-ae55-3eda2a922f47" />

  ### 📥 `Input` ➤ events = [[1,1,1],[2,2,2],[3,3,3],[4,4,4]], k = 3

  ### 📤 `Output`  ➤ 9

  ### 🔦 `Explanation` ➤ Although the events do not overlap, you can only attend 3 events. Pick the highest valued three.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= k <= events.length </br>

🔹 1 <= k * events.length <= 10<sup>6</sup> </br>

🔹 1 <= startDay_i <= endDay_i <= 10<sup>9</sup> </br>

🔹 1 <= value_i <= 10<sup>6</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Binary Search**  </br>

🔸 **Dynamic Programming**  </br>

🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/08%20-%2007%20-%202025%20---%201751.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Attended%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201751.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Attend.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/08%20-%2007%20-%202025%20---%201751.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Attended%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201751.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Attended.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/08%20-%2007%20-%202025%20---%201751.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Attended%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201751.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Attend.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/07%20July%20%F0%9F%8D%B9/08%20-%2007%20-%202025%20---%201751.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20Attended%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201751.%20Maximum%20Number%20of%20Events%20That%20Can%20Be%20At.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/6631dc17-5edb-410a-af17-f5a194c8fc12" width = "700px" height="462px" />

</h1>
