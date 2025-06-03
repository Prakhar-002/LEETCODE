# 1298. Maximum Candies You Can Get from Boxes

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-candies-you-can-get-from-boxes/description/?envType=daily-question&envId=2025-06-03"><strong>➥ 🫀 1298 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are presented with `n` boxes, labeled from 0 to `n - 1`. You have information about each box:

- `status[i]`: Indicates whether the i<sup>th</sup> box is open (`1`) or closed (`0`).
- `candies[i]`:  The number of candies inside the i<sup>th</sup> box.
- `keys[i]`:  A list containing the labels of the boxes that you can open after you open the i<sup>th</sup> box.
- `containedBoxes[i]`: A list containing the labels of the boxes that you find inside the i<sup>th</sup> box.

You are given an integer array `initialBoxes` that tells you which boxes you have to begin with.

The Rules:

- You can collect all the candies within any open box you possess.
- You can use any keys found inside open boxes to open other boxes.
- You can also access the boxes found inside open boxes.

The Goal:

Return the maximum number of candies that you can collect by following these rules.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ status = [1,0,1,0], candies = [7,5,4,100], keys = [[],[],[1],[]], containedBoxes = [[1,2],[3],[],[]], initialBoxes = [0]

  ### 📤 `Output`  ➤ 16

  ### 🔦 `Explanation`  ➤ You will be initially given box 0. You will find 7 candies in it and boxes 1 and 2.
Box 1 is closed and you do not have a key for it so you will open box 2. You will find 4 candies and a key to box 1 in box 2.
In box 1, you will find 5 candies and box 3 but you will not find a key to box 3 so box 3 will remain closed.
Total number of candies collected = 7 + 4 + 5 = 16 candy.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ status = [1,0,0,0,0,0], candies = [1,1,1,1,1,1], keys = [[1,2,3,4,5],[],[],[],[],[]], containedBoxes = [[1,2,3,4,5],[],[],[],[],[]], initialBoxes = [0]

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation` ➤ You have initially box 0. Opening it you can find boxes 1,2,3,4 and 5 and their keys.
The total number of candies will be 6.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == status.length == candies.length == keys.length == containedBoxes.length </br>

🔹 1 <= n <= 1000 </br>

🔹 status[i] is either 0 or 1. </br>

🔹 1 <= candies[i] <= 1000 </br>

🔹 0 <= keys[i].length <= n </br>

🔹 0 <= keys[i][j] < n </br>

🔹 All values of keys[i] are unique. </br>

🔹 0 <= containedBoxes[i].length <= n </br>

🔹 0 <= containedBoxes[i][j] < n </br>

🔹 All values of containedBoxes[i] are unique. </br>

🔹 Each box is contained in one box at most. </br>

🔹 0 <= initialBoxes.length <= n </br>

🔹 0 <= initialBoxes[i] < n </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Breadth-First Search**  </br>

🔸 **Graph**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/03%20-%2006%20-%202025%20---%201298.%20Maximum%20Candies%20You%20Can%20Get%20from%20Boxes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201298.%20Maximum%20Candies%20You%20Can%20Get%20from%20Boxes.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/03%20-%2006%20-%202025%20---%201298.%20Maximum%20Candies%20You%20Can%20Get%20from%20Boxes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201298.%20Maximum%20Candies%20You%20Can%20Get%20from%20Boxes.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/03%20-%2006%20-%202025%20---%201298.%20Maximum%20Candies%20You%20Can%20Get%20from%20Boxes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201298.%20Maximum%20Candies%20You%20Can%20Get%20from%20Boxes.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/03%20-%2006%20-%202025%20---%201298.%20Maximum%20Candies%20You%20Can%20Get%20from%20Boxes%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201298.%20Maximum%20Candies%20You%20Can%20Get%20from%20Boxes.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/357e0475-6842-4085-aec1-2df0a5cc9b20" width = "700px" height="462px" />

</h1>
