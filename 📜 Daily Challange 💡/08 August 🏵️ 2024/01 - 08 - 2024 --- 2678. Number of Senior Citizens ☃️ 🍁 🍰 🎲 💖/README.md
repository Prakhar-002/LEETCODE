# 2678. Number of Senior Citizens

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-senior-citizens/description/?envType=daily-question&envId=2024-08-01"><strong>➥ ♻️ 2678 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a `0-indexed` array of strings `details`. Each element of `details` provides information about a given passenger compressed into a string of length `15`. The system is such that ➤

- The `first ten` characters consist of the `phone number` of passengers.

- The `next character` denotes the `gender` of the person.

- The following `two characters` are used to indicate the `age` of the person.

- The `last two characters` determine the `seat allotted` to that person.

### Return *the number of passengers who are `strictly more than 60 years old`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ details = ["7868190130M7522","5303914400F9211","9273338290F4010"]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤  The passengers at indices 0, 1, and 2 have ages 75, 92, and 40. Thus, there are 2 people who are over 60 years old.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ details = ["1313579440F2036","2921522980M5644"]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤  None of the passengers are older than 60.


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= details.length <= 100`** </br>

🔹 **`details[i].length == 15`** </br>

🔹 **`details[i] consists of digits from '0' to '9'.`** </br>

🔹 **`details[i][10] is either 'M' or 'F' or 'O'.`** </br>

🔹 **The phone numbers and seat numbers of the passengers are distinct.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **String**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/01%20-%2008%20-%202024%20---%202678.%20Number%20of%20Senior%20Citizens%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA-2678-NumberOfSeniorCitizens.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/01%20-%2008%20-%202024%20---%202678.%20Number%20of%20Senior%20Citizens%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP-2678-NumberOfSeniorCitizens.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/01%20-%2008%20-%202024%20---%202678.%20Number%20of%20Senior%20Citizens%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON-2678-NumberOfSeniorCitizens.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/01%20-%2008%20-%202024%20---%202678.%20Number%20of%20Senior%20Citizens%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT-2678-NumberOfSeniorCitizens.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/01%20-%2008%20-%202024%20---%202678.%20Number%20of%20Senior%20Citizens%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C-2678-NumberOfSeniorCitizens.c)  |

