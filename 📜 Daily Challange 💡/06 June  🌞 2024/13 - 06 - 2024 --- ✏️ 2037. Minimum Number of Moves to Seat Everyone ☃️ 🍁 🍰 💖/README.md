# 2037. Minimum Number of Moves to Seat Everyone

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/?envType=daily-question&envId=2024-06-23"><strong>➥ ♻️ 2037 Leetcode Que Easy ♻️</strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` availabe seats and `n` students standing in a room. You are given an array `seats` of length `n`, where `seats[i]` is the position of the `ith` seat. You are also given the array `students` of length `n`, where `students[j]` is the position of the `jth` student.

### You may perform the following move any number of times:

- Increase or decrease the position of the `ith` student by 1 (i.e., moving the `ith` student from position `x` to `x + 1` or `x - 1`)

### Return *the `minimum number of moves` required to move each student to a seat such that no two students are in the same seat.*

### Note that there may be `multiple` seats or students in the same position at the beginning.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ seats = [3,1,5], students = [2,7,4]

  ### Output  ➤ 4

  ### Explanation  ➤ The students are moved as follows:

    - The first student is moved from from position 2 to position 1 using 1 move.

    - The second student is moved from from position 7 to position 5 using 2 moves.

    - The third student is moved from from position 4 to position 3 using 1 move.

    In total, 1 + 2 + 1 = 4 moves were used.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ seats = [4,1,5,9], students = [1,3,2,6]

  ### Output  ➤ 7

  ### Explanation ➤The students are moved as follows:
  
    - The first student is not moved.

    - The second student is moved from from position 3 to position 4 using 1 move.

    - The third student is moved from from position 2 to position 5 using 3 moves.

    - The fourth student is moved from from position 6 to position 9 using 3 moves.

    In total, 0 + 1 + 3 + 3 = 7 moves were used.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ seats = [2,2,6,6], students = [1,3,2,6]

  ### Output  ➤ 4

  ### Explanation ➤ Note that there are two seats at position 2 and two seats at position 6.
  
    The students are moved as follows:

    - The first student is moved from from position 1 to position 2 using 1 move.

    - The second student is moved from from position 3 to position 6 using 3 moves.

    - The third student is not moved.

    - The fourth student is not moved.

    In total, 1 + 3 + 0 + 0 = 4 moves were used.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **n == seats.length == students.length**
- **1 <= n <= 100**
- **1 <= seats[i], students[j] <= 100**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Greedy**
3. **Sorting**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/13%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%202037.%20Minimum%20Number%20of%20Moves%20to%20Seat%20Everyone%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%F0%9F%8D%81JAVA_2037_MinimumNumberOfMovesToSeatEveryone.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/13%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%202037.%20Minimum%20Number%20of%20Moves%20to%20Seat%20Everyone%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%F0%9F%8E%B2CPP_2037_MinimumNumberOfMovesToSeatEveryone.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/13%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%202037.%20Minimum%20Number%20of%20Moves%20to%20Seat%20Everyone%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_2037_MinimumNumberOfMovesToSeatEveryone.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/13%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%202037.%20Minimum%20Number%20of%20Moves%20to%20Seat%20Everyone%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_2037_MinimumNumberOfMovesToSeatEveryone.js) |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/solutions/5305555/easy-beats-detailed-explanation-formatted-java-c-js-py-git)  |
