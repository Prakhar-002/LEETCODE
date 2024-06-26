# 3075. Maximize Happiness of Selected Children

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximize-happiness-of-selected-children/?envType=daily-question&envId=2024-05-03"><strong>➥ ☢️ 3075 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `happiness` of length `n`, and a `positive` integer `k`.

### There are `n` children standing in a queue, where the `ith` child has happiness value `happiness[i]`. You want to select `k` children from these `n` children in `k` turns.

### In each turn, when you select a child, the `happiness value` of all the children that have not been selected till now decreases by `1`. Note that the happiness value cannot become negative and gets decremented `only` if it is positive.

### Return *the `maximum` sum of the happiness values of the selected children you can achieve by selecting k children*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ happiness = [1,2,3], k = 2

  ### Output  ➤ 4

  ### Explanation  ➤  We can pick 2 children in the following way:

    - Pick the child with the happiness value == 3. The happiness value of the remaining children becomes [0,1].

    - Pick the child with the happiness value == 1. The happiness value of the remaining child becomes [0]. Note that the happiness value cannot become less than 0.

    The sum of the happiness values of the selected children is 3 + 1 = 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  happiness = [1,1,1,1], k = 2

  ### Output  ➤ 1

  ### Explanation ➤  We can pick 2 children in the following way:
    - Pick any child with the happiness value == 1. The happiness value of the remaining children becomes [0,0,0].

    - Pick the child with the happiness value == 0. The happiness value of the remaining child becomes [0,0].

    The sum of the happiness values of the selected children is 1 + 0 = 1.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ happiness = [2,3,4,5], k = 1

  ### Output  ➤ 5

  ### Explanation  ➤ We can pick 1 child in the following way:
    - Pick the child with the happiness value == 5. The happiness value of the remaining children becomes [1,2,3].

    The sum of the happiness values of the selected children is 5.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= n == happiness.length <= 2 * 10^5**
- **1 <= happiness[i] <= 10^8**
- **1 <= k <= n**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Greedy**
3. **Sorting**

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/09%20-%2005%20-%202024%20---%203075.%20Maximize%20Happiness%20of%20Selected%20Children%20%F0%9F%8D%81/%F0%9F%8D%81JAVA_3075_MaximizeHappinessOfSelectedChildren.java) |