# 146. LRU Cache

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/lru-cache/description/"><strong>➥ ☢️ 146 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### The task is to design a data structure that adheres to the Least Recently Used (LRU) cache principle.

### Your solution must implement the `LRUCache` class, which contains the following methods:

- `LRUCache(int capacity)`: Initializes the LRU cache with a given positive integer `capacity`, representing the maximum number of key-value pairs the cache can hold.
- `int get(int key)`: Returns the `value` associated with the given `key` if the `key` exists within the cache. If the `key` is not present, the method should return -1. Importantly, calling `get` also signifies that the key was recently used and should update its position accordingly within the cache.
- `void put(int key, int value)`: Updates the `value` for the given `key` if the `key` is already present in the cache. Otherwise, this method adds the `key-value` pair to the cache. If, after performing this `put` operation, the number of keys in the cache exceeds the initialized `capacity`, the *least recently used* (LRU) key should be evicted.

### Performance Requirement: Both the `get` and `put` operations must have an average time complexity of O(1).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]

[[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]

  ### 📤 `Output`  ➤  [null, null, null, 1, null, -1, null, -1, 3, 4]

  ### 🔦 `Explanation`  ➤ 

LRUCache lRUCache = new LRUCache(2);
lRUCache.put(1, 1); // cache is {1=1}
lRUCache.put(2, 2); // cache is {1=1, 2=2}
lRUCache.get(1);    // return 1
lRUCache.put(3, 3); // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
lRUCache.get(2);    // returns -1 (not found)
lRUCache.put(4, 4); // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
lRUCache.get(1);    // return -1 (not found)
lRUCache.get(3);    // return 3
lRUCache.get(4);    // return 4

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= capacity <= 3000 </br>

🔹 0 <= key <= 10<sup>4</sup> </br>

🔹 0 <= value <= 10<sup>5</sup> </br>

🔹 At most 2 * 10<sup>5</sup> calls will be made to get and put. </br>

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

<img src ="" width = "700px" height="462px" />

</h1>
