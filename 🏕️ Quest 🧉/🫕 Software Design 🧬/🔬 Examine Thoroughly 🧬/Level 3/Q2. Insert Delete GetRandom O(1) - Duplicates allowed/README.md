# Q2. Insert Delete GetRandom O(1) - Duplicates allowed

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/insert-delete-getrandom-o1-duplicates-allowed/description/?envType=problem-list-v2&envId=ssd-ssd3-data-structure-design"><strong>➥ 🫀 Q2 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### `RandomizedCollection` is a data structure that stores a collection of numbers with possible duplicates (a multiset) and supports insertion, deletion of a single occurrence, and returning a random element.

### `RandomizedCollection()` initializes the object with an empty multiset.

### `bool insert(int val)` inserts `val` into the multiset, even if it is already present, and returns `true` if the value was not present before this call, or `false` otherwise.

### `bool remove(int val)` removes one occurrence of `val` from the multiset if present and returns `true` if an occurrence was removed, or `false` if the value was not present.

### `int getRandom()` returns a random element from the current multiset such that the probability of returning a value is proportional to its frequency in the multiset.

### All operations must run in average `O(1)` time, and `getRandom` is only called when the multiset is non-empty.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`["RandomizedCollection", "insert", "insert", "insert", "getRandom", "remove", "getRandom"]`  
`[[], [1], [1], [2], [], [1], []]`

### 📤 `Output`  ➤  
`[null, true, false, true, 2, true, 1]`

### 🔦 `Explanation`  ➤  

```Js
RandomizedCollection randomizedCollection = new RandomizedCollection();
randomizedCollection.insert(1);   // return true since the collection does not contain 1.
                                  // Inserts 1 into the collection.
randomizedCollection.insert(1);   // return false since the collection contains 1.
                                  // Inserts another 1 into the collection. Collection now contains [1,1].
randomizedCollection.insert(2);   // return true since the collection does not contain 2.
                                  // Inserts 2 into the collection. Collection now contains [1,1,2].
randomizedCollection.getRandom(); // getRandom should:
                                  // - return 1 with probability 2/3, or
                                  // - return 2 with probability 1/3.
randomizedCollection.remove(1);   // return true since the collection contains 1.
                                  // Removes 1 from the collection. Collection now contains [1,2].
randomizedCollection.getRandom(); // getRandom should return 1 or 2, both equally likely.
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `-2^31 <= val <= 2^31 - 1` </br>
🔹 At most `2 * 10^5` calls in total will be made to `insert`, `remove`, and `getRandom`. </br>
🔹 There is always at least one element in the collection when `getRandom` is called. </br>

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%203/Q2.%20Insert%20Delete%20GetRandom%20O(1)%20-%20Duplicates%20allowed/%F0%9F%8D%81JAVA%20-%20Insert%20Delete%20GetRandom%20O(1)%20-%20Duplicates%20allowed.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%203/Q2.%20Insert%20Delete%20GetRandom%20O(1)%20-%20Duplicates%20allowed/%F0%9F%8E%B2CPP%20-%20Insert%20Delete%20GetRandom%20O(1)%20-%20Duplicates%20allowed.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%203/Q2.%20Insert%20Delete%20GetRandom%20O(1)%20-%20Duplicates%20allowed/%F0%9F%8D%B0PYTHON%20-%20Insert%20Delete%20GetRandom%20O(1)%20-%20Duplicates%20allowed.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%AB%95%20Software%20Design%20%F0%9F%A7%AC/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%203/Q2.%20Insert%20Delete%20GetRandom%20O(1)%20-%20Duplicates%20allowed/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Insert%20Delete%20GetRandom%20O(1)%20-%20Duplicates%20allowed.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/5a7355ae-dffa-4985-94f1-6108d69b8454" width = "700px" height="462px" />

</h1>
