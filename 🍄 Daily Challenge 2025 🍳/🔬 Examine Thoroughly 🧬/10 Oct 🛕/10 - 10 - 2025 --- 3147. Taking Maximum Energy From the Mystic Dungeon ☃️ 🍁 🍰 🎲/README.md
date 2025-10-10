# 3147. Taking Maximum Energy From the Mystic Dungeon

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon/description/?envType=daily-question&envId=2025-10-10"><strong>➥ ☢️ 3147 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### In a mystic dungeon, `n` magicians are standing in a line. Each magician has an attribute that gives you energy. Some magicians can give you negative energy, which means taking energy from you.

### You have been cursed in such a way that after absorbing energy from magician `i`, you will be instantly transported to magician `(i + k)`. This process will be repeated until you reach the magician where `(i + k)` does not exist.

### In other words, you will choose a starting point and then teleport with `k` jumps until you reach the end of the magicians' sequence, absorbing all the energy during the journey.

### You are given an array `energy` and an integer `k`. Return the maximum possible energy you can gain.

### Note that when you are reach a magician, you must take energy from them, whether it is negative or positive energy.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `energy = [5,2,-10,-5,1], k = 3`

  ### 📤 `Output`  ➤ `3`

  ### 🔦 `Explanation`  ➤ ➺

  - We can gain a total energy of 3 by starting from magician 1 absorbing 2 + 1 = 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `energy = [-2,-3,-1], k = 2`

  ### 📤 `Output`  ➤ `-1`

  ### 🔦 `Explanation`  ➤ ➺

  - We can gain a total energy of -1 by starting from magician 2.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= energy.length <= 10^5` </br>
🔹 `-1000 <= energy[i] <= 1000` </br>
🔹 `1 <= k <= energy.length - 1` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Prefix Sum** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
