# 1598. Crawler Log Folder

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/crawler-log-folder/description/?envType=daily-question&envId=2024-07-10"><strong>➥ ♻️ 1438 Leetcode Que Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### The Leetcode file system keeps a log each time some user performs a change folder operation.

### The operations are described below:

- `"../"` ➺ Move to the parent folder of the current folder. (If you are already in the main folder, `remain in the same folder`).

- `"./"` ➺ Remain in the same folder.

- `"x/"` ➺ Move to the child folder named `x` (This folder is `guaranteed to always exist`).

### You are given a list of strings `logs` where `logs[i]` is the operation performed by the user at the `i`<sup>`th`</sup> step.

### The file system starts in the main folder, then the operations in `logs` are performed.

### Return *the minimum number of operations needed to go back to the main folder after the change folder operations*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1598 que 1](https://github.com/Prakhar-002/LEETCODE/assets/136890202/0daa19ac-8f7e-41d5-aa52-94654907739b)

  ### 📥 Input  ➤ logs = ["d1/","d2/","../","d21/","./"]

  ### 📤 Output  ➤ 2

  ### 🔦 Explanation  ➤ Use this change folder operation "../" 2 times and go back to the main folder.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![1598 que 2](https://github.com/Prakhar-002/LEETCODE/assets/136890202/8f133a73-140d-46c3-952c-18892e12a55f)

  ### 📥 Input ➤ logs = ["d1/","d2/","./","d3/","../","d31/"]

  ### 📤 Output  ➤ 3

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ logs = ["d1/","../","../","../"]

  ### 📤 Output  ➤ 0

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= logs.length <= 10<sup>3</sup>** </br>
🔹 **2 <= logs[i].length <= 10** </br>
🔹 **`logs[i]` contains lowercase English letters, digits, `'.'`, and `'/'`.** </br>
🔹 **`logs[i]` follows the format described in the statement.** </br>
🔹 **Folder names consist of lowercase English letters and digits.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **String**  </br>
🔸 **Stack**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/10%20-%2007%20-%202024%20---%201598.%20Crawler%20Log%20Folder%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA-1598-CrawlerLogFolder.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/10%20-%2007%20-%202024%20---%201598.%20Crawler%20Log%20Folder%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP-1598-CrawlerLogFolder.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/10%20-%2007%20-%202024%20---%201598.%20Crawler%20Log%20Folder%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON-1598-CrawlerLogFolder.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/10%20-%2007%20-%202024%20---%201598.%20Crawler%20Log%20Folder%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT-1598-CrawlerLogFolder.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/10%20-%2007%20-%202024%20---%201598.%20Crawler%20Log%20Folder%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C-1598-CrawlerLogFolder.c)  |
