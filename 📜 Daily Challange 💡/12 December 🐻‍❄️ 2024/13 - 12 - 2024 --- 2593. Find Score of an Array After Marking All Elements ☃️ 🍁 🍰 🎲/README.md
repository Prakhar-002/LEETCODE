# 2593. Find Score of an Array After Marking All Elements

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/description/?envType=daily-question&envId=2024-12-13"><strong>➥ ☢️ 2593 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `nums` consisting of positive integers.

### tarting with `score = 0`, apply the following algorithm:


- Choose the smallest integer of the array that is not marked. If there is a tie, choose the one with the smallest index.

- Add the value of the chosen integer to `score`.

- Mark **the chosen element and its two adjacent elements if they exist**.

- Repeat until all the array elements are marked.

### Return *the score you get after applying the above algorithm*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [2,1,3,4,5,2]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation`  ➤ We mark the elements as follows:

➺ 1 is the smallest unmarked element, so we mark it and its two adjacent elements: [<ins>2</ins>,<ins>1</ins>,<ins>3</ins>,4,5,2].

➺ 2 is the smallest unmarked element, so we mark it and its left adjacent element: [<ins>2</ins>,<ins>1</ins>,<ins>3</ins>,4,<ins>5</ins>,<ins>2</ins>].

➺ 4 is the only remaining unmarked element, so we mark it: [<ins>2</ins>,<ins>1</ins>,<ins>3</ins>,<ins>4</ins>,<ins>5</ins>,<ins>2</ins>].

Our score is 1 + 2 + 4 = 7.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,3,5,1,3,2]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤  We mark the elements as follows:

➺ 1 is the smallest unmarked element, so we mark it and its two adjacent elements: [2,3,<ins>5</ins>,<ins>1</ins>,<ins>3</ins>,2].

➺ 2 is the smallest unmarked element, since there are two of them, we choose the left-most one, so we mark the one at index 0 and its right adjacent element: [2,<ins>3</ins>,<ins>5</ins>,<ins>1</ins>,<ins>3</ins>,<ins>2</ins>].

➺ 2 is the only remaining unmarked element, so we mark it: [<ins>2</ins>,<ins>3</ins>,<ins>5</ins>,<ins>1</ins>,<ins>3</ins>,<ins>2</ins>].

Our score is 1 + 2 + 2 = 5.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **1 <= nums[i] <= 10<sup>6</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  &nbsp;
🔸 **Heap (Priority Queue)**  &nbsp;
🔸 **Sorting** &nbsp;
🔸 **Array** &nbsp;
🔸 **Simulation** &nbsp;
🔸 **Hash Table** &nbsp;
🔸 **Ordered Set** &nbsp;
🔸 **Ordered Map** &nbsp;
🔸 **Greedy** &nbsp;
🔸 **Sliding Window** &nbsp;
🔸 **Monotonic Stack** &nbsp;
🔸 **Two Pointers** &nbsp;
🔸 **Queue** &nbsp;
🔸 **Stack** &nbsp;
🔸 **Divide and Conquer** &nbsp;
🔸 **Dynamic Programming** &nbsp;
🔸 **Doubly-Linked List** &nbsp;
🔸 **Data Stream** &nbsp;
🔸 **Radix Sort** &nbsp;
🔸 **Tree** &nbsp;
🔸 **String** &nbsp;
🔸 **Design** &nbsp;
🔸 **Hash Function** &nbsp;
🔸 **Bit Manipulation** &nbsp;
🔸 **Iterator** &nbsp;
🔸 **Counting Sort** &nbsp;
🔸 **Linked List**  &nbsp;

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/13%20-%2012%20-%202024%20---%202593.%20Find%20Score%20of%20an%20Array%20After%20Marking%20All%20Elements%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202593.%20Find%20Score%20of%20an%20Array%20After%20Marking%20All%20Elements.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/13%20-%2012%20-%202024%20---%202593.%20Find%20Score%20of%20an%20Array%20After%20Marking%20All%20Elements%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202593.%20Find%20Score%20of%20an%20Array%20After%20Marking%20All%20Elements.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/13%20-%2012%20-%202024%20---%202593.%20Find%20Score%20of%20an%20Array%20After%20Marking%20All%20Elements%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202593.%20Find%20Score%20of%20an%20Array%20After%20Marking%20All%20Elements.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/13%20-%2012%20-%202024%20---%202593.%20Find%20Score%20of%20an%20Array%20After%20Marking%20All%20Elements%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202593.%20Find%20Score%20of%20an%20Array%20After%20Marking%20All%20Elements.js) |
