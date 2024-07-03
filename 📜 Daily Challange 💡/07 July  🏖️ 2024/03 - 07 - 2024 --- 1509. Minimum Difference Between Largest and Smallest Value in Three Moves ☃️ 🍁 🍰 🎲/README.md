# 1509. Minimum Difference Between Largest and Smallest Value in Three Moves

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/description/?envType=daily-question&envId=2024-07-03"><strong>➥ ☢️ 1509 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`.

### In one move, you can choose one element of `nums` and change it to `any value`.

### Return *the minimum difference between the largest and smallest value of `nums` `after performing at most three moves`*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ nums = [5,3,2,4]

  ### 📤 Output  ➤ 0

  ### 🔦 Explanation  ➤ We can make at most 3 moves.</br> In the first move, change 2 to 3. nums becomes [5,3,3,4].</br> In the second move, change 4 to 3. nums becomes [5,3,3,3].</br> In the third move, change 5 to 3. nums becomes [3,3,3,3].</br> After performing 3 moves, the difference between the minimum and maximum is 3 - 3 = 0.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ nums = [1,5,0,10,14]

  ### 📤 Output  ➤ 1

  ### 🔦 Explanation ➤ We can make at most 3 moves.</br> In the first move, change 5 to 0. nums becomes [1,0,0,10,14].</br> In the second move, change 10 to 0. nums becomes [1,0,0,0,14].</br> In the third move, change 14 to 1. nums becomes [1,0,0,0,1].</br> After performing 3 moves, the difference between the minimum and maximum is 1 - 0 = 1.</br> It can be shown that there is no way to make the difference 0 in 3 moves.



</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ nums = [3,100,20]

  ### 📤 Output  ➤ 0

  ### 🔦 Explanation  ➤ We can make at most 3 moves.</br> In the first move, change 100 to 7. nums becomes [3,7,20].</br> In the second move, change 20 to 7. nums becomes [3,7,7].</br> In the third move, change 3 to 7. nums becomes [7,7,7].</br> After performing 3 moves, the difference between the minimum and maximum is 7 - 7 = 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>
🔹 **-10<sup>9</sup>  <= nums[i] <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>
🔸 **Sorting**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/03%20-%2007%20-%202024%20---%201509.%20Minimum%20Difference%20Between%20Largest%20and%20Smallest%20Value%20in%20Three%20Moves%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1509-MinimumDifferenceBetweenLargestandSmall.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/03%20-%2007%20-%202024%20---%201509.%20Minimum%20Difference%20Between%20Largest%20and%20Smallest%20Value%20in%20Three%20Moves%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1509-MinimumDifferenceBetweenLargestandSmall.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/03%20-%2007%20-%202024%20---%201509.%20Minimum%20Difference%20Between%20Largest%20and%20Smallest%20Value%20in%20Three%20Moves%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1509-MinimumDifferenceBetweenLargestandSmall.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/03%20-%2007%20-%202024%20---%201509.%20Minimum%20Difference%20Between%20Largest%20and%20Smallest%20Value%20in%20Three%20Moves%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1509-MinimumDifferenceBetweenLargestandSmall.js) |
