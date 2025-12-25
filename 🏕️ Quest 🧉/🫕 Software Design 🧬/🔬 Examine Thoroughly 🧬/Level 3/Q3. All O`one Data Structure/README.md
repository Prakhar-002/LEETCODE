# Q3. All O`one Data Structure

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/all-oone-data-structure/?envType=problem-list-v2&envId=ssd-ssd3-data-structure-design"><strong>➥ 🫀 Q3 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design a data structure to store counts of strings and support retrieving any string with minimum or maximum count in `O(1)` average time.

### `AllOne()` initializes the data structure as empty.

### `void inc(String key)` increments the count of `key` by `1`; if `key` does not exist, insert it with count `1`.

### `void dec(String key)` decrements the count of `key` by `1`; if the count becomes `0`, remove `key` from the data structure. It is guaranteed that `key` exists when `dec` is called.

### `String getMaxKey()` returns one of the keys with the maximal count, or the empty string `""` if the structure is empty.

### `String getMinKey()` returns one of the keys with the minimal count, or the empty string `""` if the structure is empty.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`["AllOne", "inc", "inc", "getMaxKey", "getMinKey", "inc", "getMaxKey", "getMinKey"]`  
`[[], ["hello"], ["hello"], [], [], ["leet"], [], []]`

### 📤 `Output`  ➤  
`[null, null, null, "hello", "hello", null, "hello", "leet"]`

### 🔦 `Explanation`  ➤ 

```Js
AllOne allOne = new AllOne();
allOne.inc("hello");
allOne.inc("hello");
allOne.getMaxKey(); // return "hello"
allOne.getMinKey(); // return "hello"
allOne.inc("leet");
allOne.getMaxKey(); // return "hello"
allOne.getMinKey(); // return "leet"
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= key.length <= 10` and `key` consists of lowercase English letters. </br>
🔹 For every call to `dec`, the key is guaranteed to exist. </br>
🔹 At most `5 * 10^4` calls in total will be made to `inc`, `dec`, `getMaxKey`, and `getMinKey`. </br> 

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

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
