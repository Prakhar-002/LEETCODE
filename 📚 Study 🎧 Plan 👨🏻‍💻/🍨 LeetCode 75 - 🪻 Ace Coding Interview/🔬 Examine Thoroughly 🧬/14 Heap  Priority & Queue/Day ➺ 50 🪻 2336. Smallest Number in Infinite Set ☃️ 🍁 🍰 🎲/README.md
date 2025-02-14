# 2336. Smallest Number in Infinite Set

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/smallest-number-in-infinite-set/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 2336 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You have a set which contains all positive integers [1, 2, 3, 4, 5, ...].

### Implement the `SmallestInfiniteSet` class:

- `SmallestInfiniteSet()` Initializes the SmallestInfiniteSet object to contain all positive integers.

- `int popSmallest()` Removes and returns the smallest integer contained in the infinite set.

- `void addBack(int num)` Adds a positive integer `num` back into the infinite set, if it is not already in the infinite set.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ["SmallestInfiniteSet", "addBack", "popSmallest", "popSmallest", "popSmallest", "addBack", "popSmallest", "popSmallest", "popSmallest"]</br> [[], [2], [], [], [], [1], [], [], []]

  ### 📤 `Output`  ➤ [null, null, 1, 2, 3, null, 1, 4, 5]

  ### 🔦 `Explanation`  ➤ </br></br> SmallestInfiniteSet smallestInfiniteSet = new SmallestInfiniteSet();</br></br> smallestInfiniteSet.addBack(2);    // 2 is already in the set, so no change is made.</br></br> smallestInfiniteSet.popSmallest(); // return 1, since 1 is the smallest number, and remove it from the set.</br></br> smallestInfiniteSet.popSmallest(); // return 2, and remove it from the set.</br></br> smallestInfiniteSet.popSmallest(); // return 3, and remove it from the set.</br></br> smallestInfiniteSet.addBack(1);    // 1 is added back to the set.</br></br> smallestInfiniteSet.popSmallest(); // return 1, since 1 was added back to the set and</br></br>                                    // is the smallest number, and remove it from the set.</br></br> smallestInfiniteSet.popSmallest(); // return 4, and remove it from the set.</br></br> smallestInfiniteSet.popSmallest(); // return 5, and remove it from the set.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= num <= 1000`** </br>

🔹 **At most `1000` calls will be made in total to `popSmallest` and `addBack`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **Design**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Ordered Set**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/14%20Heap%20%20Priority%20%26%20Queue/Day%20%E2%9E%BA%2050%20%F0%9F%AA%BB%202336.%20Smallest%20Number%20in%20Infinite%20Set%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202336.%20Smallest%20Numb.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/14%20Heap%20%20Priority%20%26%20Queue/Day%20%E2%9E%BA%2050%20%F0%9F%AA%BB%202336.%20Smallest%20Number%20in%20Infinite%20Set%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202336.%20Smallest%20Number.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/14%20Heap%20%20Priority%20%26%20Queue/Day%20%E2%9E%BA%2050%20%F0%9F%AA%BB%202336.%20Smallest%20Number%20in%20Infinite%20Set%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202336.%20Smallest%20Numb.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/14%20Heap%20%20Priority%20%26%20Queue/Day%20%E2%9E%BA%2050%20%F0%9F%AA%BB%202336.%20Smallest%20Number%20in%20Infinite%20Set%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202336.%20Smallest%20.js) |
