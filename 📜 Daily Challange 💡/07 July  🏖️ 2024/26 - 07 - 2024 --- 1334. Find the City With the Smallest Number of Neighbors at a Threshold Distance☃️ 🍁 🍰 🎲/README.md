# 1334. Find the City With the Smallest Number of Neighbors at a Threshold Distance

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/description/?envType=daily-question&envId=2024-07-26"><strong>➥ ☢️ 1334 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are n cities numbered from `0` to `n-1`. Given the array edges where `edges[i] = [from-i, to-i, weight-i]` represents a bidirectional and weighted edge between cities `from-i` and `to-i`, and given the integer `distanceThreshold`.

### Return the city with the smallest number of cities that are reachable through some path and whose distance is `at most` `distanceThreshold`, If there are multiple such cities, return the city with the greatest number.

### Notice that the distance of a path connecting cities *i* and *j* is equal to the sum of the edges' weights along that path.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1334 que 1](https://github.com/user-attachments/assets/4e4ac6fc-0ca1-4f01-9363-dd76bf9926df)

  ### 📥 Input  ➤  n = 4, edges = [[0,1,3],[1,2,1],[1,3,4],[2,3,1]], distanceThreshold = 4

  ### 📤 Output  ➤ 3

  ### 🔦 Explanation  ➤ The figure above describes the graph. 
    The neighboring cities at a distanceThreshold = 4 for each city are:

    City 0 -> [City 1, City 2]

    City 1 -> [City 0, City 2, City 3] 

    City 2 -> [City 0, City 1, City 3] 

    City 3 -> [City 1, City 2] 

    Cities 0 and 3 have 2 neighboring cities at a distanceThreshold = 4, 
    but we have to return city 3 since it has the greatest number.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![1334 que 2](https://github.com/user-attachments/assets/75424340-c54d-444e-a479-9b39410ab4e5)

  ### 📥 Input ➤ n = 5, edges = [[0,1,2],[0,4,8],[1,2,3],[1,4,2],[2,3,1],[3,4,1]], distanceThreshold = 2

  ### 📤 Output  ➤ 0

  ### 🔦 Explanation ➤ The figure above describes the graph. 
    The neighboring cities at a distanceThreshold = 2 for each city are:

    City 0 -> [City 1] 
    
    City 1 -> [City 0, City 4] 
    
    City 2 -> [City 3, City 4] 
    
    City 3 -> [City 2, City 4]
    
    City 4 -> [City 1, City 2, City 3] 
    
    The city 0 has 1 neighboring city at a distanceThreshold = 2.


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`2 <= n <= 100`** </br>

🔹 **`1 <= edges.length <= n * (n - 1) / 2`** </br>

🔹 **`edges[i].length == 3`** </br>

🔹 **0 <= from<sub>i</sub> < <sub>i</sub> < n** </br>

🔹 **1 <= weight<sub>i</sub>, distanceThreshold <= 10<sup>4</sup>** </br>

🔹 **All pairs (from<sub>i</sub>, to<sub>i</sub>) are distinct.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Dynamic Programming**  </br>
🔸 **Graph**  </br>
🔸 **Shortest Path**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/26%20-%2007%20-%202024%20---%201334.%20Find%20the%20City%20With%20the%20Smallest%20Number%20of%20Neighbors%20at%20a%20Threshold%20Distance%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1334-FindCitysmallestNghbrAtThreasholdDist.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/26%20-%2007%20-%202024%20---%201334.%20Find%20the%20City%20With%20the%20Smallest%20Number%20of%20Neighbors%20at%20a%20Threshold%20Distance%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1334-FindCitysmallestNghbrAtThreasholdDist.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/26%20-%2007%20-%202024%20---%201334.%20Find%20the%20City%20With%20the%20Smallest%20Number%20of%20Neighbors%20at%20a%20Threshold%20Distance%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1334-FindCitysmallestNghbrAtThreasholdDist.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/26%20-%2007%20-%202024%20---%201334.%20Find%20the%20City%20With%20the%20Smallest%20Number%20of%20Neighbors%20at%20a%20Threshold%20Distance%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1334-FindCitysmallestNghbrAtThreasholdDist.js) |

