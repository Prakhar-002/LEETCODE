# 1381. Design a Stack With Increment Operation

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/design-a-stack-with-increment-operation/description/?envType=daily-question&envId=2024-09-30"><strong>➥ ☢️ 1381 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design a stack that supports increment operations on its elements.

### Implement the CustomStack class:

- `CustomStack(int maxSize)` ➺ Initializes the object with `maxSize` which is the maximum number of elements in the stack.

- `void push(int x)` ➺ Adds `x` to the top of the stack if the stack has not reached the `maxSize`.

- `int pop()` ➺ Pops and returns the top of the stack or `-1` if the stack is `empty`.

- `void inc(int k, int val)` ➺ Increments the bottom `k` elements of the stack by `val`. If there are less than `k` elements in the stack, increment all the elements in the stack.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ["CustomStack","push","push","pop","push","push","push","increment","increment","pop","pop","pop","pop"] </br> [[3],[1],[2],[],[2],[3],[4],[5,100],[2,100],[],[],[],[]]

  ### 📤 `Output`  ➤ [null,null,null,2,null,null,null,null,null,103,202,201,-1]

  ### 🔦 `Explanation`  ➤ 

    [null,null,null,2,null,null,null,null,null,103,202,201,-1]

    Explanation ➺

    // Stack is Empty []
    CustomStack stk = new CustomStack(3); 

    stk.push(1);    // stack [1]                       
    stk.push(2);    // stack becomes [1, 2]

    stk.pop();  // return 2
    --> Return top of the stack 2, stack becomes [1]

    stk.push(2);     // stack becomes [1, 2]
    stk.push(3);     // stack becomes [1, 2, 3]
    stk.push(4);     // stack still [1, 2, 3], 

    Do not add another elements as size is 4

    stk.increment(5, 100);  // stack becomes [101, 102, 103]
    stk.increment(2, 100);  // stack becomes [201, 202, 103]

    stk.pop();              // return 103 
    --> Return top of the stack 103, stack becomes [201, 202]
    stk.pop();              // return 202 
    --> Return top of the stack 202, stack becomes [201]
    stk.pop();              // return 201 
    --> Return top of the stack 201, stack becomes []
    stk.pop();              // return -1 
    --> Stack is empty return -1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= maxSize, x, k <= 1000`** </br>

🔹 **`0 <= val <= 100`** </br>

🔹 **At most `1000` calls will be made to each method of `increment`, `push` and `pop` each separately.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
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
