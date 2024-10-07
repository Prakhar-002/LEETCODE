# 2696. Minimum String Length After Removing Substrings

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-string-length-after-removing-substrings/description/?envType=daily-question&envId=2024-10-07"><strong>➥ ♻️ 2696 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s` consisting only of `uppercase` English letters.

### You can apply some operations to this string where, in one operation, you can remove any occurrence of one of the substrings `"AB"` or `"CD"` from `s`.

### Return *the `minimum` possible length of the resulting string that you can obtain*.

### `Note` that the string concatenates after removing the substring and could produce new `"AB"` or `"CD"` substrings.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "ABFCACDB"

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤We can do the following operations:

    ➺ Remove the substring "`AB`FCACDB", so s = "FCACDB".
    ➺ Remove the substring "FCA`CD`B", so s = "FCAB".
    ➺ Remove the substring "FC`AB`", so s = "FC".
    So the resulting length of the string is 2.
    It can be shown that it is the minimum length that we can obtain.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "ACBBD"

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ We cannot do any operations on the string so the length remains the same.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= s.length <= 100`** </br>

🔹 **`s` consists only of uppercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Stack**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/07%20-%2010%20-%202024%20---%202696.%20Minimum%20String%20Length%20After%20Removing%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202696.%20Minimum%20String%20Length%20After%20Removing%20Substrings.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/07%20-%2010%20-%202024%20---%202696.%20Minimum%20String%20Length%20After%20Removing%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202696.%20Minimum%20String%20Length%20After%20Removing%20Substrings.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/07%20-%2010%20-%202024%20---%202696.%20Minimum%20String%20Length%20After%20Removing%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202696.%20Minimum%20String%20Length%20After%20Removing%20Substrings.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/07%20-%2010%20-%202024%20---%202696.%20Minimum%20String%20Length%20After%20Removing%20Substrings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202696.%20Minimum%20String%20Length%20After%20Removing%20Substrings.js) |

