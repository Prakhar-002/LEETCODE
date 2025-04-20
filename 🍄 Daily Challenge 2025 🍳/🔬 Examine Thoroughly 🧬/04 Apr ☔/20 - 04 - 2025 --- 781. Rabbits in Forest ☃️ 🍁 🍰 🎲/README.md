# 781. Rabbits in Forest

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/rabbits-in-forest/description/?envType=daily-question&envId=2025-04-20"><strong>➥ ☢️ 781 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Imagine a forest containing an unknown number of rabbits. You pose the question "How many rabbits share your color?" to `n` of these rabbits, and gather their responses in an integer array named `answers`. Each `answers[i]` represents the answer given by the i<sup>th</sup> rabbit.

### Your task: Given this array `answers`, determine and return the *minimum* possible number of rabbits that could be living in the forest.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ answers = [1,1,2]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤

- The two rabbits that answered "1" could both be the same color, say red.

- The rabbit that answered "2" can't be red or the answers would be inconsistent.

- Say the rabbit that answered "2" was blue.

- Then there should be 2 other blue rabbits in the forest that didn't answer into the array.

- The smallest possible number of rabbits in the forest is therefore 5: 3 that answered plus 2 that didn't.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ answers = [10,10,10]

  ### 📤 `Output`  ➤ 11

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ answers = [0, 0, 1, 2]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation`  ➤ In the above 2 has one colour , where number `zero equal same therefore count can from base result` it equal 0;  for final to make sure both element in both zero color set and final result equal total number 6.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ answers = [1,2,2,3,3,3]

  ### 📤 `Output`  ➤  9

  ### 🔦 `Explanation`  ➤ We should group those number like same count together make some form valid: therefore final number must count form by each count: this operation  then perform number total with array side 40 side; and the last will have that total.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= answers.length <= 1000 </br>
🔹 0 <= answers[i] < 1000 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Math**  </br>
🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/20%20-%2004%20-%202025%20---%20781.%20Rabbits%20in%20Forest%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20781.%20Rabbits%20in%20Forest.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/20%20-%2004%20-%202025%20---%20781.%20Rabbits%20in%20Forest%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20781.%20Rabbits%20in%20Forest.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/20%20-%2004%20-%202025%20---%20781.%20Rabbits%20in%20Forest%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20781.%20Rabbits%20in%20Forest.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/04%20Apr%20%E2%98%94/20%20-%2004%20-%202025%20---%20781.%20Rabbits%20in%20Forest%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20781.%20Rabbits%20in%20Forest.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/be07d91e-a535-40a2-9ae5-7ca682159afb" width = "700px" height="462px" />

</h1>
