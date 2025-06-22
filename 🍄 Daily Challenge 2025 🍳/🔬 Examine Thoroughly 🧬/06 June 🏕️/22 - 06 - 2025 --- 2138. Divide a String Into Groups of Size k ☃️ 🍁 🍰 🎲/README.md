# 2138. Divide a String Into Groups of Size k

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/description/?envType=daily-question&envId=2025-06-22"><strong>➥ ♻️ 2138 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s`, an integer `k`, and a character `fill`. Your task is to partition the string `s` into groups of size `k` using the following process:

1. The first group consists of the first `k` characters of the string, the second group consists of the next `k` characters, and so on. Each character from the string `s` can belong to only one group.
2. If the last group has fewer than `k` characters remaining in `s`, use the character `fill` to complete that group, padding it with `fill` characters until it has a length of `k`.

### Note: After removing the `fill` characters (if any) from the last group and concatenating all of the groups in order, the resultant string must be equal to the original string `s`.

### Your function should return a string array representing the composition of every group that `s` has been divided into.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "abcdefghi", k = 3, fill = "x"

  ### 📤 `Output`  ➤ ["abc","def","ghi"]

  ### 🔦 `Explanation`  ➤
The first 3 characters "abc" form the first group.
The next 3 characters "def" form the second group.
The last 3 characters "ghi" form the third group.
Since all groups can be completely filled by characters from the string, we do not need to use fill.
Thus, the groups formed are "abc", "def", and "ghi".

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "abcdefghij", k = 3, fill = "x"

  ### 📤 `Output`  ➤ ["abc","def","ghi","jxx"]

  ### 🔦 `Explanation` ➤
Similar to the previous example, we are forming the first three groups "abc", "def", and "ghi".
For the last group, we can only use the character 'j' from the string. To complete this group, we add 'x' twice.
Thus, the 4 groups formed are "abc", "def", "ghi", and "jxx".

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= s.length <= 100 </br>

🔹 s consists of lowercase English letters only. </br>

🔹 1 <= k <= 100 </br>

🔹 fill is a lowercase English letter. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>

🔸 **Simulation**  </br>

</br>


# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/22%20-%2006%20-%202025%20---%202138.%20Divide%20a%20String%20Into%20Groups%20of%20Size%20k%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202138.%20Divide%20a%20String%20Into%20Groups%20of%20Size%20k.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/22%20-%2006%20-%202025%20---%202138.%20Divide%20a%20String%20Into%20Groups%20of%20Size%20k%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202138.%20Divide%20a%20String%20Into%20Groups%20of%20Size%20k.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/22%20-%2006%20-%202025%20---%202138.%20Divide%20a%20String%20Into%20Groups%20of%20Size%20k%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202138.%20Divide%20a%20String%20Into%20Groups%20of%20Size%20k.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/22%20-%2006%20-%202025%20---%202138.%20Divide%20a%20String%20Into%20Groups%20of%20Size%20k%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202138.%20Divide%20a%20String%20Into%20Groups%20of%20Size%20k.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/14a63c82-b74f-4d11-ae80-640de08552d1" width = "700px" height="462px" />

</h1>