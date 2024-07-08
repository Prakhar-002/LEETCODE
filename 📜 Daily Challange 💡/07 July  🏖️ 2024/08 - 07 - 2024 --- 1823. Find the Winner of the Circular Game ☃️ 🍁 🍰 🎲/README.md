# 1823. Find the Winner of the Circular Game

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/?envType=daily-question&envId=2024-07-08"><strong>➥ ☢️ 1823 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` friends that are playing a game. The friends are sitting in a circle and are numbered from `1` to `n` in clockwise order. More formally, moving clockwise from the i<sup>th</sup> friend brings you to the (i+1)<sup>th</sup> friend for `1 <= i < n`, and moving clockwise from the n<sup></sup>th friend brings you to the 1<sup>st</sup> friend.

### The rules of the game are as follows:

1. **Start** at the 1<sup>st</sup> friend.

2. Count the next `k` friends in the clockwise direction **including** the friend you started at. The counting wraps around the circle and may count some friends more than once.

3. The last friend you counted leaves the circle and loses the game.

4. If there is still more than one friend in the circle, go back to step `2` **starting** from the friend **immediately clockwise** of the friend who just lost and repeat.

5. Else, the last friend in the circle wins the game.

### Given the number of friends, `n`, and an integer `k`, return *the winner of the game*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1823 que 1](https://github.com/Prakhar-002/LEETCODE/assets/136890202/51b1c0cf-077b-4c61-b978-1bab6493794e)

  ### 📥 Input  ➤ n = 5, k = 2

  ### 📤 Output  ➤ 3

  ### 🔦 Explanation  ➤ Here are the steps of the game:

    1 ➺ Start at friend 1.
    
    2 ➺ Count 2 friends clockwise, which are friends 1 and 2.
    
    3 ➺ Friend 2 leaves the circle. Next start is friend 3.
    
    4 ➺ Count 2 friends clockwise, which are friends 3 and 4.
    
    5 ➺ Friend 4 leaves the circle. Next start is friend 5.
    
    6 ➺ Count 2 friends clockwise, which are friends 5 and 1.
    
    7 ➺ Friend 1 leaves the circle. Next start is friend 3.
    
    8 ➺ Count 2 friends clockwise, which are friends 3 and 5.
    
    9 ➺ Friend 5 leaves the circle. Only friend 3 is left, so they are the winner.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ n = 6, k = 5

  ### 📤 Output  ➤ 1

  ### 🔦 Explanation ➤ The friends leave in this order: 5, 4, 6, 2, 3. The winner is friend 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= k <= n <= 500** </br>

</br>

# Follow up 🧠  ˋ°•*⁀➷

### Could you solve this problem in linear time with constant space?

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Recursion**  </br>
🔸 **Queue**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/08%20-%2007%20-%202024%20---%201823.%20Find%20the%20Winner%20of%20the%20Circular%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1823-FindTheWinnerOfTheCircularGame.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/08%20-%2007%20-%202024%20---%201823.%20Find%20the%20Winner%20of%20the%20Circular%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1823-FindTheWinnerOfTheCircularGame.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/08%20-%2007%20-%202024%20---%201823.%20Find%20the%20Winner%20of%20the%20Circular%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1823-FindTheWinnerOfTheCircularGame.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/08%20-%2007%20-%202024%20---%201823.%20Find%20the%20Winner%20of%20the%20Circular%20Game%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1823-FindTheWinnerOfTheCircularGame.js) |
