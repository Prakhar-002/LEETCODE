# 1733. Minimum Number of People to Teach

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-people-to-teach/description/?envType=daily-question&envId=2025-09-10"><strong>➥ ☢️ 1733 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### On a social network consisting of m users and some friendships between users, two users can communicate with each other if they know a common language.

### You are given an integer n, an array languages, and an array friendships where:

- There are n languages numbered 1 through n,

- languages[i] is the set of languages the i​​​​​​th​​​​ user knows, and

- friendships[i] = [u​​​​​​i​​​, v​​​​​​i] denotes a friendship between the users u​​​​​​​​​​​i​​​​​ and vi.

### You can choose one language and teach it to some users so that all friends can communicate with each other. Return the minimum number of users you need to teach.

### Note that friendships are not transitive, meaning if x is a friend of y and y is a friend of z, this doesn't guarantee that x is a friend of z.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `n = 2, languages = [[1],[2],[1,2]], friendships = [[1,2],[1,3],[2,3]]`

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ ➺

  - You can either teach user 1 the second language or user 2 the first language.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `n = 3, languages = [[2],[1,3],[1,2],[3]], friendships = [[1,4],[1,2],[3,4],[2,3]]`

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤

  - Teach the third language to users 1 and 3, yielding two users to teach.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `n=4 languages =[[1],[2],[3],[4]], friendships =[[1,2],[2,3],[3,4],[1,4]]`

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ For all number where all single . then four must assign in teach such in such and such logic all for to the algorithm for 4 in 4 . result

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= n <= 500` </br>

🔹 `languages.length == m` </br>

🔹 `1 <= m <= 500` </br>

🔹 `1 <= languages[i].length <= n` </br>

🔹 `1 <= languages[i][j] <= n` </br>

🔹 `1 <= u​​​​​​i < v​​​​​​i <= languages.length` </br>

🔹 `1 <= friendships.length <= 500` </br>

🔹 All tuples (u​​​​​i, v​​​​​​i) are unique </br>

🔹 `languages[i]` contains only unique values </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Greedy** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
