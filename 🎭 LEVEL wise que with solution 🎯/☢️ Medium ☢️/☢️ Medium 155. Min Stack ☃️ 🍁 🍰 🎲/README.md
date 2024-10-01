# 155. Min Stack

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/min-stack/description/?envType=problem-list-v2&envId=design"><strong>➥ ☢️ 155 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

### Implement the MinStack class ➺


- ➺ `MinStack()` initializes the stack object.

- ➺ `void push(int val)` pushes the element `val` onto the stack.

- ➺ `void pop()` removes the element on the top of the stack.

- ➺ `int top()` gets the top element of the stack.

- ➺ `int getMin()` retrieves the minimum element in the stack.

### You must implement a solution with `O(1)` time complexity for each function.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ["MinStack","push","push","push","getMin","pop","top","getMin"] </br> [[],[-2],[0],[-3],[],[],[],[]]

  ### 📤 `Output`  ➤ [null,null,null,null,-3,null,0,-2]

  ### 🔦 `Explanation`  ➤ 

    MinStack minStack = new MinStack();

    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    minStack.getMin(); // return -3
    minStack.pop();
    minStack.top();    // return 0
    minStack.getMin(); // return -2

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **-2<sup>31</sup> <= val <= 2<sup>31</sup> - 1** </br>

🔹 **Methods `pop`, `top` and `getMin` operations will always be called on `non-empty` stacks.** </br>

🔹 **At most 3 * 10<sup>4</sup> calls will be made to `push`, `pop`, `top`, and `getMin`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Stack**  </br>
🔸 **Design**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20155.%20Min%20Stack%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20155.%20Min%20Stack.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20155.%20Min%20Stack%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20155.%20Min%20Stack.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20155.%20Min%20Stack%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20155.%20Min%20Stack.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%98%A2%EF%B8%8F%20Medium%20%E2%98%A2%EF%B8%8F/%E2%98%A2%EF%B8%8F%20Medium%20155.%20Min%20Stack%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20155.%20Min%20Stack.js) |

