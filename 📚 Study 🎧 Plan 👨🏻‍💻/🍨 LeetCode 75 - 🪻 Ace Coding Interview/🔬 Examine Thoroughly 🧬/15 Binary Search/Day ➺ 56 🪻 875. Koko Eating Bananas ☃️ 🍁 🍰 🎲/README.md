# 875. Koko Eating Bananas

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/koko-eating-bananas/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 875 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Koko has a banana-eating obsession! There are `n` piles of bananas, and the i<sup>th</sup> pile has `piles[i]` bananas. The guards are temporarily gone but will return in `h` hours.

### Koko needs to decide on her bananas-per-hour eating speed, denoted by `k`. Each hour, she selects a pile of bananas and eats `k` bananas from it. If a pile contains less than `k` bananas, she consumes all of them and will not eat any more bananas during that hour.

### Koko enjoys eating at a leisurely pace, but she also needs to devour all the bananas *before* the guards come back.

### Your task: Return the minimum integer value of `k` (bananas per hour) such that Koko can finish eating all the bananas within `h` hours.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ piles = [3,6,7,11], h = 8

  ### 📤 `Output`  ➤ 4

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ piles = [30,11,23,4,20], h = 5

  ### 📤 `Output`  ➤ 30

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ piles = [30,11,23,4,20], h = 6

  ### 📤 `Output`  ➤ 23

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= piles.length <= 10<sup>4</sup> </br>

🔹 piles.length <= h <= 10<sup>9</sup> </br>

🔹 1 <= piles[i] <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Binary Search**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2056%20%F0%9F%AA%BB%20875.%20Koko%20Eating%20Bananas%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20875.%20Koko%20Eating%20Bananas.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2056%20%F0%9F%AA%BB%20875.%20Koko%20Eating%20Bananas%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20875.%20Koko%20Eating%20Bananas.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2056%20%F0%9F%AA%BB%20875.%20Koko%20Eating%20Bananas%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20875.%20Koko%20Eating%20Bananas.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2056%20%F0%9F%AA%BB%20875.%20Koko%20Eating%20Bananas%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20875.%20Koko%20Eating%20Bananas.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/88a37f9f-ee72-494a-b33d-d318e8004f96" width = "700px" height="462px" />

</h1>
