# 786. K-th Smallest Prime Fraction

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/k-th-smallest-prime-fraction/?envType=daily-question&envId=2024-05-03"><strong>➥ ☢️ 786 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a sorted integer array `arr` containing `1` and `prime` numbers, where all the integers of `arr` are unique. You are also given an integer `k`.

### For every `i` and `j` where `0 <= i < j <b arr.length`, we consider the fraction `arr[i] / arr[j]`.

### Return *the `kth` smallest fraction considered. Return your answer as an array of integers of size `2`, where `answer[0] == arr[i]` and `answer[1] == arr[j]`*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ arr = [1,2,3,5], k = 3

  ### Output  ➤ [2,5]

  ### Explanation  ➤ The fractions to be considered in sorted order are: </br> 1/5, 1/3, 2/5, 1/2, 3/5, and 2/3. </br> The third fraction is 2/5.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ arr = [1,7], k = 1

  ### Output  ➤ [1,7]

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **2 <= arr.length <= 1000**
- **1 <= arr[i] <= 3 * 10^4**
- **arr[0] == 1**
- **`arr[i]` is a `prime` number for `i > 0`.**
- **All the numbers of arr are unique and sorted in strictly increasing order.**
- **1 <= k <= arr.length * (arr.length - 1) / 2**

</br>

# Follow up ˋ°•*⁀➷

### Can you solve the problem with better than `O(n^2)` complexity?

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Two Pointers**
3. **Binary Search**
4. **Sorting**
5. **Heap (Priority Queue)**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/10%20-%2005%20-%202024%20---%20786.%20K-th%20Smallest%20Prime%20Fraction%20%F0%9F%8D%81/%F0%9F%8D%81JAVA_786_KthSmallestPrimeFraction.java) |