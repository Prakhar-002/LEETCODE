# 1431. Kids With the Greatest Number of Candies

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ♻️ 1431 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` kids with candies. You are given an integer array `candies`, where each `candies[i]` represents the number of candies the `i-th` kid has, and an integer `extraCandies`, denoting the number of extra candies that you have.

### Return *a boolean array `result` of length `n`, where `result[i]` is true if, after giving the `i-th` kid all the `extraCandies`, they will have the `greatest` number of candies among all the kids, or false otherwise*.

### Note that `multiple` kids can have the `greatest` number of candies.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ candies = [2,3,5,1,3], extraCandies = 3

  ### 📤 `Output`  ➤ [true,true,true,false,true]

  ### 🔦 `Explanation`  ➤ If you give all extraCandies to ➺

    ➺ Kid 1, they will have 2 + 3 = 5 candies, which is the greatest among the kids.
    ➺ Kid 2, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
    ➺ Kid 3, they will have 5 + 3 = 8 candies, which is the greatest among the kids.
    ➺ Kid 4, they will have 1 + 3 = 4 candies, which is not the greatest among the kids.
    ➺ Kid 5, they will have 3 + 3 = 6 candies, which is the greatest among the kids.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ candies = [4,2,1,1,2], extraCandies = 1

  ### 📤 `Output`  ➤ [true,false,false,false,false] 

  ### 🔦 `Explanation` ➤ There is only 1 extra candy.
Kid 1 will always have the greatest number of candies, even if a different kid is given the extra candy.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ candies = [12,1,12], extraCandies = 10

  ### 📤 `Output`  ➤ [true,false,true]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == candies.length`** </br>

🔹 **`2 <= n <= 100`** </br>

🔹 **`1 <= candies[i] <= 100`** </br>

🔹 **`1 <= extraCandies <= 50`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |



