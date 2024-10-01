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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

