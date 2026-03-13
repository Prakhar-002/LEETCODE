# Q3 Number of Visible People in a Queue

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-visible-people-in-a-queue/description/?envType=problem-list-v2&envId=interview-instance-iii"><strong>➥ 🫀 Q3 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` people standing in a queue, numbered from `0` to `n-1` left to right. You are given an array `heights` of distinct integers where `heights[i]` represents the height of the `i`th person.

### A person can **see** another person to their **right** if everybody in between is **shorter** than both of them. Formally, person `i` can see person `j` if `i < j` and `min(heights[i], heights[j]) > max(heights[i+1], ..., heights[j-1])`.

### Return an array `answer` of length `n` where `answer[i]` is the **number of people** the `i`th person can see to their **right** in the queue.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/4c0e4e40-accd-47fa-aaaf-20d4eabd1527" width="600" height="250"/>

### 📥 `Input`  ➤ `heights = [10,6,8,5,11,9]`

### 📤 `Output`  ➤ `[3,1,2,1,1,0]`

### 🔦 `Explanation`  ➤  

```Js
Person 0 (10) can see person 1 (6), 2 (8), and 4 (11)  
Person 1 (6) can see person 2 (8)  
Person 2 (8) can see person 3 (5) and 4 (11)  
Person 3 (5) can see person 4 (11)  
Person 4 (11) can see person 5 (9)  
Person 5 (9) can see no one
```

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `heights = [5,1,2,3,10]`

### 📤 `Output`  ➤ `[4,1,1,1,0]`

### 🔦 `Explanation`  ➤

```Js
Person 0 (5) can see everyone to the right  
Persons 1, 2, 3 can each see person 4 (10)  
Person 4 sees no one
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `n == heights.length` </br>
🔹 `1 <= n <= 10^5` </br>
🔹 `1 <= heights[i] <= 10^5` </br>
🔹 All values in `heights` are **unique**

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Stack**  </br>
🔸 **Monotonic Stack**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8D%84%E2%80%8D%F0%9F%9F%AB%20Expedition%20Campaign%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/1%20Tempering/Interview%20Instance%203/Q3.%20Number%20of%20Visible%20People%20in%20a%20Queue/%F0%9F%8D%81JAVA%20-%20Number%20of%20Visible%20People%20in%20a%20Queue.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8D%84%E2%80%8D%F0%9F%9F%AB%20Expedition%20Campaign%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/1%20Tempering/Interview%20Instance%203/Q3.%20Number%20of%20Visible%20People%20in%20a%20Queue/%F0%9F%8E%B2CPP%20-%20Number%20of%20Visible%20People%20in%20a%20Queue.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8D%84%E2%80%8D%F0%9F%9F%AB%20Expedition%20Campaign%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/1%20Tempering/Interview%20Instance%203/Q3.%20Number%20of%20Visible%20People%20in%20a%20Queue/%F0%9F%8D%B0PYTHON%20-%20Number%20of%20Visible%20People%20in%20a%20Queue.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8D%84%E2%80%8D%F0%9F%9F%AB%20Expedition%20Campaign%202026%20%F0%9F%A6%84/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/1%20Tempering/Interview%20Instance%203/Q3.%20Number%20of%20Visible%20People%20in%20a%20Queue/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Number%20of%20Visible%20People%20in%20a%20Queue.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/aa9110b7-00d9-4e9d-8279-f29216c9faf6" width = "700px" height="462px" />

</h1>
