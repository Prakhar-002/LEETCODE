# 3016. Minimum Number of Pushes to Type Word II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/description/?envType=daily-question&envId=2024-08-06"><strong>➥ ☢️ 3016 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a string `word` containing lowercase English letters.

### Telephone keypads have keys mapped with distinct collections of lowercase English letters, which can be used to form words by pushing them. For example, the key `2` is mapped with `["a","b","c"]`, we need to push the key one time to type `"a"`, two times to type `"b"`, and three times to type `"c"` .

### It is allowed to remap the keys numbered `2` to `9` to `distinct` collections of letters. The keys can be remapped to `any` amount of letters, but each letter `must` be mapped to `exactly` one key. You need to find the `minimum` number of times the keys will be pushed to type the string `word`.

### Return *the `minimum` number of pushes needed to type `word` after remapping the keys*.

### An example mapping of letters to keys on a telephone keypad is given below. Note that `1`, `*,` `#`, and `0` do not map to any letters.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ word = "abcde"

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ The remapped keypad given in the image provides the minimum cost.
    
    "a" ➺ one push on key 2
    
    "b" ➺ one push on key 3
    
    "c" ➺ one push on key 4
    
    "d" ➺ one push on key 5
    
    "e" ➺ one push on key 6
    
    Total cost is 1 + 1 + 1 + 1 + 1 = 5.
    
    It can be shown that no other mapping can provide a lower cost.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = "xyzxyzxyzxyz"

  ### 📤 `Output`  ➤ 12

  ### 🔦 `Explanation` ➤ The remapped keypad given in the image provides the minimum cost.
    
    "x" ➺ one push on key 2
    
    "y" ➺ one push on key 3
    
    "z" ➺ one push on key 4
    
    Total cost is 1 * 4 + 1 * 4 + 1 * 4 = 12
    
    It can be shown that no other mapping can provide a lower cost.

    Note that the key 9 is not mapped to any letter: 
    it is not necessary to map letters to every key, 
    but to map all the letters.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ word = "aabbccddeeffgghhiiiiii"

  ### 📤 `Output`  ➤ 24

  ### 🔦 `Explanation`  ➤ The remapped keypad given in the image provides the minimum cost.

    "a" -> one push on key 2

    "b" -> one push on key 3

    "c" -> one push on key 4

    "d" -> one push on key 5

    "e" -> one push on key 6

    "f" -> one push on key 7

    "g" -> one push on key 8

    "h" -> two pushes on key 9

    "i" -> one push on key 9

    Total cost is 1 * 2 + 1 * 2 + 1 * 2 + 1 * 2 + 1 * 2 
    + 1 * 2 + 1 * 2 + 2 * 2 + 6 * 1 = 24.
    
    It can be shown that no other mapping can provide a lower cost.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= word.length <= 10<sup>5</sup>** </br>

🔹 **`word` consists of lowercase English letters.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **String**  </br>
🔸 **Greedy**  </br>
🔸 **Sorting**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

