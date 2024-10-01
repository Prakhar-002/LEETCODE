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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]()  |
