# 1497. Check If Array Pairs Are Divisible by k

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/description/?envType=daily-question&envId=2024-10-01"><strong>➥ ☢️ 1497 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of integers `arr` of even length `n` and an integer `k`.

### We want to divide the array into exactly `n / 2` pairs such that the sum of each pair is divisible by `k`.

### Return *`true` If you can find a way to do that or `false` otherwise*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ arr = [1,2,3,4,5,10,6,7,8,9], k = 5

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ Pairs are (1,9),(2,8),(3,7),(4,6) and (5,10).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [1,2,3,4,5,6], k = 7

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation` ➤ Pairs are (1,6),(2,5) and(3,4).


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [1,2,3,4,5,6], k = 10

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation`  ➤ You can try all possible pairs to see that there is no way to divide arr into 3 pairs each with sum divisible by 10.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`arr.length == n`** </br>

🔹 **1 <= n <= 10<sup>5</sup>** </br>

🔹 **`n` is even.** </br>

🔹 **-10<sup>9</sup> <= arr[i] <= 10<sup>9</sup>** </br>

🔹 **1 <= k <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/01%20-%2010%20-%202024%20---%201497.%20Check%20If%20Array%20Pairs%20Are%20Divisible%20by%20k%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201497.%20Check%20If%20Array%20Pairs%20Are%20Divisible%20by%20k.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/01%20-%2010%20-%202024%20---%201497.%20Check%20If%20Array%20Pairs%20Are%20Divisible%20by%20k%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201497.%20Check%20If%20Array%20Pairs%20Are%20Divisible%20by%20k.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/01%20-%2010%20-%202024%20---%201497.%20Check%20If%20Array%20Pairs%20Are%20Divisible%20by%20k%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201497.%20Check%20If%20Array%20Pairs%20Are%20Divisible%20by%20k.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/01%20-%2010%20-%202024%20---%201497.%20Check%20If%20Array%20Pairs%20Are%20Divisible%20by%20k%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201497.%20Check%20If%20Array%20Pairs%20Are%20Divisible%20by%20k.js) |

