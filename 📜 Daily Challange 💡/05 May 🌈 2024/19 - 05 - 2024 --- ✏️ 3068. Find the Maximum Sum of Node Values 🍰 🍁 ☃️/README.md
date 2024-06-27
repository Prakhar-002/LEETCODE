# 3068. Find the Maximum Sum of Node Values

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-maximum-sum-of-node-values/?envType=daily-question&envId=2024-05-17"><strong>➥ ☢️ 3068 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There exists an `undirected` tree with n nodes numbered `0` to `n - 1`. You are given a `0-indexed` 2D integer array `edges` of length `n - 1`, where `edges[i] = [ui, vi]` indicates that there is an edge between nodes ui and vi in the tree. You are also given a `positive` integer k, and a `0-indexed` array of `non-negative` integers `nums` of length n, where `nums[i]` represents the `value` of the node numbered i.

### Alice wants the sum of values of tree nodes to be `maximum`, for which Alice can perform the following operation `any` number of times `(including zero)` on the tree:

### Choose any edge `[u, v]` connecting the nodes u and v, and update their values as follows:

- `nums[u] = nums[u] XOR k`

- `nums[v] = nums[v] XOR k`

### Return *the `maximum` possible `sum` of the `values` Alice can achieve by performing the operation `any` number of times*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![3068 que 1](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/75100c7d-3f79-4e76-a06d-90a9fb271df8)


  ### Input  ➤ nums = [1,2,1], k = 3, edges = [[0,1],[0,2]]

  ### Output  ➤ 6

  ### Explanation  ➤ Alice can achieve the maximum sum of 6 using a single operation: </br> - Choose the edge [0,2]. nums[0] and nums[2] become: 1 XOR 3 = 2, and the array nums becomes: [1,2,1] -> [2,2,2]. </br> The total sum of values is 2 + 2 + 2 = 6. </br> It can be shown that 6 is the maximum achievable sum of values.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![3068 que 2](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/71908f57-00ac-4b62-8823-c64131580260)


  ### Input ➤ nums = [2,3], k = 7, edges = [[0,1]]

  ### Output  ➤ 9

  ### Explanation ➤ Alice can achieve the maximum sum of 9 using a single operation: </br> - Choose the edge [0,1]. nums[0] becomes: 2 XOR 7 = 5 and nums[1] become: 3 XOR 7 = 4, and the array nums becomes: [2,3] -> [5,4]. </br> The total sum of values is 5 + 4 = 9. </br> It can be shown that 9 is the maximum achievable sum of values.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

![3068 que 3](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/40e4682c-1bf2-408a-9884-20b3aa8feae4)


  ### Input ➤ nums = [7,7,7,7,7,7], k = 3, edges = [[0,1],[0,2],[0,3],[0,4],[0,5]]

  ### Output  ➤ 42

  ### Explanation  ➤ The maximum achievable sum is 42 which can be achieved by Alice performing no operations.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **2 <= n == nums.length <= 2 * 10^4**
- **1 <= k <= 10^9**
- **0 <= nums[i] <= 10^9**
- **edges.length == n - 1**
- **edges[i].length == 2**
- **0 <= edges[i][0], edges[i][1] <= n - 1**
- **The input is generated such that edges represent a valid tree.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Dynamic Programming**
3. **Greedy**
4. **Bit Manipulation**
5. **Tree**
6. **Sorting**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/19%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%203068.%20Find%20the%20Maximum%20Sum%20of%20Node%20Values%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%8D%81JAVA_3068FindTheMaximumSumOfNodeValues.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/19%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%203068.%20Find%20the%20Maximum%20Sum%20of%20Node%20Values%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%8D%B0PYHTON_3068FindTheMaximumSumOfNodeValues.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/19%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%203068.%20Find%20the%20Maximum%20Sum%20of%20Node%20Values%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%E2%98%83%EF%B8%8FJAVASCRIPT_3068FindTheMaximumSumOfNodeValues.js) |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/find-the-maximum-sum-of-node-values/solutions/5178932/python-js-java-best-visualization-new-question-only-sorting)  |
