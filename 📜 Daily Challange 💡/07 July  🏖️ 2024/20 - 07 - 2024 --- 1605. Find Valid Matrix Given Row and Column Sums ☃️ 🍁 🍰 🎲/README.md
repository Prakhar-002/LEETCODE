# 1605. Find Valid Matrix Given Row and Column Sums

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums/description/?envType=daily-question&envId=2024-07-20"><strong>➥ ☢️ 1605 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two arrays `rowSum` and `colSum` of non-negative integers where `rowSum[i]` is the sum of the elements in the `i-th` row and `colSum[j]` is the sum of the elements of the `j-th` column of a 2D matrix. In other words, you do not know the elements of the matrix, but you do know the sums of each row and column.

### Find any matrix of non-negative integers of size `rowSum.length x colSum.length` that satisfies the `rowSum` and `colSum` requirements.

### Return *a 2D array representing `any` matrix that fulfills the requirements*. It's guaranteed that `at least one` matrix that fulfills the requirements exists.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ rowSum = [3,8], colSum = [4,7]

  ### 📤 Output  ➤  [[3,0], [1,7]]

  ### 🔦 Explanation  ➤ 
    0-th row: 3 + 0 = 3 == rowSum[0]
    1-st row: 1 + 7 = 8 == rowSum[1]
    0-th column: 3 + 1 = 4 == colSum[0]
    1-st column: 0 + 7 = 7 == colSum[1]
    The row and column sums match, and all matrix elements are non-negative.
    Another possible matrix is: [[1,2],
                                [3,5]]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤  rowSum = [5,7,10], colSum = [8,6,8]

  ### 📤 Output  ➤ [[0,5,0],[6,1,0],[2,0,8]]



</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= rowSum.length, colSum.length <= 500`** </br>
🔹 **0 <= rowSum[i], colSum[i] <= 10<sup>8</sup>** </br>
🔹 **`sum(rowSum) == sum(colSum)`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>
🔸 **Matrix**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

