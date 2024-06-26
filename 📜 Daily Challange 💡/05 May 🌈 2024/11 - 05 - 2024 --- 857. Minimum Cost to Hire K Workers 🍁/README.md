# 857. Minimum Cost to Hire K Workers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-cost-to-hire-k-workers/description/?envType=daily-question&envId=2024-05-11"><strong>➥ 🫀 857 Leetcode Que  Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` workers. You are given two integer arrays `quality` and wage where `quality[i]` is the quality of the `ith` worker and `wage[i]` is the minimum wage expectation for the `ith` worker.

### We want to hire exactly `k` workers to form a `paid group`. To hire a group of k workers, we must pay them according to the following rules:

- Every worker in the paid group must be paid at least their minimum wage expectation.

- In the group, each worker's pay must be directly proportional to their quality. This means if a worker’s quality is double that of another worker in the group, then they must be paid twice as much as the other worker.

### Given the integer `k`, return the least amount of money needed to form a paid group satisfying the above conditions. Answers within 10<sup>-5</sup> of the actual answer will be accepted.

 

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ quality = [10,20,5], wage = [70,50,30], k = 2

  ### Output  ➤ 105.00000

  ### Explanation  ➤ We pay 70 to 0th worker and 35 to 2nd worker.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ quality = [3,1,10,10,1], wage = [4,8,2,2,7], k = 3

  ### Output  ➤ 30.66667

  ### Explanation ➤  We pay 4 to 0th worker, 13.33333 to 2nd and 3rd workers separately.


</br>

# Constraints 🔒 ˋ°•*⁀➷

- **n == quality.length == wage.length**
- **1 <= k <= n <= 104**
- **1 <= quality[i], wage[i] <= 104**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Greedy**
3. **Sorting**
4. **Heap (Priority Queue)**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/11%20-%2005%20-%202024%20---%20857.%20Minimum%20Cost%20to%20Hire%20K%20Workers%20%F0%9F%8D%81/%F0%9F%8D%81JAVA_857_MinimumCosttoHireK_Workers.java) |
