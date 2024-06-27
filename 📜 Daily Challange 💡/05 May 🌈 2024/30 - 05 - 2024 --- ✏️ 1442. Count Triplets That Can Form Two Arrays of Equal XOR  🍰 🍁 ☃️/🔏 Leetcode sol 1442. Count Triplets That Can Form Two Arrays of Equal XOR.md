# 🚀 100% Beats ♻️ || Champion's Explanation 🔥|| Cute Formatted with Examples 🥹|| 3 languages 🚀
<h1 align="center"> 

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/solutions/5230002/100-beats-champion-s-explanation-cute-formatted-with-examples-3-languages"><strong>➥ 💡 Live Solution On Leetcode ✒️</strong></a>
</h2>



# Screenshot 🎉 

![1442.png](https://assets.leetcode.com/users/images/a7ff6684-65b7-416e-9cea-144a72a80f27_1717051150.907094.png)


# Intuition 🤔
<!-- Describe your first thoughts on how to solve this problem. -->
    `Given`--> One array with
    
    1 <= arr[i] <= 10^8 Value can not 0

    1 <= arr.length <= 300

---

`Que description` --> 

    we have to find a subArray length >= 2 

    How do we know >= 2 ? 

    Ans -> we have to find i, j, k 3 index 

    which should be in order 
        
    1. 0 <= i < j -> means i can be 0 but not equal to j
    
    2. i < j <= k -> j can be equal to k
    
    3. j <= k < arr.length -> k can be equal to length and j
    
`Final i j k can traverse upto `

- `0 <= i < arr.length - 1`

- `i + 1 <= j < arr.length`

- `j <= k < arr.length`

`We will count a and b as given in que as` -->

    A will be XOR upto j - 1  for Ith travese

        a = arr[i] ^ arr[i + 1] ^ ... ^ arr[j - 1]

    B will be XOR upto k  for Jth traverse

        b = arr[j] ^ arr[j + 1] ^ ... ^ arr[k]

`And if a == b we'll count one triplet`

- **Basically it's not a triplet it will be a subArray of len >= 2**

---

# XOR Properties 😍
<!-- Describe your approach to solving the problem. -->

`Let's Discuss some properties of XOR first`

![1442 que.png](https://assets.leetcode.com/users/images/828e6b38-8eb3-4ad3-be1e-a29167f66b57_1717053132.814459.png)


`1.` If we take `xor of same value` `X ^ X it will be 0` from table

    `Ex.` x = 11011
          x = 11011

        X ^ X == 00000

`2.` If `XOR of some values are 0` then `thier every part is complement`

    `Ex.`  if X1 ^ X2 ^ X3 ^ X4 = 0

        Then  X1 = X2 ^ X3 ^ X4

        Then  X1 ^ X2 = X3 ^ X4

        Then  X1 ^ X2 ^ X3 = X4


 `How do we prove it ?`

    `Ex.`  if X1 ^ X2 ^ X3 ^ X4 = 0

        take xor both side with X1 

              X1 ^ X1 ^ X2 ^ X3 ^ X4 = X1 ^ 0 

        (X1 ^ X1 = 0) && (X1 ^ 0 = X1) hence

         -> X2 ^ X3 ^ X4 = X1



# Approach $$O(N ^ 2)$$

`Instead of looking for half a portion A and B `        

- We will make subarray stating with 0 index 

- and count all it's XOR 

        `Ex.` [2, 3, 1, 6, 7] 

            [2]             XOR = 2

            [2, 3]          XOR = 1

            [2, 3, 1]       XOR = 0  🚀

            [2, 3, 1, 6]    XOR = 6

            [2, 3, 1, 6, 7] XOR = 1

- And then starting from `next index`


        `Ex.` [2, 3, 1, 6, 7]  

            [3]          XOR = 3

            [3, 1]       XOR = 2 

            [3, 1, 6]    XOR = 4

            [3, 1, 6, 7] XOR = 3

- And then starting from `next index` and `upto end` 


**When ever we got the 🚀 curXOr = 0 We will count Triplets**

    `Ex.`

        we got a solution at [2, 3, 1] 

        Here i will be at 2 (0)

        And k will be at 1 (2)

        For j it can be at 3(1) or 1(2) because j can be <= k

        Hence we'll count every possible solution 

        Triplets += k - i

# Understand with code 🥰

       There will be 6 steps 

    Step 1 -> Make variables Triplets

    Step 2 -> Apply for loop from 0 to len(s) - 1  FOR I 

        We can go upto len - 1 because i < j <= arr.length

    Step 3 -> Make curXor and assign with arr[i] current index value

    Step 4 -> Apply for loop from  i + 1 to arr.length  FOR K

        We can go upto (length) because i < K <= arr.length 

    Step 5 -> Take XOR and add to our curXor 

    Step 6 -> IF curXor get 0 somewhere add K - I To Triplets

    Step 7 -> return Triplets
---

`Step 1 ` **Making variables** 

JAVA
```JAVA []
class Solution {
    public int countTriplets(int[] arr) {
        int triplets = 0;
    }
}

```
PYTHON
```PYTHON []
class Solution:
    def countTriplets(self, arr: List[int]) -> int:
        triplets = 0
```
JAVASCRIPT
```JAVASCRIPT []
var countTriplets = function (arr) {
    let triplets = 0
}
```
---

`Step 2 - 3 ` **Apply for loop and assign curXor**

JAVA
```JAVA []
    for (int i = 0; i < arr.length - 1; i++) {
        int curXor = arr[i];
    }
```
PYTHON
```PYTHON []
    for i in range(l - 1):
        curXor = arr[i]

```
JAVASCRIPT
```JAVASCRIPT []
    for (let i = 0; i < arr.length - 1; i++) {
        let curXor = arr[i];
    }
```

---

`Step 4 - 5 - 6 ` **Apply k loop inc curXor and triplet for curXor = 0**

JAVA
```JAVA []
    for (int k = i + 1; k < arr.length; k++) {
        curXor ^= arr[k];
        if (curXor == 0) {
                triplets += k - i;
        }
    }
```
PYTHON
```PYTHON []
    for k in range(i + 1, l):
        curXor ^= arr[k]
        if curXor == 0:
            triplets += k - i
```
JAVASCRIPT
```JAVASCRIPT []
    for (let k = i + 1; k < arr.length; k++) {
        curXor ^= arr[k];
        if (curXor == 0) {
            triplets += k - i;
        }
    }

```

---

`Step 6 ` **Finally return Triplet** 


JAVA
```JAVA []
    return triplets;
```
PYTHON
```PYTHON []
    return triplets
```
JAVASCRIPT
```JAVASCRIPT []
    return triplets;

```
---
 

# Complexity ☃️

- Time complexity: O(n ^ 2) ♻️

- Space complexity: O(1) 🔥

 ---
# Code 💖

JAVA
``` JAVA []
class Solution {
      public int countTriplets(int[] arr) {
            int triplets = 0;

            for (int i = 0; i < arr.length - 1; i++) {
                  int curXor = arr[i];
                  for (int k = i + 1; k < arr.length; k++) {
                        curXor ^= arr[k];
                        if (curXor == 0) {
                              triplets += k - i;
                        }
                  }
            }

            return triplets;
      }
}
```
PYTHON
```PYTHON []
class Solution:
    def countTriplets(self, arr: List[int]) -> int:
        triplets = 0

        for i in range(l - 1):
            curXor = arr[i]
            for k in range(i + 1, l):
                curXor ^= arr[k]
                if curXor == 0:
                    triplets += k - i

        return triplets

```
JAVASCRIPT
```JAVASCRIPT []
var countTriplets = function (arr) {
    let triplets = 0

    for (let i = 0; i < arr.length - 1; i++) {
        let curXor = arr[i];
        for (let k = i + 1; k < arr.length; k++) {
            curXor ^= arr[k];
            if (curXor == 0) {
                triplets += k - i;
            }
        }
    }

    return triplets;
};   
```
![UPVOTE.gif](https://assets.leetcode.com/users/images/028ea8ad-9165-42d8-9c1b-5f94995c1846_1717056921.8383434.gif)

