# 2349. Design a Number Container System

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/design-a-number-container-system/description/?envType=daily-question&envId=2025-02-08"><strong>➥ ☢️ 2349 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design a number container system that can do the following:

- Insert or Replace a number at the given index in the system.

- Return the smallest index for the given number in the system.

### Implement the `NumberContainers` class:

- `NumberContainers()` Initializes the number container system.

- `void change(int index, int number)` Fills the container at index with the number. If there is already a number at that index, replace it.

- `int find(int number)` Returns the smallest index for the given `number`, or `-1` if there is no index that is filled by `number` in the system.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ["NumberContainers", "find", "change", "change", "change", "change", "find", "change", "find"]</br> [[], [10], [2, 10], [1, 10], [3, 10], [5, 10], [10], [1, 20], [10]]

  ### 📤 `Output`  ➤ [null, -1, null, null, null, null, 1, null, 2]

  ### 🔦 `Explanation`  ➤ 

➺ NumberContainers nc = new NumberContainers();

➺ nc.find(10); // There is no index that is filled with number 10. Therefore, we return -1.

➺ nc.change(2, 10); // Your container at index 2 will be filled with number 10.

➺ nc.change(1, 10); // Your container at index 1 will be filled with number 10.

➺ nc.change(3, 10); // Your container at index 3 will be filled with number 10.

➺ nc.change(5, 10); // Your container at index 5 will be filled with number 10.

➺ nc.find(10); // Number 10 is at the indices 1, 2, 3, and 5. Since the smallest index that is filled with 10 is 1, we return 1.

➺ nc.change(1, 20); // Your container at index 1 will be filled with number 20. Note that index 1 was filled with 10 and then replaced with 20. 

➺ nc.find(10); // Number 10 is at the indices 2, 3, and 5. The smallest index that is filled with 10 is 2. Therefore, we return 2.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= index, number <= 109<sup>9</sup>** </br>

🔹 **At most 10<sup>5</sup> calls will be made in total to change and find.** </br>

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/08%20-%2002%20-%202025%20---%202349.%20Design%20a%20Number%20Container%20System%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202349.%20Design%20a%20Number%20Container%20System.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/08%20-%2002%20-%202025%20---%202349.%20Design%20a%20Number%20Container%20System%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202349.%20Design%20a%20Number%20Container%20System.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/08%20-%2002%20-%202025%20---%202349.%20Design%20a%20Number%20Container%20System%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202349.%20Design%20a%20Number%20Container%20System.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/08%20-%2002%20-%202025%20---%202349.%20Design%20a%20Number%20Container%20System%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202349.%20Design%20a%20Number%20Container%20System.js) |
