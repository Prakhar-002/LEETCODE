# Q3. Masking Personal Information

</br>

<h2 align="center">

<a href="https://leetcode.com/problems/masking-personal-information/?envType=problem-list-v2&envId=dsa-sequence-valley-string"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a personal information string `s`, representing either an email address or a phone number. Return the masked personal information using the below rules.

### Email address:

- An email address is:
    - A name consisting of uppercase and lowercase English letters, followed by
    - The '@' symbol, followed by
    - The domain consisting of uppercase and lowercase English letters with a dot '.' somewhere in the middle (not the first or last character).
- To mask an email:
    - The uppercase letters in the name and domain must be converted to lowercase letters.
    - The middle letters of the name (i.e., all but the first and last letters) must be replaced by 5 asterisks "*****".

### Phone number:

- A phone number is formatted as follows:
    - The phone number contains 10-13 digits.
    - The last 10 digits make up the local number.
    - The remaining 0-3 digits, in the beginning, make up the country code.
    - Separation characters from the set {'+', '-', '(', ')', ' '} separate the above digits in some way.
- To mask a phone number:
    - Remove all separation characters.
    - The masked phone number should have the form:
        - "***-***-XXXX" if the country code has 0 digits.
        - "+*-***-***-XXXX" if the country code has 1 digit.
        - "+**-***-***-XXXX" if the country code has 2 digits.
        - "+***-***-***-XXXX" if the country code has 3 digits.
        - "XXXX" is the last 4 digits of the local number.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "LeetCode@LeetCode.com"

  ### 📤 `Output`  ➤ "l*****e@leetcode.com"

  ### 🔦 `Explanation`  ➤ s is an email address. The name and domain are converted to lowercase, and the middle of the name is replaced by 5 asterisks.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "AB@qq.com"

  ### 📤 `Output`  ➤ "a*****b@qq.com"

  ### 🔦 `Explanation` ➤ s is an email address. The name and domain are converted to lowercase, and the middle of the name is replaced by 5 asterisks. Note that even though "ab" is 2 characters, it still must have 5 asterisks in the middle.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "1(234)567-890"

  ### 📤 `Output`  ➤ "***-***-7890"

  ### 🔦 `Explanation` ➤ s is a phone number. There are 10 digits, so the local number is 10 digits and the country code is 0 digits. Thus, the resulting masked number is "***-***-7890".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 s is either a valid email or a phone number. </br>
🔹 If s is an email:
    - 8 <= s.length <= 40
    - s consists of uppercase and lowercase English letters and exactly one '@' symbol and '.' symbol.
🔹 If s is a phone number:
    - 10 <= s.length <= 20
    - s consists of digits, spaces, and the symbols '(', ')', '-', and '+'.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
