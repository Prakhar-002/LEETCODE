# 2058. Find the Minimum and Maximum Number of Nodes Between Critical Points

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/description/?envType=daily-question&envId=2024-07-05"><strong>➥ ☢️ 2058 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A `critical point` in a linked list is defined as `either` a `local maxima` or a `local minima`.

### A node is a `local maxima` if the current node has a value `strictly greater` than the previous node and the next node.

### A node is a `local minima` if the current node has a value `strictly smaller` than the previous node and the next node.

### Note that a node can only be a local maxima/minima if there exists `both` a previous node and a next node.

### Given a linked list `head`, return *an array of length 2 containing `[minDistance, maxDistance]` where `minDistance` is the `minimum distance` between `any two distinct` critical points and `maxDistance` is the `maximum distance` between `any two distinct` critical points. If there are fewer than two critical points, return `[-1, -1]`*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ head = [3, 1]

  ### 📤 Output  ➤ [-1, -1]

  ### 🔦 Explanation  ➤ There are no critical points in [3,1].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ head = [5,3,1,2,5,1,2]

  ### 📤 Output  ➤ [1,3]

  ### 🔦 Explanation ➤ There are three critical points:</br> - [5,3,1,2,5,1,2]: The third node is a local minima because 1 is less than 3 and 2.</br> - [5,3,1,2,5,1,2]: The fifth node is a local maxima because 5 is greater than 2 and 1.</br> - [5,3,1,2,5,1,2]: The sixth node is a local minima</br> because 1 is less than 5 and 2.</br> The minimum distance is between the fifth and the sixth node. minDistance = 6 - 5 = 1.</br> The maximum distance is between the third and the sixth node. maxDistance = 6 - 3 = 3.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ head = [1,3,2,2,3,2,2,2,7]

  ### 📤 Output  ➤ [3,3]

  ### 🔦 Explanation  ➤ There are two critical points:</br> - [1,3,2,2,3,2,2,2,7]: The second node is a local maxima because 3 is greater than 1 and 2.</br> - [1,3,2,2,3,2,2,2,7]: The fifth node is a local maxima because 3 is greater than 2 and 2.</br> Both the minimum and maximum distances are between the second and the fifth node.</br> Thus, minDistance and maxDistance is 5 - 2 = 3.</br> Note that the last node is not considered a local maxima because it does not have a next node.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The number of nodes in the list is in the range [2, 10<sup>5</sup>].** </br>
🔹 **1 <= Node.val <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Linked List**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/05%20-%2007%20-%202024%20---%202058.%20Find%20the%20Minimum%20and%20Maximum%20Number%20of%20Nodes%20Between%20Critical%20Points%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA-2058-FindTheMinAndMaxNoOfNodesBtwCriticalPoints.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/05%20-%2007%20-%202024%20---%202058.%20Find%20the%20Minimum%20and%20Maximum%20Number%20of%20Nodes%20Between%20Critical%20Points%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP-2058-FindTheMinAndMaxNoOfNodesBtwCriticalPoints.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/05%20-%2007%20-%202024%20---%202058.%20Find%20the%20Minimum%20and%20Maximum%20Number%20of%20Nodes%20Between%20Critical%20Points%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON-2058-FindTheMinAndMaxNoOfNodesBtwCriticalPoints.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/05%20-%2007%20-%202024%20---%202058.%20Find%20the%20Minimum%20and%20Maximum%20Number%20of%20Nodes%20Between%20Critical%20Points%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT-2058-FindTheMinAndMaxNoOfNodesBtwCriticalPoints.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/05%20-%2007%20-%202024%20---%202058.%20Find%20the%20Minimum%20and%20Maximum%20Number%20of%20Nodes%20Between%20Critical%20Points%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C-2058-FindTheMinAndMaxNoOfNodesBtwCriticalPoints.c)  |

