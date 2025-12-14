# 731. My Calendar II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/my-calendar-ii/description/?envType=daily-question&envId=2024-09-27"><strong>➥ ☢️ 731 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are implementing a program to use as your calendar. We can add a new event if adding the event will not cause a `triple booking`.

### A `triple booking` happens when three events have some non-empty intersection (i.e., some moment is common to all the three events.).

### The event can be represented as a pair of integers `start` and `end` that represents a booking on the half-open interval `[start, end)`, the range of real numbers x such that `start <= x < end`.

### Implement the `MyCalendarTwo` class:

- `MyCalendarTwo()` Initializes the calendar object.

- `boolean book(int start, int end)` Returns `true` if the event can be added to the calendar successfully without causing a `triple booking`. Otherwise, return `false` and do not add the event to the calendar.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ["MyCalendarTwo", "book", "book", "book", "book", "book", "book"] [[], [10, 20], [50, 60], [10, 40], [5, 15], [5, 10], [25, 55]]

  ### 📤 `Output`  ➤ [null, true, true, true, false, true, true]

  ### 🔦 `Explanation`  ➤ ➺

```Js
    MyCalendarTwo myCalendarTwo = new MyCalendarTwo();
    myCalendarTwo.book(10, 20); // return True, 
    The event can be booked. 

    myCalendarTwo.book(50, 60); // return True, 
    The event can be booked. 

    myCalendarTwo.book(10, 40); // return True, 
    The event can be double booked. 

    myCalendarTwo.book(5, 15);  // return False, 
    The event cannot be booked, 
    because it would result in a triple booking.

    myCalendarTwo.book(5, 10); // return True, 
    The event can be booked, 
    as it does not use time 10 which is already double booked.

    myCalendarTwo.book(25, 55); // return True, 
    The event can be booked, 
    as the time in [25, 40) will be double booked with the third event, 
    the time [40, 50) will be single booked, 
    and the time [50, 55) will be double booked with the second event.
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **0 <= start < end <= 10<sup>9</sup>** </br>

🔹 **At most 1000 calls will be made to `book`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Design**  </br>
🔸 **Segment Tree**  </br>
🔸 **Prefix Sum**  </br>
🔸 **Ordered Set**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/27%20-%2009%20-%202024%20---%20731.%20My%20Calendar%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20731.%20My%20Calendar%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/27%20-%2009%20-%202024%20---%20731.%20My%20Calendar%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20731.%20My%20Calendar%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/27%20-%2009%20-%202024%20---%20731.%20My%20Calendar%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20731.%20My%20Calendar%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/27%20-%2009%20-%202024%20---%20731.%20My%20Calendar%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20731.%20My%20Calendar%20II.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/04962d99-2cf8-4032-b58d-0471b341629e" width = "700px" height="462px" />

</h1>
