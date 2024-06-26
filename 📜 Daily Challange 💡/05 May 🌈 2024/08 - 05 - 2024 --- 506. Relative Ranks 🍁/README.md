# 506. Relative Ranks

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/relative-ranks/?envType=daily-question&envId=2024-05-01"><strong>➥ ♻️ 506 Leetcode Que Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `score` of size `n`, where `score[i]` is the score of the `ith` athlete in a competition. All the scores are guaranteed to be `unique`.

### The athletes are `placed` based on their scores, where the `1`<sup>st</sup> place athlete has the highest score, the `2`<sup>nd</sup>  place athlete has the `2`<sup>nd</sup> highest score, and so on. The placement of each athlete determines their rank:

- The `1st` place athlete's rank is `"Gold Medal"`.

- The `2nd` place athlete's rank is `"Silver Medal"`.

- The `3rd` place athlete's rank is `"Bronze Medal"`.

- For the `4th` place to the `nth` place athlete, their rank 
is their placement number (i.e., the `xth` place athlete's rank is `"x"`).

### Return an array answer of size n where answer[i] is the rank of the ith athlete.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤  score = [5,4,3,2,1]

  ### Output  ➤ ["Gold Medal","Silver Medal","Bronze Medal","4","5"]

  ### Explanation  ➤ The placements are [1st, 2nd, 3rd, 4th, 5th].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ score = [10,3,8,9,4]

  ### Output  ➤  ["Gold Medal","5","Bronze Medal","Silver Medal","4"]

  ### Explanation ➤  The placements are [1st, 5th, 3rd, 2nd, 4th].
</br>

# Constraints 🔒 ˋ°•*⁀➷

- **n == score.length**
- **1 <= n <= 104**
- **0 <= score[i] <= 106**
- **All the values in score are unique.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Sorting**
3. **Heap (Priority Queue)**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/08%20-%2005%20-%202024%20---%20506.%20Relative%20Ranks%20%F0%9F%8D%81/%F0%9F%8D%81JAVA_506_RelativeRanks.java) |