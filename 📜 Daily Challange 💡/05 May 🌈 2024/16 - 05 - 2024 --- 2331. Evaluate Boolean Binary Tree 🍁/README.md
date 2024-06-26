# 2331. Evaluate Boolean Binary Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/evaluate-boolean-binary-tree/?envType=daily-question&envId=2024-05-12"><strong>➥ ♻️ 2331 Leetcode Que  Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

###  You are given the `root` of a `full binary tree` with the following properties:

- **Leaf nodes** have either the value `0` or `1`, where `0` represents `False` and `1` represents `True`.

- **Non-leaf nodes** have either the value `2` or `3`, where 2 represents the boolean `OR` and `3` represents the boolean `AND`.

### The `evaluation` of a node is as follows:

- If the node is a leaf node, the evaluation is the `value` of the node, i.e. `True` or `False`.

- Otherwise, `evaluate` the node's two children and `apply` the boolean operation of its value with the children's evaluations.

### Return *the boolean result of evaluating the root node*.

### A `full binary tree` is a binary tree where each node has either `0` or `2` children.

### A `leaf node` is a node that has zero children.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![2331 que](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/c1dbaa84-956e-484f-b25f-b31114cea2b2)

  ### Input  ➤ root = [2,1,3,null,null,0,1]

  ### Output  ➤  true

  ### Explanation  ➤  The above diagram illustrates the evaluation process. </br> The AND node evaluates to False AND True = False. </br> The OR node evaluates to True OR False = True. </br> The root node evaluates to True, so we return true.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  root = [0]

  ### Output  ➤ false

  ### Explanation ➤ The root node is a leaf node and it evaluates to false, so we return false.


</br>

# Constraints 🔒 ˋ°•*⁀➷

- **The number of nodes in the tree is in the range `[1, 1000]`.**
- **0 <= Node.val <= 3**
- **Every node has either `0` or `2` children**
- **Leaf nodes have a value of `0` or `1`.**
- **Non-leaf nodes have a value of `2` or `3`.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Tree**
2. **Depth-First Search**
3. **Binary Tree**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/16%20-%2005%20-%202024%20---%202331.%20Evaluate%20Boolean%20Binary%20Tree%20%F0%9F%8D%81/%F0%9F%8D%81JAVA_2331_EvaluateBooleanBinaryTree.java) |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/16%20-%2005%20-%202024%20---%202331.%20Evaluate%20Boolean%20Binary%20Tree%20%F0%9F%8D%81/%F0%9F%94%8F%20Leetcode%20sol%202331.%20Evaluate%20Boolean%20Binary%20Tree.md)  |
