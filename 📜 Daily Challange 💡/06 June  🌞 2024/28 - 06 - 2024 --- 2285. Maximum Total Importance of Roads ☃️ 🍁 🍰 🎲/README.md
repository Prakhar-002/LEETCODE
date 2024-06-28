# 2285. Maximum Total Importance of Roads

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-total-importance-of-roads/description/?envType=daily-question&envId=2024-06-28"><strong>➥ ☢️ 2285 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `n` denoting the number of cities in a country. The cities are numbered from `0` to `n - 1`.

### You are also given a 2D integer array `roads` where `roads[i] = [ai, bi]` denotes that there exists a `bidirectional` road connecting cities ai and bi.

### You need to assign each city with an integer value from 1 to n, where each value can only be used `once`. The `importance` of a road is then defined as the `sum` of the values of the two cities it connects.

### Return *the `maximum total importance` of all roads possible after assigning the values optimally*.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2285 que 1](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/c287445d-2efd-4482-b490-1d0b39dd9a4f)

  ### Input  ➤ n = 5, roads = [[0,1],[1,2],[2,3],[0,2],[1,3],[2,4]]

  ### Output  ➤ 43

  ### Explanation  ➤ The figure above shows the country and the assigned values of [2,4,5,3,1].

    - The road (0,1) has an importance of 2 + 4 = 6.

    - The road (1,2) has an importance of 4 + 5 = 9.

    - The road (2,3) has an importance of 5 + 3 = 8.

    - The road (0,2) has an importance of 2 + 5 = 7.

    - The road (1,3) has an importance of 4 + 3 = 7.

    - The road (2,4) has an importance of 5 + 1 = 6.

    The total importance of all roads is 6 + 9 + 8 + 7 + 7 + 6 = 43.

    It can be shown that we cannot obtain a greater total importance than 43.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2285 que 2](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/1660ccce-8264-40f3-9a96-1f66afd9c833)

  ### Input ➤  n = 5, roads = [[0,3],[2,4],[1,3]]

  ### Output  ➤ 20

  ### Explanation ➤ The figure above shows the country and the assigned values of [4,3,2,5,1].

    - The road (0,3) has an importance of 4 + 5 = 9.

    - The road (2,4) has an importance of 2 + 1 = 3.

    - The road (1,3) has an importance of 3 + 5 = 8.

    The total importance of all roads is 9 + 3 + 8 = 20.

    It can be shown that we cannot obtain a greater total importance than 20.


</br>

# Constraints 🔒 ˋ°•*⁀➷

- **2 <= n <= 5 * 10^4**
- **1 <= roads.length <= 5 * 10^4**
- **roads[i].length == 2**
- **0 <= ai, bi <= n - 1**
- **ai != bi**
- **There are no duplicate roads.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Greedy**
2. **Graph**
3. **Sorting**
4. **Heap (Priority Queue)**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/28%20-%2006%20-%202024%20---%202285.%20Maximum%20Total%20Importance%20of%20Roads%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA_2285_MaximumTotalImportanceOfRoads.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/28%20-%2006%20-%202024%20---%202285.%20Maximum%20Total%20Importance%20of%20Roads%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP_2285_MaximumTotalImportanceOfRoads.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/28%20-%2006%20-%202024%20---%202285.%20Maximum%20Total%20Importance%20of%20Roads%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON_2285_MaximumTotalImportanceOfRoads.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/28%20-%2006%20-%202024%20---%202285.%20Maximum%20Total%20Importance%20of%20Roads%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT_2285_MaximumTotalImportanceOfRoads.js) |

