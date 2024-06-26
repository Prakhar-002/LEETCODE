# 140. Word Break II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/word-break-ii/?envType=daily-question&envId=2024-05-24"><strong>➥ 🫀 140 Leetcode Que Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a string s and a dictionary of strings `wordDict`, add spaces in s to construct a sentence where each word is a valid dictionary word. Return all such possible sentences in `any order`.

### Note that the same word in the dictionary may be reused multiple times in the segmentation.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ s = "catsanddog", wordDict = ["cat","cats","and","sand","dog"]

  ### Output  ➤ ["cats and dog","cat sand dog"]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ s = "pineapplepenapple", wordDict = ["apple","pen","applepen","pine","pineapple"]

  ### Output  ➤ ["pine apple pen apple","pineapple pen apple","pine applepen apple"]

  ### Explanation ➤  Note that you are allowed to reuse a dictionary word.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]

  ### Output  ➤ []

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= s.length <= 20**
- **1 <= wordDict.length <= 1000**
- **1 <= wordDict[i].length <= 10**
- **`s` and `wordDict[i]` consist of only lowercase English letters.**
- **All the strings of `wordDict` are `unique`.**
- **Input is generated in a way that the length of the answer doesn't exceed 10^5.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Hash Table**
3. **String**
4. **Dynamic Programming**
5. **Backtracking**
6. **Trie**
7. **Memoization**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/25%20-%2005%20-%202024%20---%20140.%20Word%20Break%20II%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%8D%81JAVA_140.WordBreakII.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/25%20-%2005%20-%202024%20---%20140.%20Word%20Break%20II%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%8D%B0PYTHON_140.WordBreakII.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/25%20-%2005%20-%202024%20---%20140.%20Word%20Break%20II%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%E2%98%83%EF%B8%8FJAVASCRIPT_140.WordBreakII.js) |

