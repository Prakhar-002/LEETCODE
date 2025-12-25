# 

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ ---- Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `happiness` of length `n`, where the `i`‑th child has happiness value `happiness[i]`, and a positive integer `k`. 

### There are `n` children standing in a queue, and you must select exactly `k` children in `k` turns. 

### In each turn, when you select a child, the happiness value of every child that has not yet been selected decreases by `1`, but happiness values never go below `0` and are decremented only if currently positive. 

### Your task is to return the maximum possible sum of the happiness values of the `k` selected children. 

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤ `happiness = [1,2,3], k = 2`

### 📤 `Output`  ➤ `4`

### 🔦 `Explanation`  ➤ We can pick 2 children in the following way:
- Pick the child with the happiness value == 3. The happiness value of the remaining children becomes [0,1].
- Pick the child with the happiness value == 1. The happiness value of the remaining child becomes [0]. 

### Note that the happiness value cannot become less than 0.
### The sum of the happiness values of the selected children is 3 + 1 = 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `happiness = [1,1,1,1], k = 2`

### 📤 `Output`  ➤ `1`

### 🔦 `Explanation` ➤ We can pick 2 children in the following way:
- Pick any child with the happiness value == 1. The happiness value of the remaining children becomes [0,0,0].
- Pick the child with the happiness value == 0. The happiness value of the remaining child becomes [0,0].

### The sum of the happiness values of the selected children is 1 + 0 = 1.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `happiness = [2,3,4,5], k = 1`

### 📤 `Output`  ➤ `5`

### 🔦 `Explanation`  ➤ We can pick 1 child in the following way:

- Pick the child with the happiness value == 5. The happiness value of the remaining children becomes [1,2,3].

### The sum of the happiness values of the selected children is 5.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n == happiness.length <= 2 * 10^5` </br>
🔹 `1 <= happiness[i] <= 10^8` </br>
🔹 `1 <= k <= n` </br> 

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
