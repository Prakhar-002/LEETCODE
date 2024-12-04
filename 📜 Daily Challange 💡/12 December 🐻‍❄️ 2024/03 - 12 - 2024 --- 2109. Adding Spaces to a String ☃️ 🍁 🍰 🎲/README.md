# 2109. Adding Spaces to a String

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/adding-spaces-to-a-string/description/?envType=daily-question&envId=2024-12-01"><strong>➥ ☢️ 2109 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed string s and a 0-indexed integer array `spaces` that describes the indices in the original string where spaces will be added. Each space should be inserted before the character at the given index.

- For example, given `s = "EnjoyYourCoffee"` and `spaces = [5, 9]`, we place spaces before `'Y'` and `'C'`, which are at indices `5` and `9` respectively. Thus, we obtain `"Enjoy Your Coffee"`.

### Return *the modified string `after` the spaces have been added*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ s = "LeetcodeHelpsMeLearn", spaces = [8,13,15]

  ### 📤 `Output`  ➤  "Leetcode Helps Me Learn"

  ### 🔦 `Explanation`  ➤ The indices 8, 13, and 15 correspond to the underlined characters in "Leetcode<u>H</u>elps<u>M</u>e<u>L</u>earn".</br> We then place spaces before those characters.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "icodeinpython", spaces = [1,5,7,9]

  ### 📤 `Output`  ➤ "i code in py thon"

  ### 🔦 `Explanation` ➤ The indices 1, 5, 7, and 9 correspond to the underlined characters in "i<u>c</u>ode<u>i</u>n<u>p</u>y<u>t</u>hon".</br> We then place spaces before those characters.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ s = "spacing", spaces = [0,1,2,3,4,5,6]

  ### 📤 `Output`  ➤ " s p a c i n g"

  ### 🔦 `Explanation`  ➤ We are also able to place spaces before the first character of the string.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= s.length <= 3 * 105** </br>

🔹 **`s` consists only of lowercase and uppercase English letters.** </br>

🔹 **1 <= spaces.length <= 3 * 105** </br>

🔹 **`0 <= spaces[i] <= s.length - 1`** </br>

🔹 **All the values of `spaces` are strictly increasing.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>
🔸 **String**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
