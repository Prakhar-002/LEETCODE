# 729. My Calendar I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/my-calendar-i/description/?envType=daily-question&envId=2024-09-26"><strong>➥ ☢️ 729 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are implementing a program to use as your calendar. We can add a new event if adding the event will not cause a `double booking`.

### A `double booking` happens when two events have some non-empty intersection (i.e., some moment is common to both events.).

### The event can be represented as a pair of integers `start` and `end` that represents a booking on the half-open interval `[start, end)`, the range of real numbers `x` such that `start <= x < end`.

### Implement the `MyCalendar` class:

- `MyCalendar()` Initializes the calendar object.

- `boolean book(int start, int end)` Returns `true` if the event can be added to the calendar successfully without causing a `double booking`. Otherwise, return `false` and do not add the event to the calendar.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ["MyCalendar", "book", "book", "book"][[], [10, 20], [15, 25], [20, 30]]

  ### 📤 `Output`  ➤ [null, true, false, true]

  ### 🔦 `Explanation`  ➤ ➺

    MyCalendar myCalendar = new MyCalendar();
    myCalendar.book(10, 20); // return True
    myCalendar.book(15, 25); // return False, 
    It can not be booked because time 15 is already booked by another event.
    myCalendar.book(20, 30); // return True, 
    The event can be booked, as the first event takes every time less than 20, 
    but not including 20.


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **0 <= start < end <= 10<sup>9</sup>** </br>

🔹 **At most `1000` calls will be made to `book`.** </br>

🔹 **** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Design**  </br>
🔸 **Segment Tree**  </br>
🔸 **Ordered Set**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/26%20-%2009%20-%202024%20---%20729.%20My%20Calendar%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20729.%20My%20Calendar%20I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/26%20-%2009%20-%202024%20---%20729.%20My%20Calendar%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20729.%20My%20Calendar%20I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/26%20-%2009%20-%202024%20---%20729.%20My%20Calendar%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20729.%20My%20Calendar%20I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/26%20-%2009%20-%202024%20---%20729.%20My%20Calendar%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20729.%20My%20Calendar%20I.js) |
