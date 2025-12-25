# Q1. Insert Delete GetRandom O(1)

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/insert-delete-getrandom-o1/description/?envType=problem-list-v2&envId=ssd-ssd3-data-structure-design"><strong>➥ ☢️ Q1 Leetcode Medium ☢️ </strong></a>
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

### 📥 `Input`  ➤  
`["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]`  
`[[], [1], [2], [2], [], [1], [2], []]`

### 📤 `Output`  ➤  
`[null, true, false, true, 2, true, false, 2]`

### 🔦 `Explanation`  ➤

```Js
RandomizedSet randomizedSet = new RandomizedSet();
randomizedSet.insert(1); // Inserts 1 to the set. Returns true as 1 was inserted successfully.
randomizedSet.remove(2); // Returns false as 2 does not exist in the set.
randomizedSet.insert(2); // Inserts 2 to the set, returns true. Set now contains [1,2].
randomizedSet.getRandom(); // getRandom() should return either 1 or 2 randomly.
randomizedSet.remove(1); // Removes 1 from the set, returns true. Set now contains [2].
randomizedSet.insert(2); // 2 was already in the set, so return false.
randomizedSet.getRandom(); // Since 2 is the only number in the set, getRandom() will always return 2.
```

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%203/Q1.%20Insert%20Delete%20GetRandom%20O(1)/%F0%9F%8D%81JAVA%20-%20Insert%20Delete%20GetRandom%20O(1).java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%203/Q1.%20Insert%20Delete%20GetRandom%20O(1)/%F0%9F%8E%B2CPP%20-%20Insert%20Delete%20GetRandom%20O(1).cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%203/Q1.%20Insert%20Delete%20GetRandom%20O(1)/%F0%9F%8D%B0PYTHON%20-%20Insert%20Delete%20GetRandom%20O(1).py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%203/Q1.%20Insert%20Delete%20GetRandom%20O(1)/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Insert%20Delete%20GetRandom%20O(1).js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/f2a5ecfc-81f9-491d-a932-34f8166f295e" width = "700px" height="462px" />

</h1>
