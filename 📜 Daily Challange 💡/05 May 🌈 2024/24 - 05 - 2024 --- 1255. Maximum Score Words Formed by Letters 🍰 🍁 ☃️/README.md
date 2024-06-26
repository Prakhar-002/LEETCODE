# 1255. Maximum Score Words Formed by Letters

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-score-words-formed-by-letters/description/?envType=daily-question&envId=2024-05-24"><strong>➥ 🫀 1438 Leetcode Que  Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a list of `words`, list of  single `letters` (might be repeating) and `score` of every character.

### Return *the maximum score of `any` valid set of words formed by using the given letters (`words[i]` cannot be used two or more times)*.

### It is not necessary to use all characters in `letters` and each letter can only be used once. Score of letters `'a'`, `'b'`, `'c'`, ... ,`'z'` is given by `score[0]`, `score[1]`, ... , `score[25]` respectively.

 
</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ words = ["dog","cat","dad","good"], letters = ["a","a","c","d","d","d","g","o","o"], score = [1,0,9,5,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0]

  ### Output  ➤ 23

  ### Explanation  ➤ Score  a=1, c=9, d=5, g=3, o=2 </br> Given letters, we can form the words "dad" (5+1+5) and "good" (3+2+2+5) with a score of 23. </br>Words "dad" and "dog" only get a score of 21.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ words = ["xxxz","ax","bx","cx"], letters = ["z","a","b","c","x","x","x"], score = [4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,10]

  ### Output  ➤  27

  ### Explanation ➤ Score  a=4, b=4, c=4, x=5, z=10 </br> Given letters, we can form the words "ax" (4+5), "bx" (4+5) and "cx" (4+5) with a score of 27. </br> Word "xxxz" only get a score of 25.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ words = ["leetcode"], letters = ["l","e","t","c","o","d"], score = [0,0,1,1,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0]

  ### Output  ➤ 0

  ### Explanation  ➤ Letter "e" can only be used once.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= words.length <= 14**
- **1 <= words[i].length <= 15**
- **1 <= letters.length <= 100**
- **letters[i].length == 1**
- **score.length == 26**
- **0 <= score[i] <= 10**
- **`words[i]`, `letters[i]` contains only lower case English letters.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **String**
3. **Dynamic Programming**
4. **Backtracking**
5. **Bit Manipulation**
6. **Bitmask**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/24%20-%2005%20-%202024%20---%201255.%20Maximum%20Score%20Words%20Formed%20by%20Letters%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%8D%81JAVA_1255MaximumScoreWordsFormedByLetters.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/24%20-%2005%20-%202024%20---%201255.%20Maximum%20Score%20Words%20Formed%20by%20Letters%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%8D%B0PYTHON_1255_maximum_score_words_formed_by_letters.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/24%20-%2005%20-%202024%20---%201255.%20Maximum%20Score%20Words%20Formed%20by%20Letters%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%E2%98%83%EF%B8%8FJAVASCRIPT_1255MaximumScoreWordsFormedByLetters.js) |

