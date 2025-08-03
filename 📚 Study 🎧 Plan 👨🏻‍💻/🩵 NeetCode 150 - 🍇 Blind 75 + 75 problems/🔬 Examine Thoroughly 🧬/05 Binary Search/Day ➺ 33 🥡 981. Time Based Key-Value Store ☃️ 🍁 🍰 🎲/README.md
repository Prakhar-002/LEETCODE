# 981. Time Based Key-Value Store

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/time-based-key-value-store/description/"><strong>➥ ☢️ 981 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You need to design a time-based key-value data structure to store multiple values for the same key at different timestamps, allowing retrieval of a key's value at a specific timestamp.

### Specifically, you need to implement the `TimeMap` class with the following methods:

- `TimeMap()`: Initializes the `TimeMap` object.
- `void set(String key, String value, int timestamp)`: Stores the given `key` with the associated `value` at the specified `timestamp`.
- `String get(String key, int timestamp)`: Retrieves the `value` associated with the given `key` such that `set` was previously called with a `timestamp_prev` less than or equal to `timestamp`. If multiple such values exist, the method should return the value associated with the *largest* `timestamp_prev`. If no such values exist for the given `key`, it should return an empty string `""`.

### The key requirements are:

- Timestamps for a given key are strictly increasing.
- Efficient retrieval based on timestamp.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ["TimeMap", "set", "get", "get", "set", "get", "get"]
[[], ["foo", "bar", 1], ["foo", 1], ["foo", 3], ["foo", "bar2", 4], ["foo", 4], ["foo", 5]]

  ### 📤 `Output`  ➤ [null, null, "bar", "bar", null, "bar2", "bar2"]

  ### 🔦 `Explanation`  ➤ 

TimeMap timeMap = new TimeMap();
timeMap.set("foo", "bar", 1);  // store the key "foo" and value "bar" along with timestamp = 1.
timeMap.get("foo", 1);         // return "bar"
timeMap.get("foo", 3);         // return "bar", since there is no value corresponding to foo at timestamp 3 and timestamp 2, then the only value is at timestamp 1 is "bar".
timeMap.set("foo", "bar2", 4); // store the key "foo" and value "bar2" along with timestamp = 4.
timeMap.get("foo", 4);         // return "bar2"
timeMap.get("foo", 5);         // return "bar2"

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= key.length, value.length <= 100 </br>

🔹 key and value consist of lowercase English letters and digits. </br>

🔹 1 <= timestamp <= 10<sup>7</sup> </br>

🔹 All the timestamps timestamp of set are strictly increasing. </br>

🔹 At most 2 * 10<sup>5</sup> calls will be made to set and get each. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>

🔸 **String**  </br>

🔸 **Binary Search**  </br>

🔸 **Design**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Binary%20Search/Day%20%E2%9E%BA%2033%20%F0%9F%A5%A1%20981.%20Time%20Based%20Key-Value%20Store%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20981.%20Time%20Based%20Key-Value%20Store.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Binary%20Search/Day%20%E2%9E%BA%2033%20%F0%9F%A5%A1%20981.%20Time%20Based%20Key-Value%20Store%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20981.%20Time%20Based%20Key-Value%20Store.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Binary%20Search/Day%20%E2%9E%BA%2033%20%F0%9F%A5%A1%20981.%20Time%20Based%20Key-Value%20Store%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20981.%20Time%20Based%20Key-Value%20Store.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/05%20Binary%20Search/Day%20%E2%9E%BA%2033%20%F0%9F%A5%A1%20981.%20Time%20Based%20Key-Value%20Store%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20981.%20Time%20Based%20Key-Value%20S.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/f357c16f-4921-4218-b263-86cd4c4b6054" width = "700px" height="462px" />

</h1>
