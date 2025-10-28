# 2125. Number of Laser Beams in a Bank

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/?envType=daily-question&envId=2025-10-27"><strong>➥ ☢️ 2125 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Anti-theft security devices are activated inside a bank. You are given a 0-indexed binary string array `bank` representing the floor plan of the bank, which is an `m x n` 2D matrix. `bank[i]` represents the ith row, consisting of `'0'`s and `'1'`s. `'0'` means the cell is empty, while `'1'` means the cell has a security device.

### There is one laser beam between any two security devices if both conditions are met:

- The two devices are located on two different rows: `r1` and `r2`, where `r1 < r2`.
- For each row `i` where `r1 < i < r2`, there are no security devices in the `i`th row.

### Laser beams are independent, i.e., one beam does not interfere nor join with another.

### Return the total number of laser beams in the bank.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `bank = ["011001","000000","010100","001000"]`

  ### 📤 `Output`  ➤ `8`

  ### 🔦 `Explanation`  ➤ ➺

  - Between each of the following device pairs, there is one beam. In total, there are 8 beams:
    - `bank[0][1]` -- `bank[2][1]`
    - `bank[0][1]` -- `bank[2][3]`
    - `bank[0][2]` -- `bank[2][1]`
    - `bank[0][2]` -- `bank[2][3]`
    - `bank[0][5]` -- `bank[2][1]`
    - `bank[0][5]` -- `bank[2][3]`
    - `bank[2][1]` -- `bank[3][2]`
    - `bank[2][3]` -- `bank[3][2]`
  - Note that there is no beam between any device on the 0th row with any on the 3rd row. This is because the 2nd row contains security devices, which breaks the second condition.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `bank = ["000","111","000"]`

  ### 📤 `Output`  ➤ `0`

  ### 🔦 `Explanation`  ➤ ➺

  - There does not exist two devices located on two different rows.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `m == bank.length` </br>
🔹 `n == bank[i].length` </br>
🔹 `1 <= m, n <= 500` </br>
🔹 `bank[i][j]` is either `'0'` or `'1'`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Math** </br>
🔸 **String** </br>
🔸 **Matrix** </br>

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
