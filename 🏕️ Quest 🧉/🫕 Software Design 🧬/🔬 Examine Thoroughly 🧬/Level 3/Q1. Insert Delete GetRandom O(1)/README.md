# 

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ ---- Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Implement the `RandomizedSet` class, which supports insertion, deletion, and returning a random element from the set in average `O(1)` time. 

### `RandomizedSet()` initializes the `RandomizedSet` object with an empty set.

### `bool insert(int val)` inserts `val` into the set if it is not already present and returns `true` if the element was newly added, or `false` otherwise.

### `bool remove(int val)` removes `val` from the set if it exists and returns `true` if the element was present and removed, or `false` otherwise.

### `int getRandom()` returns a random element from the current set of elements, with each element having the same probability of being chosen; it is guaranteed that the set is non-empty when this method is called.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

### 📥 `Input`  ➤  
`["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]`  
`[[], [1], [2], [2], [], [1], [2], []]`

### 📤 `Output`  ➤  
`[null, true, false, true, 2, true, false, 2]` 

### 🔦 `Explanation`  ➤  
`RandomizedSet randomizedSet = new RandomizedSet();`  
`randomizedSet.insert(1);` inserts `1`, returns `true` since `1` was not present.  
`randomizedSet.remove(2);` returns `false` because `2` is not in the set.  
`randomizedSet.insert(2);` inserts `2`, returns `true`; the set is now `[1, 2]`.  
`randomizedSet.getRandom();` returns either `1` or `2` with equal probability.  
`randomizedSet.remove(1);` removes `1`, returns `true`; the set is now `[2]`.  
`randomizedSet.insert(2);` returns `false` because `2` is already present.  
`randomizedSet.getRandom();` always returns `2` since it is the only element.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `-2^31 <= val <= 2^31 - 1` </br>
🔹 At most `2 * 10^5` calls will be made to `insert`, `remove`, and `getRandom`. </br>
🔹 There will always be at least one element in the data structure when `getRandom` is called. </br> 

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Math**  </br>
🔸 **Design**  </br>
🔸 **Randomized**  </br>

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
