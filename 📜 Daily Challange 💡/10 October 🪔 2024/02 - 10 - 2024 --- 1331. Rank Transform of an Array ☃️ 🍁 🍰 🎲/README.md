# 1331. Rank Transform of an Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/rank-transform-of-an-array/description/?envType=daily-question&envId=2024-10-02"><strong>➥ ♻️ 1331 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of integers `arr`, replace each element with its rank.

### The rank represents how large the element is. The rank has the following rules:

- Rank is an integer starting from 1.

- The larger the element, the larger the rank. If two elements are equal, their rank must be the same.

- Rank should be as small as possible.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ arr = [40,10,20,30]

  ### 📤 `Output`  ➤  [4,1,2,3]

  ### 🔦 `Explanation`  ➤ 40 is the largest element. 10 is the smallest. 20 is the second smallest. 30 is the third smallest.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [100,100,100]

  ### 📤 `Output`  ➤ [1,1,1]

  ### 🔦 `Explanation` ➤  Same elements share the same rank.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  arr = [37,12,28,9,100,56,80,5,12]

  ### 📤 `Output`  ➤ [5,3,4,2,8,6,7,1,3]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **0 <= arr.length <= 10<sup>5</sup>** </br>

🔹 **-10<sup>9</sup> <= arr[i] <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/02%20-%2010%20-%202024%20---%201331.%20Rank%20Transform%20of%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201331.%20Rank%20Transform%20of%20an%20Array.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/02%20-%2010%20-%202024%20---%201331.%20Rank%20Transform%20of%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201331.%20Rank%20Transform%20of%20an%20Array.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/02%20-%2010%20-%202024%20---%201331.%20Rank%20Transform%20of%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201331.%20Rank%20Transform%20of%20an%20Array.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/02%20-%2010%20-%202024%20---%201331.%20Rank%20Transform%20of%20an%20Array%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201331.%20Rank%20Transform%20of%20an%20Array.js) |

