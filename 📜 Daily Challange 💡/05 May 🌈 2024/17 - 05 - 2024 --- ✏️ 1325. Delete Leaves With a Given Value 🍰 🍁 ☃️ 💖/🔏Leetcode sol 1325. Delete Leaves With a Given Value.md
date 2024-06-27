# 👏💯Beats 100% JAVA 🎉|| PYTHON 🎉|| C 🎉|| JS 🎉||✅ Line by Line explanation || Best Approach💥

<h2 align="center"> 

<a href="https://leetcode.com/problems/delete-leaves-with-a-given-value/solutions/5170793/beats-100-java-python-c-js-line-by-line-explanation-best-approach"><strong>➥ 💡 Live Solution On Leetcode ✒️</strong></a>
</h2>

# Screenshot 🎉
![1325.png](https://assets.leetcode.com/users/images/36ab6c5e-286d-4f4a-bf74-211afc348ce0_1715947407.2992523.png)


---


# Intuition 🤔
<!-- Describe your first thoughts on how to solve this problem. -->
    We need to delete all leaf node with value == target 

`1.` **If leaf** `node's value equal to target`

![QUE 1325.png](https://assets.leetcode.com/users/images/3f42e4f7-e476-4fe4-8d60-7d871127ce04_1715948621.3020756.png)

`2.` **If we get Node after deleting the node with value == target**

    Delete that node too

![QUE 2 1325.png](https://assets.leetcode.com/users/images/aab23cd6-5d8e-4662-8060-bed5eecb87ec_1715948770.2201095.png)

`3.` **And delete nodes upto Lastlevel upto which we'll get leaf node with** 

    value == target Delete Node

![QUE 3 1325.png](https://assets.leetcode.com/users/images/5356f46f-aa83-4320-a82f-ed5cc1550cf4_1715949080.3565269.png)

  

---


# Approach 😉
<!-- Describe your approach to solving the problem. -->
    We will use Postorder traversal method

    - In which we have 5 works to do
    
    1. Write our base condition.
    2. Call for left and assign to root.left
    3. Call for right and assign to root.right
    4. Delete ---
        check for root Node and if value == target then delete it
    5. Return the root itself.
     
`Step 1` **Write our base condition** 

    Explanation - Base case return null 

- IF It will find a node that is null. 
- Because every leaf node have a null to it's left and right 
- and hence we have to return from there 
- because there will be no node after that

JAVA
```JAVA []
    if (root == null) {
        return null;
    }
```
C
```C []
    if (root == NULL){
        return NULL;
    }
```
PYTHON
```PYTHON []
    if not root:
        return None
```
JAVASCRIPT
```JAVASCRIPT []
    if (!root) {
        return null;
    }
```

---

`Step 2 AND 3` **Call for *LEFT* and *RIGHT***

    Explanation - Recursive call 

- We'll call our same function again for the left AND right part of TREE
- And assign to root's left and rigth

JAVA
```JAVA []
    root.left = removeLeafNodes(root.left, target);
    root.right = removeLeafNodes(root.right, target);

```
C
```C []
    root->left = removeLeafNodes(root->left, target);
    root->right = removeLeafNodes(root->right, target);

```
PYTHON
```PYTHON []
    root.left = self.removeLeafNodes(root.left, target)
    root.right = self.removeLeafNodes(root.right, target)

```
JAVASCRIPT
```JAVASCRIPT []
    root.left = removeLeafNodes(root.left, target);
    root.right = removeLeafNodes(root.right, target);

```

---

`Step 4` ***DELETE* our leaf *NODE***

    Explanation - Delete the Node

- We can just return the NULL
- Garbage collecter will automatically delete the node 
- If there is no link to our node GC will delete it from our memory

JAVA
```JAVA []
    if (root.val == target
            && root.left == null 
            && root.right == null) {
        return null;
    }
```
C
```C []
    if (root->val == target 
            && root->left == NULL 
            && root->right == NULL){
        return NULL;
    }
```
PYTHON
```PYTHON []
    if not root.left and not root.right and root.val == target:
        return None

```

JAVASCRIPT

``` JAVASCRIPT
    if (root.val == target
            && root.left == null 
            && root.right == null) {
        return null;
    }
```
---

`Step 5.` **Finally return the *root* itself**

JAVA
```JAVA []
    return root;
```
C
```C []
    return root;
```
PYTHON
```PYTHON []
    return root
```
JAVASCRIPT
```JAVASCRIPT []
    return root;
```

---


# Complexity 🫰
- Time complexity: $$O(n)$$ 😶‍🌫️
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(1)$$ 💯
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

---



# Code 🧑🏻‍💻

JAVA
```JAVA []
class Solution {
    public TreeNode removeLeafNodes(TreeNode root, int target) {
        if (root == null) {
            return null;
        }

        root.left = removeLeafNodes(root.left, target);
        root.right = removeLeafNodes(root.right, target);

        if (root.val == target && root.left == null && root.right == null) {
            return null;
        }

        return root;
    }
}
```
C
```C []
struct TreeNode *removeLeafNodes(struct TreeNode *root, int target){
    if (root == NULL){
        return NULL;
    }

    root->left = removeLeafNodes(root->left, target);
    root->right = removeLeafNodes(root->right, target);

    if (root->val == target && root->left == NULL && root->right == NULL){
        return NULL;
    }

    return root;
}
```
PYTHON
```PYTHON []
class Solution:
    def removeLeafNodes(
        self, root: Optional[TreeNode], target: int
    ) -> Optional[TreeNode]:
        if not root:
            return None

        root.left = self.removeLeafNodes(root.left, target)
        root.right = self.removeLeafNodes(root.right, target)

        if not root.left and not root.right and root.val == target:
            return None

        return root
```
JAVASCRIPT
```JAVASCRIPT []
    var removeLeafNodes = function (root, target) {
        if (!root) {
            return null;
        }

        root.left = removeLeafNodes(root.left, target);
        root.right = removeLeafNodes(root.right, target);

        if (root.val == target 
            && root.left == null 
            && root.right == null) {
            return null;
        }

        return root;
    };
```
