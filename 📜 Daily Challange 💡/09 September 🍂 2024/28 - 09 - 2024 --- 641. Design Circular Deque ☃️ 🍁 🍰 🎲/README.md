# 641. Design Circular Deque

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/design-circular-deque/description/?envType=daily-question&envId=2024-09-28"><strong>➥ ☢️ 641 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design your implementation of the circular double-ended queue (deque).

### Implement the MyCircularDeque class ➺

- `MyCircularDeque(int k)` Initializes the deque with a maximum size of `k`.
- `boolean insertFront()` Adds an item at the front of Deque. Returns `true` if the operation is successful, or `false` otherwise.
- `boolean insertLast()` Adds an item at the rear of Deque. Returns `true` if the operation is successful, or `false` otherwise.
- `boolean deleteFront()` Deletes an item from the front of Deque. Returns `true` if the operation is successful, or `false` otherwise.
- `boolean deleteLast()` Deletes an item from the rear of Deque. Returns `true` if the operation is successful, or `false` otherwise.
- `int getFront()` Returns the front item from the Deque. Returns `-1` if the deque is empty.
- `int getRear()` Returns the last item from Deque. Returns `-1` if the deque is empty.
- `boolean isEmpty()` Returns `true` if the deque is empty, or `false` otherwise.
- `boolean isFull()` Returns `true` if the deque is full, or `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ["MyCircularDeque", "insertLast", "insertLast", "insertFront", "insertFront", "getRear", "isFull", "deleteLast", "insertFront", "getFront"] </br> [[3], [1], [2], [3], [4], [], [], [], [4], []]

  ### 📤 `Output`  ➤ [null, true, true, true, false, 2, true, true, true, 4]

  ### 🔦 `Explanation`  ➤ 

    ➺ MyCircularDeque myCircularDeque = new MyCircularDeque(3);
    ➺ myCircularDeque.insertLast(1);  // return True
    ➺ myCircularDeque.insertLast(2);  // return True
    ➺ myCircularDeque.insertFront(3); // return True
    ➺ myCircularDeque.insertFront(4); // return False, the queue is full.
    ➺ myCircularDeque.getRear();      // return 2
    ➺ myCircularDeque.isFull();       // return True
    ➺ myCircularDeque.deleteLast();   // return True
    ➺ myCircularDeque.insertFront(4); // return True
    ➺ myCircularDeque.getFront();     // return 4

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= k <= 1000`** </br>

🔹 **`0 <= value <= 1000`** </br>

🔹 **At most `2000` calls will be made to `insertFront`, `insertLast`, `deleteFront`, `deleteLast`, `getFront`, `getRear`, `isEmpty`, `isFull`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Linked List**  </br>
🔸 **Design**  </br>
🔸 **Queue**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/28%20-%2009%20-%202024%20---%20641.%20Design%20Circular%20Deque%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20641.%20Design%20Circular%20Deque.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/28%20-%2009%20-%202024%20---%20641.%20Design%20Circular%20Deque%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20641.%20Design%20Circular%20Deque.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/28%20-%2009%20-%202024%20---%20641.%20Design%20Circular%20Deque%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20641.%20Design%20Circular%20Deque.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/28%20-%2009%20-%202024%20---%20641.%20Design%20Circular%20Deque%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20641.%20Design%20Circular%20Deque.js) |

