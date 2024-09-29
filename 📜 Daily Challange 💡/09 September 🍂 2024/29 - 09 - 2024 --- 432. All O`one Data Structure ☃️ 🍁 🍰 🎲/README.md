# 432. All O`one Data Structure

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/all-oone-data-structure/description/?envType=daily-question&envId=2024-09-29"><strong>➥ 🫀 432 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design a data structure to store the strings' count with the ability to return the strings with minimum and maximum counts.

### Implement the AllOne class:

- `AllOne()` Initializes the object of the data structure.

- `inc(String key)` Increments the count of the string `key` by `1`. If `key` does not exist in the data structure, insert it with count `1`.

- `dec(String key)` Decrements the count of the string `key` by `1`. If the count of `key` is `0` after the decrement, remove it from the data structure. It is guaranteed that `key` exists in the data structure before the decrement.

- `getMaxKey()` Returns one of the keys with the maximal count. If no element exists, return an empty string `""`.

- `getMinKey()` Returns one of the keys with the minimum 
count. If no element exists, return an empty string `""`.

### `Note` that each function must run in `O(1)` average time complexity

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ["AllOne", "inc", "inc", "getMaxKey", "getMinKey", "inc", "getMaxKey", "getMinKey"] </br> [[], ["hello"], ["hello"], [], [], ["leet"], [], []]

  ### 📤 `Output`  ➤ [null, null, null, "hello", "hello", null, "hello", "leet"]

  ### 🔦 `Explanation`  ➤ ➺

    ➺ AllOne allOne = new AllOne();
    ➺ allOne.inc("hello");
    ➺ allOne.inc("hello");
    ➺ allOne.getMaxKey(); // return "hello"
    ➺ allOne.getMinKey(); // return "hello"
    ➺ allOne.inc("leet");
    ➺ allOne.getMaxKey(); // return "hello"
    ➺ allOne.getMinKey(); // return "leet"

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= key.length <= 10`** </br>

🔹 **`key` consists of lowercase English letters.** </br>

🔹 **It is guaranteed that for each call to `dec`, `key` is existing in the data structure.** </br>

🔹 **At most 5 * 10<sup>4</sup> calls will be made to `inc`, `dec`, `getMaxKey`, and `getMinKey`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **Linked List**  </br>
🔸 **Design**  </br>
🔸 **Doubly-Linked List**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

