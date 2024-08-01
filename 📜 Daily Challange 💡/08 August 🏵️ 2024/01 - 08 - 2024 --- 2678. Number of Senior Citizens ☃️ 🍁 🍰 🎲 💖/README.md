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

  ### 📥 Input  ➤ details = ["7868190130M7522","5303914400F9211","9273338290F4010"]

  ### 📤 Output  ➤ 2

  ### 🔦 Explanation  ➤  The passengers at indices 0, 1, and 2 have ages 75, 92, and 40. Thus, there are 2 people who are over 60 years old.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ details = ["1313579440F2036","2921522980M5644"]

  ### 📤 Output  ➤ 0

  ### 🔦 Explanation ➤  None of the passengers are older than 60.


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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]()  |
