# 1482. Minimum Number of Days to Make m Bouquets

</br> 

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/?envType=daily-question&envId=2024-06-23"><strong>➥ ☢️ 1482 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `bloomDay`, an integer m and an integer `k`.

### You want to make `m` bouquets. To make a bouquet, you need to use `k` adjacent flowers from the garden.

### The garden consists of `n` flowers, the `ith` flower will bloom in the `bloomDay[i]` and then can be used in **exactly one** bouquet.

### *Return the minimum number of days you need to wait to be able to make m bouquets from the garden. If it is impossible to make m bouquets return -1*.

 

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ bloomDay = [1,10,3,10,2], m = 3, k = 1

  ### Output  ➤ 3

  ### Explanation  ➤ Let us see what happened in the first three days. x means flower bloomed and _ means flower did not bloom in the garden.

    We need 3 bouquets each should contain 1 flower.
    After day 1: [x, _, _, _, _]   // we can only make one bouquet.
    After day 2: [x, _, _, _, x]   // we can only make two bouquets.
    After day 3: [x, _, x, _, x]   // we can make 3 bouquets. The answer is 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ bloomDay = [1,10,3,10,2], m = 3, k = 2

  ### Output  ➤ -1

  ### Explanation ➤   We need 3 bouquets each has 2 flowers, that means we need 6 flowers. We only have 5 flowers so it is impossible to get the needed bouquets and we return -1.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ bloomDay = [7,7,7,7,12,7,7], m = 2, k = 3

  ### Output  ➤ 12

  ### Explanation ➤   We need 2 bouquets each should have 3 flowers.
    Here is the garden after the 7 and 12 days:
    After day 7: [x, x, x, x, _, x, x]
    We can make one bouquet of the first three flowers that bloomed. We cannot make another bouquet from the last three flowers that bloomed because they are not adjacent.
    After day 12: [x, x, x, x, x, x, x]
    It is obvious that we can make two bouquets in different ways.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **bloomDay.length == n**
- **1 <= bloomDay[i] <= 10^9**
- **1 <= m <= 10^6**
- **1 <= k <= n**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Binary Search**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/19%20-%2006%20-%202024%20---%201482.%20Minimum%20Number%20of%20Days%20to%20Make%20m%20Bouquets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%F0%9F%8D%81JAVA_1482_MinimumNumberOfDaysToMakemBouquets.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/19%20-%2006%20-%202024%20---%201482.%20Minimum%20Number%20of%20Days%20to%20Make%20m%20Bouquets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%F0%9F%8D%B0PYTHON_1482_MinimumNumberOfDaysToMakemBouquets.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   |    [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/19%20-%2006%20-%202024%20---%201482.%20Minimum%20Number%20of%20Days%20to%20Make%20m%20Bouquets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%E2%98%83%EF%B8%8FJAVASCRIPT_1482_MinimumNumberOfDaysToMakemBouquets.js) |

