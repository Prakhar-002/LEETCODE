# 2559. Count Vowel Strings in Ranges

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-vowel-strings-in-ranges/description/?envType=daily-question&envId=2025-01-02"><strong>➥ ☢️ 2559 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed array of strings `words` and a 2D array of integers `queries`.

### Each query queries[i] = [l<sub>i</sub> , r<sub>i</sub> ] asks us to find the number of strings present in the range l<sub>i</sub> to r<sub>i</sub> (both inclusive) of `words` that start and end with a vowel.

### Return *an array `ans` of size `queries.length`, where `ans[i]` is the answer to the `i`<sup>th</sup> query*.

### Note that the vowel letters are `'a'`, `'e'`, `'i'`, `'o'`, and `'u'`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ words = ["aba","bcb","ece","aa","e"], queries = [[0,2],[1,4],[1,1]]

  ### 📤 `Output`  ➤ [2,3,0]

  ### 🔦 `Explanation`  ➤ The strings starting and ending with a vowel are "aba", "ece", "aa" and "e".

    The answer to the query [0,2] is 2 (strings "aba" and "ece").
    to query [1,4] is 3 (strings "ece", "aa", "e").
    to query [1,1] is 0.
    We return [2,3,0].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ words = ["a","e","i"], queries = [[0,2],[0,1],[2,2]]

  ### 📤 `Output`  ➤ [3,2,1]

  ### 🔦 `Explanation` ➤ Every string satisfies the conditions, so we return [3,2,1].

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= words.length <= 10<sup>5</sup>** </br>

🔹 **`1 <= words[i].length <= 40`** </br>

🔹 **words[i] consists only of lowercase English letters.** </br>

🔹 **sum(words[i].length) <= 3 * 10<sup>5</sup>** </br>

🔹 **1 <= queries.length <= 10<sup>5</sup>** </br>

🔹 **0 <= l<sub>i</sub> <= r<sub>i</sub> < words.length** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **String**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/02%20-%2001%20-%202025%20---%20%202559.%20Count%20Vowel%20Strings%20in%20Ranges%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202559.%20Count%20Vowel%20Strings%20in%20Ranges.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/02%20-%2001%20-%202025%20---%20%202559.%20Count%20Vowel%20Strings%20in%20Ranges%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202559.%20Count%20Vowel%20Strings%20in%20Ranges.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/02%20-%2001%20-%202025%20---%20%202559.%20Count%20Vowel%20Strings%20in%20Ranges%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202559.%20Count%20Vowel%20Strings%20in%20Ranges.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/02%20-%2001%20-%202025%20---%20%202559.%20Count%20Vowel%20Strings%20in%20Ranges%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202559.%20Count%20Vowel%20Strings%20in%20Ranges.js) |
