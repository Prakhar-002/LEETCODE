# 2976. Minimum Cost to Convert String I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-cost-to-convert-string-i/description/?envType=daily-question&envId=2024-07-27"><strong>➥ ☢️ 2976 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two `0-indexed` strings `source` and `target`, both of length `n` and consisting of `lowercase` English letters. You are also given two `0-indexed` character arrays `original` and `changed`, and an integer array `cost`, where `cost[i]` represents the cost of changing the character `original[i]` to the character `changed[i]`.

### You start with the string `source`. In one operation, you can pick a character `x` from the string and change it to the character `y` at a cost of `z` `if` there exists `any` index `j` such that `cost[j] == z`, `original[j] == x`, and `changed[j] == y`.

### Return *the `minimum` cost to convert the string `source` to the string `target` using `any` number of operations. If it is impossible to convert `source` to `target`, return `-1`*.

### Note that there may exist indices `i`, `j` such that `original[j] == original[i]` and `changed[j] == changed[i]`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  **📥 Input  ➤** source = "abcd", target = "acbe", original = ["a","b","c","c","e","d"], changed = ["b","c","b","e","b","e"], cost = [2,5,5,1,2,20]

  ### 📤 Output  ➤ 28

  ### 🔦 Explanation  ➤ To convert the string "abcd" to string "acbe":
    ➺ Change value at index 1 from 'b' to 'c' at a cost of 5.
    
    ➺ Change value at index 2 from 'c' to 'e' at a cost of 1.
    
    ➺ Change value at index 2 from 'e' to 'b' at a cost of 2.
    
    ➺ Change value at index 3 from 'd' to 'e' at a cost of 20.
    The total cost incurred is 5 + 1 + 2 + 20 = 28.

    It can be shown that this is the minimum possible cost.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ source = "aaaa", target = "bbbb", original = ["a","c"], changed = ["c","b"], cost = [1,2]

  ### 📤 Output  ➤ 12

  ### 🔦 Explanation ➤ To change the character 'a' to 'b' change the character 'a' to 'c' at a cost of 1, followed by changing the character 'c' to 'b' at a cost of 2, for a total cost of 1 + 2 = 3. To change all occurrences of 'a' to 'b', a total cost of 3 * 4 = 12 is incurred.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ source = "abcd", target = "abce", original = ["a"], changed = ["e"], cost = [10000]

  ### 📤 Output  ➤ -1

  ### 🔦 Explanation  ➤ It is impossible to convert source to target because the value at index 3 cannot be changed from 'd' to 'e'.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= source.length == target.length <= 10<sup>5</sup>** </br>

🔹 **`source`, `target` consist of lowercase English letters.** </br>

🔹 **`1 <= cost.length == original.length == changed.length <= 2000*`* </br>

🔹 **`original[i]`, `changed[i] `are lowercase English letters.** </br>

🔹 **1 <= cost[i] <= 10<sup>6</sup>** </br>

🔹 **`original[i] != changed[i]`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **String**  </br>
🔸 **Graph**  </br>
🔸 **Shortest Path**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/27%20-%2007%20-%202024%20---%202976.%20Minimum%20Cost%20to%20Convert%20String%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-2976-MinimumCostToConvertString-I.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/27%20-%2007%20-%202024%20---%202976.%20Minimum%20Cost%20to%20Convert%20String%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-2976-MinimumCostToConvertString-I.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/27%20-%2007%20-%202024%20---%202976.%20Minimum%20Cost%20to%20Convert%20String%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-2976-MinimumCostToConvertString-I.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/27%20-%2007%20-%202024%20---%202976.%20Minimum%20Cost%20to%20Convert%20String%20I%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-2976-MinimumCostToConvertString-I.js) |

