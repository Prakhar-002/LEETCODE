# 1552. Magnetic Force Between Two Balls

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/magnetic-force-between-two-balls/?envType=daily-question&envId=2024-06-23"><strong>➥ ☢️ 1552 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his new invented basket. Rick has `n` empty baskets, the `ith` basket is at `position[i]`, Morty has `m` balls and needs to distribute the balls into the baskets such that the **minimum magnetic force** between any two balls is **maximum**.

### Rick stated that magnetic force between two different balls at positions `x` and `y` is `|x - y|`.

### Given the integer array `position` and the integer `m`. Return the required force.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷


![1552 que](https://github.com/Prakhar-002/LEETCODE/assets/136890202/b0e07396-aacd-4a19-a371-e575ad784434)

  ### Input  ➤ position = [1,2,3,4,7], m = 3

  ### Output  ➤ 3

  ### Explanation  ➤ Distributing the 3 balls into baskets 1, 4 and 7 will make the magnetic force between ball pairs [3, 3, 6]. The minimum magnetic force is 3. We cannot achieve a larger minimum magnetic force than 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ position = [5,4,3,2,1,1000000000], m = 2

  ### Output  ➤ 999999999

  ### Explanation ➤  We can use baskets 1 and 1000000000.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **n == position.length**
- **2 <= n <= 10^5**
- **1 <= position[i] <= 10^9**
- **All integers in `position` are distinct.**
- **2 <= m <= position.length**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Binary Search**
3. **Sorting**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/20%20-%2006%20-%202024%20---%201552.%20Magnetic%20Force%20Between%20Two%20Balls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA_1552_MagneticForceBetweenTwoBalls.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/20%20-%2006%20-%202024%20---%201552.%20Magnetic%20Force%20Between%20Two%20Balls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP_1552_MagneticForceBetweenTwoBalls.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/20%20-%2006%20-%202024%20---%201552.%20Magnetic%20Force%20Between%20Two%20Balls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON_1552_MagneticForceBetweenTwoBalls.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/20%20-%2006%20-%202024%20---%201552.%20Magnetic%20Force%20Between%20Two%20Balls%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT_1552_MagneticForceBetweenTwoBalls.js) |
