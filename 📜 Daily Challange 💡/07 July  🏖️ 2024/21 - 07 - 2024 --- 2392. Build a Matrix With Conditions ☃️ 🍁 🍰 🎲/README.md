# 2392. Build a Matrix With Conditions

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/build-a-matrix-with-conditions/description/?envType=daily-question&envId=2024-07-21"><strong>➥ 🫀 2392 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a positive integer `k`. You are also given:

- a 2D integer array rowConditions of size n where rowConditions[i] = [abovei, belowi], and

- a 2D integer array colConditions of size m where colConditions[i] = [lefti, righti].

### The two arrays contain integers from `1` to `k`.

### You have to build a `k x k` matrix that contains each of the numbers from `1` to `k` `exactly once`. The remaining cells should have the value `0`.

### The matrix should also satisfy the following conditions:

- The number `above-i` should appear in a `row` that is strictly `above` the row at which the number `below-i` appears for all `i` from `0` to `n - 1`.

- The number `left-i` should appear in a `column` that is strictly `left` of the column at which the number `right-i` appears for all `i` from `0` to `m - 1`.

### Return *`any` matrix that satisfies the conditions. If no answer exists,* return an empty matrix.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2392 que 1](https://github.com/user-attachments/assets/5c8ebe18-89dd-4129-8f77-79fffdbdb1c1)

  ### 📥 Input  ➤ k = 3, rowConditions = [[1,2],[3,2]], colConditions = [[2,1],[3,2]]

  ### 📤 Output  ➤  [[3,0,0],[0,0,1],[0,2,0]]

  ### 🔦 Explanation  ➤ The diagram above shows a valid example of a matrix that satisfies all the conditions.

    The row conditions are the following:
    
    ➺ Number 1 is in row 1, and number 2 is in row 2, so 1 is above 2 in the matrix.
    
    ➺ Number 3 is in row 0, and number 2 is in row 2, so 3 is above 2 in the matrix.
    The column conditions are the following:
    
    ➺ Number 2 is in column 1, and number 1 is in column 2, so 2 is left of 1 in the matrix.
    
    ➺ Number 3 is in column 0, and number 2 is in column 1, so 3 is left of 2 in the matrix.
    Note that there may be multiple correct answers.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤  k = 3, rowConditions = [[1,2],[2,3],[3,1],[2,3]], colConditions = [[2,1]]

  ### 📤 Output  ➤ []

  ### 🔦 Explanation ➤ From the first two conditions, 3 has to be below 1 but the third conditions needs 3 to be above 1 to be satisfied.</br> No matrix can satisfy all the conditions, so we return the empty matrix.



</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`2 <= k <= 400`** </br>
🔹 **1 <= rowConditions.length, colConditions.length <= 10<sup>4</sup>** </br>
🔹 **rowConditions[i].length == colConditions[i].length == 2** </br>
🔹 **1 <= above<sub>i</sub>, below<sub>i</sub>, left<sub>i</sub>, right<sub>i</sub> <= k** </br>
🔹 **above<sub>i</sub> != below<sub>i</sub>** </br>
🔹 **left<sub>i</sub> != right<sub>i</sub>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Graph**  </br>
🔸 **Topological Sort**  </br>
🔸 **Matrix**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/21%20-%2007%20-%202024%20---%202392.%20Build%20a%20Matrix%20With%20Conditions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-2392-BuildAMatrixWithConditions.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/21%20-%2007%20-%202024%20---%202392.%20Build%20a%20Matrix%20With%20Conditions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-2392-BuildAMatrixWithConditions.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/21%20-%2007%20-%202024%20---%202392.%20Build%20a%20Matrix%20With%20Conditions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-2392-BuildAMatrixWithConditions.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/21%20-%2007%20-%202024%20---%202392.%20Build%20a%20Matrix%20With%20Conditions%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-2392-BuildAMatrixWithConditions.js) |
