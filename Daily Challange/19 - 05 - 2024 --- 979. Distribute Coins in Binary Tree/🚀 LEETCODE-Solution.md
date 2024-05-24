# 👏💯Beats 100% JAVA 🎉 || 100% JS 🎉|| PYTHON 🎉|| C 🎉||✅ Beggar Coin Principle || 🥳PostOrder ONLY 🧩--> [LEETCODE](https://leetcode.com/problems/distribute-coins-in-binary-tree/solutions/5174766/beats-100-java-100-js-python-c-beggar-coin-principle-postorder-only) 


# Screenshot 🎉

![979.png](https://assets.leetcode.com/users/images/097a7824-6fbe-4fb1-acea-508ec032ceae_1716017067.0270724.png)

![979 js.png](https://assets.leetcode.com/users/images/901fe556-f8f1-4d2d-a401-7d91ee195757_1716017076.9698863.png)



---



# Intuition 🤔
<!-- Describe your first thoughts on how to solve this problem. -->
    - We have a lot of coins in our pockets (Node),
    - And total coin are equal to beggars out there
    - And we need to give one coin to every beggar

 - We will count steps or every move that we take
    
- `Here one move will be` to `move one coin `

- Hence if we `move 2 coin` then total `moves will be 2`

`Ex 1.` ----------------------------------------------------


![que 1 979.png](https://assets.leetcode.com/users/images/fc19b25c-c98e-44da-b20b-35e4984f1cbd_1716032760.0188363.png)

```
    Here 1 coin will move from 1 -> 2
                                    Total moves will be 2
    AND 1 coin will move from 1 -> 3
```

---

`Ex 2.` ----------------------------------------------------

![que 2 979.png](https://assets.leetcode.com/users/images/38569ef5-377d-4e9a-a6ad-6561edf054ea_1716032887.4408095.png)


```
    Here 2 coin will move from 2 -> 1
                                  Total moves will be 2 + 1 = 3
    Then 1 coin will move from 1 -> 3
```


---


# Approach 🥳
<!-- Describe your approach to solving the problem. -->
    Begger coin destribution concept (Recursive)

`Concept` --> 

1. let say we have 3 pocket with full of coin `left` `right` and `main`
2. so we'll `collect all the coins` from all pocket 
3. `give one coin to one begger `
4. `Rest coin` will *shift* to `other pocket`

5. And what ever `coin we move from left pocket or right pocket`
6.  It will `count as our one move `
---

# Understand with code 🤗

    We will use Postorder traversal method

    - In which we have 5 works to do
    
    1. Write our base condition.
    2. Call for left root and assign to leftCoins
    3. Call for right root and assign to rightCoins
    4. Calc moves ---
        moves will be abs value of leftCoins and rightCoins
    5. Return the leftCoins + rightCoins + selfCoin - 1.
---

`Step 1` **Make a function root and a Global moves variable** 

    move will count every one coin move
JAVA
```JAVA []
    public int moves;
    public int countmoves(TreeNode root) {

    }
```
JAVASCRIPT
```JAVASCRIPT []
    let moves;
    var countmoves = function (root) {
    
    }
``` 
PYTHON    
```PYTHON []
    self.moves = 0
    def countmoves(node):
```
C
```C []
    int moves;
    int countmoves(struct TreeNode *root){

    }
```
---
`Step 2` **Write our base condition** 

    Explanation - Base case return 0 

- IF It will find a node that is null. 
- Because `every leaf node` have a `null` to it's `left and right `
- and hence we have to return 0 from there 
- because `there will no coins we'll get`
JAVA
```JAVA []
    if (root == null) {
        return 0;
    }
```
JAVASCRIPT
```JAVASCRIPT []
    if (!root) {
        return 0;
    }
```
PYTHON
```PYTHON []
    if not root:
        return 0
```
C
```C []
    if (root == NULL){
        return 0;
    }
```
---
`Step 3` **Call for *LEFT* and *RIGHT***

    Explanation - Recursive call

- We'll call our same function again for the left AND right part of TREE
- And assign to leftCoins and rightCoins  
JAVA
```JAVA []
    int leftCoins = countmoves(root.left);
    int rightCoins = countmoves(root.right);

```
JAVASCRIPT
```JAVASCRIPT []
    let leftCoins = countmoves(root.left);
    let rightCoins = countmoves(root.right);

```
PYTHON
```PYTHON []
    left_coins = self.countmoves(root.left)
    right_coins = self.countmoves(root.right)

```
C
```C []
    int leftCoins = countmoves(root->left);
    int rightCoins = countmoves(root->right);

```
---

`Step 4` **Count our moves** 

    move will count every one coin move From leftCoins and rightCoins

    We'll count abs because if there will 0 coin then it will return -1

    (-1) Means it will take one coin from it's upper pocket
JAVA
```JAVA []
    moves += Math.abs(leftCoins) + Math.abs(rightCoins);
```
JAVASCRIPT
```JAVASCRIPT []
     moves += Math.abs(leftCoins) + Math.abs(rightCoins);
``` 
PYTHON    
```PYTHON []
    self.moves += abs(left_coins) + abs(right_coins)
```
C
```C []
    moves += abs(leftCoins) + abs(rightCoins);
```

---
`Step 5.` **Finally return the *leftCoins + rightCoins + selfCoin - 1***

    we'll add all coins and give 1 to beggar

                AND

    rest return to upper pocket
JAVA
```JAVA []
    return leftCoins + rightCoins + root.val - 1; 
```
JAVASCRIPT
```JAVASCRIPT []
    return leftCoins + rightCoins + root.val - 1; 
```
PYTHON
```PYTHON []
    return left_coins + right_coins + root.val - 1
```
C
```C []
    return leftCoins + rightCoins + root->val - 1; 
```
---

`Step 6.` **Call our *countmoves* from our *distributeCoins* main funtion and return the value Of moves**

JAVA
```JAVA []
    public int distributeCoins(TreeNode root) {
        moves = 0;
        countmoves(root);
        return moves;
    }
```
JAVASCRIPT
```JAVASCRIPT []
    var distributeCoins = function (root) {
        moves = 0;
        countmoves(root)
        return moves;
    };
```
PYTHON
```PYTHON []
    def distributeCoins(self, root: Optional[TreeNode]) -> int:
        self.steps = 0

        # calling the function
        self.countmoves(root)

        return self.steps
```
C
```C []
    int distributeCoins(struct TreeNode* root) {
        moves = 0;
        countmoves(root);
        return moves;
    }
```






---
# Complexity 🫰
- Time complexity: $$O(n)$$ 🫤
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(1)$$ 💯
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

---




# Code 💖

JAVA
```JAVA []
class Solution {
    public int moves;

    public int countmoves(TreeNode root) {
        if (root == null) {
            return 0;
        }

        int leftCoins = countmoves(root.left);
        int rightCoins = countmoves(root.right);

        moves += Math.abs(leftCoins) + Math.abs(rightCoins);

        return leftCoins + rightCoins + root.val - 1; 
    }

    public int distributeCoins(TreeNode root) {
        moves = 0;
        countmoves(root);
        return moves;
    }

}
```

JAVASCRIPT
```JAVASCRIPT []
let moves;

var countmoves = function (root) {
    if (!root) {
        return 0;
    }

    let leftCoins = countmoves(root.left);
    let rightCoins = countmoves(root.right);

    moves += Math.abs(leftCoins) + Math.abs(rightCoins);

    return root.val + leftCoins + rightCoins - 1;
}

var distributeCoins = function (root) {
    moves = 0;
    countmoves(root)
    return moves;
};
```
PYTHON
```PYTHON []
class Solution:

    def countmoves(self, root):
        if not root:
            return 0

        left_coins = self.countmoves(root.left)
        right_coins = self.countmoves(root.right)

        self.steps += abs(left_coins) + abs(right_coins)

        return left_coins + right_coins + root.val - 1


    def distributeCoins(self, root: Optional[TreeNode]) -> int:
        self.steps = 0

        # calling the function
        self.countmoves(root)

        return self.steps

```
C
```C []
int moves;

int countmoves(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int leftCoins = countmoves(root->left);
    int rightCoins = countmoves(root->right);

    moves += abs(leftCoins) + abs(rightCoins);

    return root->val + leftCoins + rightCoins - 1;
}

int distributeCoins(struct TreeNode* root) {
    moves = 0;
    countmoves(root);
    return moves;
}
```
