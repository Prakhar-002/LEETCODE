# 552. Student Attendance Record II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/student-attendance-record-ii/?envType=daily-question&envId=2024-05-24"><strong>➥ 🫀 552 Leetcode Que  Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### An attendance record for a student can be represented as a string where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters:

- `'A'` : Absent.
- `'L'` : Late.
- `'P'` : Present.
### Any student is eligible for an attendance award if they meet `both` of the following criteria:

- The student was absent (`'A'`) for `strictly` fewer than 2 days `total`.

- The student was never late (`'L'`) for 3 or more `consecutive` days.

### Given an integer `n`, return *the `number` of possible attendance records of length `n` that make a student eligible for an attendance award. The answer may be very large, so return it `modulo` 10^9 + 7*.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ n = 2

  ### Output  ➤ 8

  ### Explanation  ➤ There are 8 records with length 2 that are eligible for an award: </br> "PP", "AP", "PA", "LP", "PL", "AL", "LA", "LL" </br> Only "AA" is not eligible because there are 2 absences (there need to be fewer than 2).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  n = 1

  ### Output  ➤ 3 



</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ n = 10101

  ### Output  ➤  183236316

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= n <= 10^5**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Queue**
3. **Sliding**
4. **Heap**
5. **Ordered**
6. **Monotonic**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/26%20-%2005%20-%202024%20---%20552.%20Student%20Attendance%20Record%20II%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%8D%81JAVA_552_StudentAttendanceRecord_II.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/26%20-%2005%20-%202024%20---%20552.%20Student%20Attendance%20Record%20II%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_552_StudentAttendanceRecord_II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/26%20-%2005%20-%202024%20---%20552.%20Student%20Attendance%20Record%20II%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_552_StudentAttendanceRecord_II.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/26%20-%2005%20-%202024%20---%20552.%20Student%20Attendance%20Record%20II%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F%20%F0%9F%92%96/%F0%9F%92%96C_552_StudentAttendanceRecord_II.c)  |

