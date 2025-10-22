# 2011. Final Value of Variable After Performing Operations

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/"><strong>➥ ♻️ 2011 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is a programming language with only four operations and one variable X:

- ++X and X++ increments the value of the variable X by 1.

- --X and X-- decrements the value of the variable X by 1.

### Initially, the value of X is 0.

### Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `operations = ["--X","X++","X++"]`

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ ➺
  
  - The operations are performed as follows: Initially, X = 0.

  - --X: X is decremented by 1, X = 0 - 1 = -1.

  - X++: X is incremented by 1, X = -1 + 1 = 0.

  - X++: X is incremented by 1, X = 0 + 1 = 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `operations = ["++X","++X","X++"]`

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤
  
  - The operations are performed as follows: Initially, X = 0.

  - ++X: X is incremented by 1, X = 0 + 1 = 1.

  - ++X: X is incremented by 1, X = 1 + 1 = 2.

  - X++: X is incremented by 1, X = 2 + 1 = 3.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `operations=["X++","++X","--X","X--"]`

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` For array like the there 4 step by steps that if number reach more  number.

It all the result should is always, from, Zero

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= operations.length <= 100` </br>

🔹 `operations[i]` will be either "++X", "X++", "--X", or "X--". </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **String** </br>
🔸 **Simulation** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/20%20-%2010%20-%202025%20---%202011.%20Final%20Value%20of%20Variable%20After%20Performing%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202011.%20Final%20Value%20of%20Variable%20After%20Performing%20.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/20%20-%2010%20-%202025%20---%202011.%20Final%20Value%20of%20Variable%20After%20Performing%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202011.%20Final%20Value%20of%20Variable%20After%20Performing%20Op.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/20%20-%2010%20-%202025%20---%202011.%20Final%20Value%20of%20Variable%20After%20Performing%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202011.%20Final%20Value%20of%20Variable%20After%20Performing%20.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/20%20-%2010%20-%202025%20---%202011.%20Final%20Value%20of%20Variable%20After%20Performing%20Operations%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202011.%20Final%20Value%20of%20Variable%20After%20Perform.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/d2bab6be-64e2-4d06-9a4b-023653de3515" width = "700px" height="462px" />

</h1>
