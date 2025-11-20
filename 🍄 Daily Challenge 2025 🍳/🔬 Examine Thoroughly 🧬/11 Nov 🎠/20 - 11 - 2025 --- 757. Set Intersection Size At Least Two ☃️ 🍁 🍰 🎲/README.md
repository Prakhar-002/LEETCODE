# 757. Set Intersection Size At Least Two

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/set-intersection-size-at-least-two/description/?envType=daily-question&envId=2025-11-20"><strong>➥ 🫀 757 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 2D integer array `intervals` where `intervals[i] = [starti, endi]` represents all the integers from `starti` to `endi` inclusively.

### A containing set is an array `nums` where each interval from `intervals` has at least two integers in `nums`.

### For example, if `intervals = [[1,3], [3,7], [8,9]]`, then `[1,2,4,7,8,9]` and `[2,3,4,8,9]` are containing sets.

### Return the minimum possible size of a containing set.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ intervals = [[1,3],[3,7],[8,9]]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ let nums = [2, 3, 4, 8, 9]. It can be shown that there cannot be any containing array of size 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ intervals = [[1,3],[1,4],[2,5],[3,5]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ let nums = [2, 3, 4]. It can be shown that there cannot be any containing array of size 2.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ intervals = [[1,2],[2,3],[2,4],[4,5]]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ let nums = [1, 2, 3, 4, 5]. It can be shown that there cannot be any containing array of size 4.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= intervals.length <= 3000 </br>
🔹 intervals[i].length == 2 </br>
🔹 0 <= starti < endi <= 108 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Greedy** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/20%20-%2011%20-%202025%20---%20757.%20Set%20Intersection%20Size%20At%20Least%20Two%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20757.%20Set%20Intersection%20Size%20At%20Least%20Two.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/20%20-%2011%20-%202025%20---%20757.%20Set%20Intersection%20Size%20At%20Least%20Two%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20757.%20Set%20Intersection%20Size%20At%20Least%20Two.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/20%20-%2011%20-%202025%20---%20757.%20Set%20Intersection%20Size%20At%20Least%20Two%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20757.%20Set%20Intersection%20Size%20At%20Least%20Two.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/20%20-%2011%20-%202025%20---%20757.%20Set%20Intersection%20Size%20At%20Least%20Two%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20757.%20Set%20Intersection%20Size%20At%20Least%20Two.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/4b2e2f75-278f-40a9-b596-e0d9961b42b9" width = "700px" height="462px" />

</h1>
