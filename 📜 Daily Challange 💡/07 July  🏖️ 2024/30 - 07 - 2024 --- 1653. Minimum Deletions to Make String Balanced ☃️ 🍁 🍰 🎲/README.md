# 1653. Minimum Deletions to Make String Balanced

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/description/?envType=daily-question&envId=2024-07-30"><strong>➥ ☢️ 1653 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `s` consisting only of characters `'a'` and `'b'`​​​​.

### You can delete any number of characters in `s` to make `s` `balanced`. `s` is `balanced` if there is no pair of indices `(i,j)` such that `i < j` and `s[i] = 'b'` and `s[j]= 'a'`.

### Return *the `minimum` number of deletions needed to make `s` `balanced`*.

 

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ s = "aababbab"

  ### 📤 Output  ➤ 2

  ### 🔦 Explanation  ➤ You can either ➺
    Delete the characters at 0-indexed positions 2 and 6 ("aababbab" -> "aaabbb"), 
    
    or
    
    Delete the characters at 0-indexed positions 3 and 6 ("aababbab" -> "aabbbb").

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ s = "bbaaaaabb"

  ### 📤 Output  ➤ 2

  ### 🔦 Explanation ➤ The only solution is to delete the first two characters.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= s.length <= 10<sup>5</sup>** </br>
🔹 **`s[i]` is `'a'` or `'b'`​​.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **String**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Stack**  </br>


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
