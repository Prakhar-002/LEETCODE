# Q2. Stream of Characters

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/stream-of-characters/description/?envType=problem-list-v2&envId=ssd-ssd2-data-stream-processing"><strong>➥ 🫀 Q2 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design an algorithm that accepts a stream of characters and checks if a suffix of this stream is equal to some string in a given array of strings `words`. 

### For example, if `words = ["abc", "xyz"]` and the stream has received the characters `'a'`, `'x'`, `'y'`, `'z'` one by one, then the current stream `"axyz"` has suffix `"xyz"`, which matches an element of `words`.

### Implement the `StreamChecker` class: 

- `StreamChecker(String[] words)` initializes the object with the array of words `words`.  

- `boolean query(char letter)` adds a new character to the end of the stream and returns `true` if any non-empty suffix of the stream forms a word in `words`, otherwise returns `false`. 

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ["StreamChecker", "query", "query", "query", "query", "query", "query", "query", "query", "query", "query", "query", "query"]

### [[["cd", "f", "kl"]], ["a"], ["b"], ["c"], ["d"], ["e"], ["f"], ["g"], ["h"], ["i"], ["j"], ["k"], ["l"]]

  ### 📤 `Output`  ➤ [null, false, false, false, true, false, true, false, false, false, false, false, true]

  ### 🔦 `Explanation`  ➤ 

```Js
StreamChecker streamChecker = new StreamChecker(["cd", "f", "kl"]);
streamChecker.query("a"); // return False
streamChecker.query("b"); // return False
streamChecker.query("c"); // return False
streamChecker.query("d"); // return True, because 'cd' is in the wordlist
streamChecker.query("e"); // return False
streamChecker.query("f"); // return True, because 'f' is in the wordlist
streamChecker.query("g"); // return False
streamChecker.query("h"); // return False
streamChecker.query("i"); // return False
streamChecker.query("j"); // return False
streamChecker.query("k"); // return False
streamChecker.query("l"); // return True, because 'kl' is in the wordlist
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= words.length <= 2000** </br>

🔹 **1 <= words[i].length <= 200** </br>

🔹 **words[i] consists of lowercase English letters.** </br>

🔹 **letter is a lowercase English letter.** </br>

🔹 **At most 4 * 10^4 calls will be made to query.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **String**  </br>
🔸 **Design**  </br>
🔸 **Trie**  </br>
🔸 **Data Stream**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Q2.%20Stream%20of%20Characters/%F0%9F%8D%81JAVA%20-%20Stream%20of%20Characters.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Q2.%20Stream%20of%20Characters/%F0%9F%8E%B2CPP%20-%20Stream%20of%20Characters.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Q2.%20Stream%20of%20Characters/%F0%9F%8D%B0PYTHON%20-%20Stream%20of%20Characters.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Q2.%20Stream%20of%20Characters/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Stream%20of%20Characters.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/95ebfaae-3201-404d-8324-2189b7612ae0" width = "700px" height="462px" />

</h1>
