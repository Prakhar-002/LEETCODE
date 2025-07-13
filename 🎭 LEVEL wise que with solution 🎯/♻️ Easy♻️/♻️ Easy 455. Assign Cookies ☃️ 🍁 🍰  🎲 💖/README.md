# 455. Assign Cookies

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/assign-cookies/description/"><strong>➥ ♻️ 455 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Imagine you are a generous parent who wants to distribute cookies to your children. Each child should receive, at most, one cookie.

### Each child `i` has a "greed factor," denoted as `g[i]`. This greed factor represents the minimum size of a cookie that will satisfy the child.

### Each cookie `j` has a size denoted by `s[j]`. If `s[j] >= g[i]`, you can assign cookie `j` to child `i`, making that child content.

### The goal is to maximize the number of content children. Return the maximum number of children that you can make content by distributing cookies appropriately.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ g = [1,2,3], s = [1,1]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3.
And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content.
You need to output 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ g = [1,2], s = [1,2,3]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ You have 2 children and 3 cookies. The greed factors of 2 children are 1, 2.
You have 3 cookies and their sizes are big enough to gratify all of the children,
You need to output 2.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= g.length <= 3 * 10<sup>4</sup> </br>

🔹 0 <= s.length <= 3 * 10<sup>4</sup> </br>

🔹 1 <= g[i], s[j] <= 2<sup>31</sup> - 1 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Two Pointers**  </br>

🔸 **Greedy**  </br>

🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
