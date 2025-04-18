# 38. Count and Say

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-and-say/description/?envType=daily-question&envId=2025-04-18"><strong>➥ ☢️ 38 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### The count-and-say sequence is a sequence of digit strings defined by the following recursive formula:

- `countAndSay(1) = "1"`
- `countAndSay(n)` is the run-length encoding of `countAndSay(n - 1)`.

### Run-length encoding (RLE) is a string compression method that works by replacing consecutive, identical characters (repeated 2 or more times) with the concatenation of the character and the number representing the count of the characters (length of the run).

### For instance, to compress the string "3322251" using RLE, we'd do the following:

- Replace "33" with "23".
- Replace "222" with "32".
- Replace "5" with "15".
- Replace "1" with "11".

### Therefore, the compressed string would become "23321511".

### Your task: Given a positive integer `n`, you are to return the nth element of the count-and-say sequence.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 4

  ### 📤 `Output`  ➤ "1211"

  ### 🔦 `Explanation`  ➤

- countAndSay(1) = "1"
- countAndSay(2) = RLE of "1" = "11"
- countAndSay(3) = RLE of "11" = "21"
- countAndSay(4) = RLE of "21" = "1211"

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 1

  ### 📤 `Output`  ➤ "1"

  ### 🔦 `Explanation` ➤ This is the base case.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 5

  ### 📤 `Output`  ➤ "111221"

  ### 🔦 `Explanation`  ➤RLE from one iteration to another number string iteration happen with that iteration result equal return it;

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 6

  ### 📤 `Output`  ➤ "312211"

  ### 🔦 `Explanation`  ➤ if put "312211 then run legnth enclodin and count each from those, which would equal; RLE process

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= n <= 30 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/18%20-%2004%20-%202025%20---%2038.%20Count%20and%20Say%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%2038.%20Count%20and%20Say.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/18%20-%2004%20-%202025%20---%2038.%20Count%20and%20Say%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%2038.%20Count%20and%20Say.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/18%20-%2004%20-%202025%20---%2038.%20Count%20and%20Say%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%2038.%20Count%20and%20Say.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/18%20-%2004%20-%202025%20---%2038.%20Count%20and%20Say%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2038.%20Count%20and%20Say.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/c584e33f-a695-4cee-bcc4-b1c35bca9833" width = "700px" height="462px" />

</h1>
