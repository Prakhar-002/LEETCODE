# 1894. Find the Student that Will Replace the Chalk

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk/description/?envType=daily-question&envId=2024-09-02"><strong>➥ ☢️ 1894 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` students in a class numbered from `0` to `n - 1`. The teacher will give each student a problem starting with the student number `0`, then the student number `1`, and so on until the teacher reaches the student number `n - 1`. After that, the teacher will restart the process, starting with the student number `0` again.

### You are given a `0-indexed` integer array `chalk` and an integer `k`. There are initially `k` pieces of chalk. When the student number `i` is given a problem to solve, they will use `chalk[i]` pieces of chalk to solve that problem. However, if the current number of chalk pieces is `strictly less` than `chalk[i]`, then the student number `i` will be asked to `replace` the chalk.

### Return *the `index` of the student that will `replace` the chalk pieces*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  chalk = [5,1,5], k = 22

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ The students go in turns as follows:
    ➺ Student number 0 uses 5 chalk, so k = 17.

    ➺ Student number 1 uses 1 chalk, so k = 16.

    ➺ Student number 2 uses 5 chalk, so k = 11.

    ➺ Student number 0 uses 5 chalk, so k = 6.

    ➺ Student number 1 uses 1 chalk, so k = 5.

    ➺ Student number 2 uses 5 chalk, so k = 0.

    Student number 0 does not have enough chalk, so they will have to replace it.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ chalk = [3,4,1,2], k = 25

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ The students go in turns as follows:
    ➺ Student number 0 uses 3 chalk so k = 22.

    ➺ Student number 1 uses 4 chalk so k = 18.

    ➺ Student number 2 uses 1 chalk so k = 17.

    ➺ Student number 3 uses 2 chalk so k = 15.

    ➺ Student number 0 uses 3 chalk so k = 12.

    ➺ Student number 1 uses 4 chalk so k = 8.

    ➺ Student number 2 uses 1 chalk so k = 7.

    ➺ Student number 3 uses 2 chalk so k = 5.

    ➺ Student number 0 uses 3 chalk so k = 2.

    Student number 1 does not have enough chalk, so they will have to replace it.


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`chalk.length == n`** </br>

🔹 **1 <= n <= 10<sup>5</sup>** </br>

🔹 **1 <= chalk[i] <= 10<sup>5</sup>** </br>

🔹 **1 <= k <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Simulation**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

