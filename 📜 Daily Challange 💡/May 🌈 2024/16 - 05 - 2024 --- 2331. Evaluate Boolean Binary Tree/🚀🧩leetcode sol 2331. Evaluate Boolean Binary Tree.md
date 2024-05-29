# 🔥💯Beats 100% of users with Java🎉||✅ 2 step code || Too Easy to understand  🎉🎊

<h2 align="center"> 

<a href="https://leetcode.com/problems/evaluate-boolean-binary-tree/solutions/5163720/beats-100-of-users-with-java-2-step-code-too-easy-to-understand"><strong>➥ Live Solution On Leetcode</strong></a>
</h2>

# Screenshot 🎉
![2331.png](https://assets.leetcode.com/users/images/8a52998d-caa5-4d3b-b8e4-75e92b146239_1715835552.454192.png)


# Intuition 🤔
<!-- Describe your first thoughts on how to solve this problem. -->
    Evaluate Boolean Binary Tree

`1.` Binary tree `contain` only `4 values `

- At leaf node only 2 value
- `1 for True`
- `0 for False` 

`2.` **Non-leaf nodes** have either the value 2 or 3

- `2 for OR`
- `3 for AND`


# Approach 😻
<!-- Describe your approach to solving the problem. -->

    There will be 2 step for recursion base solution
1. Right the `base case`

JAVA

    ```JAVA
        // Zero equals to false
        if (root.val == 0) {
            return false;
        }
        // One equals to True
        if (root.val == 1) {
            return true;
        }
    ```


2. `Call for left` and `Call for right`

JAVA

    ```JAVA
        // Left result
        boolean left = evaluateTree(root.left);

        // Right result
        boolean right = evaluateTree(root.right);
    ```

3. `Return the result `

JAVA

    ```JAVA
            // Take AND if root value is 3 

            // Take Or if root value is 2 
            return root.val == 3 ? left && right : left || right;
    ```


# Complexity 🫤
- Time complexity: $$O(n)$$
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(log n)$$
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code 💕

JAVA

```JAVA
class Solution {
    public boolean evaluateTree(TreeNode root) {
        // Zero equals to false
        if (root.val == 0) {
            return false;
        }
        // One equals to True
        if (root.val == 1) {
            return true;
        }
        // Left result
        boolean left = evaluateTree(root.left);
        // Right result
        boolean right = evaluateTree(root.right);

        // Finaly return AND if 3 OR if 2
        return root.val == 3 ? left && right : left || right;
    }
}
```

