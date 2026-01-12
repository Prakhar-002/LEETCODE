# Q2. LFU Cache

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/lfu-cache/description/?envType=problem-list-v2&envId=ssd-ssd1-cache-system-design"><strong>➥ 🫀 Q2 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design and implement a data structure for a Least Frequently Used (LFU) cache.

### Implement the LFUCache class:

- `LFUCache(int capacity)` Initializes the object with the capacity of the data structure.
- `int get(int key)` Gets the value of the key if the key exists in the cache. Otherwise, returns -1.
- `void put(int key, int value)` Update the value of the key if present, or inserts the key if not already present. When the cache reaches its capacity, it should invalidate and remove the least frequently used key before inserting a new item. For this problem, when there is a tie (i.e., two or more keys with the same frequency), the least recently used key would be invalidated.

### To determine the least frequently used key, a use counter is maintained for each key in the cache. The key with the smallest use counter is the least frequently used key.

### When a key is first inserted into the cache, its use counter is set to 1 (due to the put operation). The use counter for a key in the cache is incremented either a `get` or `put` operation is called on it.

### The functions `get` and `put` must each run in O(1) average time complexity.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤
  ### ["LFUCache", "put", "put", "get", "put", "get", "get", "put", "get", "get", "get"]
  ### [[2], [1, 1], [2, 2], [1], [3, 3], [2], [3], [4, 4], [1], [3], [4]]

  ### 📤 `Output`  ➤
  ### [null, null, null, 1, null, -1, 3, null, -1, 3, 4]

  ### 🔦 `Explanation`  ➤

```js

// cnt(x) = the use counter for key x
// cache=[] will show the last used order for tiebreakers (leftmost element is  most recent)
LFUCache lfu = new LFUCache(2);
lfu.put(1, 1);   // cache=[1,_], cnt(1)=1
lfu.put(2, 2);   // cache=[2,1], cnt(2)=1, cnt(1)=1
lfu.get(1);      // return 1
                 // cache=[1,2], cnt(2)=1, cnt(1)=2
lfu.put(3, 3);   // 2 is the LFU key because cnt(2)=1 is the smallest, invalidate 2.
                 // cache=[3,1], cnt(3)=1, cnt(1)=2
lfu.get(2);      // return -1 (not found)
lfu.get(3);      // return 3
                 // cache=[3,1], cnt(3)=2, cnt(1)=2
lfu.put(4, 4);   // Both 1 and 3 have the same cnt, but 1 is LRU, invalidate 1.
                 // cache=[4,3], cnt(4)=1, cnt(3)=2
lfu.get(1);      // return -1 (not found)
lfu.get(3);      // return 3
                 // cache=[3,4], cnt(4)=1, cnt(3)=3
lfu.get(4);      // return 4
                 // cache=[4,3], cnt(4)=2, cnt(3)=3
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= capacity <= 104 </br>
🔹 0 <= key <= 105 </br>
🔹 0 <= value <= 109 </br>
🔹 At most 2 * 105 calls will be made to get and put. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table** </br>
🔸 **Linked List** </br>
🔸 **Design** </br>
🔸 **Doubly-Linked List** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Q2.%20LFU%20Cache/%F0%9F%8D%81JAVA%20-%20LFU%20Cache.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Q2.%20LFU%20Cache/%F0%9F%8E%B2CPP%20-%20LFU%20Cache.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Q2.%20LFU%20Cache/%F0%9F%8D%B0PYTHON%20-%20LFU%20Cache.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Q2.%20LFU%20Cache/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20LFU%20Cache.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/c7dd5597-e291-40de-a76d-f8402c7c7812" width = "700px" height="462px" />

</h1>
