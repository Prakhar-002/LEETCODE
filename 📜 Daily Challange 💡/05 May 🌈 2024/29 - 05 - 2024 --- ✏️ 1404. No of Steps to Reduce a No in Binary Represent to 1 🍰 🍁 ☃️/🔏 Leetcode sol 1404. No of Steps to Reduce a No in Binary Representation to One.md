# ✨Beats 100% JAVA || ☃️ Best formated solution 🚀|| with multiple image💡|| Step wise explanation🎲|

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/solutions/5224440/beats-100-java-best-formated-solution-with-multiple-image-step-wise-explanation"><strong>➥ 💡 Live Solution On Leetcode ✒️</strong></a>
</h2>

# Screenshot 🎉 

![1404 java.png](https://assets.leetcode.com/users/images/5e6635da-2587-4156-82ad-ab4ebdc6bbd6_1716957074.9772718.png)


# Intuition 🤔
<!-- Describe your first thoughts on how to solve this problem. -->
    `Given`--> 
    
    1 string name (s) which is a binary number 

---

    `Que description` -->

    we have to do some opertation on it 

    1. If binary number is even then devide by 2
    
    2. If binary number is odd then add 1 to it

---

    `Explanation` 

    - A binary number is even when last digit is 0 

        `Ex.` 10000  --> 16

    - And an odd one when It's first digit is 1

        `Ex.` 11010  --> 26

# Convert Binary to decimal --> 

    For odd case 

![1404 que even.png](https://assets.leetcode.com/users/images/14e47905-7242-4b46-9072-725777225301_1716958108.6914992.png)

    For even case

![1404 que even .png](https://assets.leetcode.com/users/images/bc3d8c80-80a0-4342-80c8-d22355313e8d_1716958296.4244597.png)

---

# Approach 😍

---

## DEVIDE BY 2 💡

    For the even case we got 0 at last position 

    and by deviding by 2 for all binary number last 0 will be removed 

    `Ex.` 1111100 / 2 = 111110 -- 60 / 2 = 30

![1404 que devide 2.png](https://assets.leetcode.com/users/images/e245162d-857e-431e-b1a8-1f3e6de0d755_1716958644.7177227.png)

## Adding 1 in odd 💡

    Now we know last digit is 1 and by adding 1 

    We will get 2 means 10

      `Ex`  11101  + 1 == 11110

    But the problem is we don't know weather the next digit is 1 or 0

1 -- `How will we extract our last digit` 

    We loop our string from last index 

    Extract the last index add our carry(carry can be 1 or 0 ) 

    and mod it by 2 (i + 1 = 2 but binary will be 10 then 2 % 2 = 0)
 


2 -- `We will make a carry variable which wil store our carry`

`Case 1 ` **If digit is 0** 

    `Ex.` == 10100  + 1 == 10101 

    Carry will store 1

    change the carry 

`Case 2 ` **If digit is 1** 

    `Ex.` == 10101  + 1 == 10110

    Carry will store 0 

    No change in carry 


# Understand with code 🥰

    There will be 4 steps 

    Step 1 -> Make variables 

    Step 2 -> Apply for loop from len(s) - 1 to 1 

        We will go upto 1 because last digit can be 1 

        And after adding carry we can out of bound 1 + 1 = 10

    Step 3 -> Extract digit  = (last inxdex + carry) % 2

    Step 4 -> for digit 0 just count 1 step 

        We just removing 0 

    Step 5 -> for digit 1 count 2 step

        We are adding 1 to last and taking carry 2nd last

    Step 6 -> return steps + carry 

        because for the last digit it can be 1 or 0 

        steps will be inc by 1 or 0 depend on carry
---

`Step 1 ` **Making variables** 

JAVA
```JAVA []
class Solution {
    public int numSteps(String s) {
        int steps = 0;
        int carry = 0;

```
PYTHON
```PYTHON []
class Solution:
    def numSteps(self, s: str) -> int:
        steps = 0

        carry = 0
```
JAVASCRIPT
```JAVASCRIPT []
var numSteps = function (s) {
    let steps = 0

    let carry = 0

```
---

`Step 2 - 3 ` **Apply for loop and extract digit**

JAVA
```JAVA []
    for (int i = s.length() - 1; i >= 1; i--) {
        int digit = ((s.charAt(i) - '0') + carry) % 2;

    }

```
PYTHON
```PYTHON []
    for i in reversed(range(1, len(s))):
        digit = (int(s[i]) + carry) % 2

```
JAVASCRIPT
```JAVASCRIPT []
    for (let i = s.length - 1; i >= 1; i--) {
        let digit = ((s.charAt(i).charCodeAt(0) - '0'.charCodeAt(0)) + carry) % 2


    }

```
---

`Step - 4 - 5 ` **Inc step acc to digit**


JAVA
```JAVA []
    if (digit == 0) {
        steps++;
    } else {
        carry = 1;
        steps += 2;
    }
```
PYTHON
```PYTHON []
    if digit == 0:
        steps += 1

    else:
        carry = 1
        steps += 2
```
JAVASCRIPT
```JAVASCRIPT []

    if (digit == 0) {
        steps++;
    } else {
        carry = 1;
        steps += 2;
    }

```
---

`Step 6 ` **Finally return the steps + carry** 

JAVA
```JAVA []
    return steps + carry;
```
PYTHON
```PYTHON []
    return steps + carry
```
JAVASCRIPT
```JAVASCRIPT []
    return steps + carry;

```
---

# Complexity ☃️
- Time complexity: $$O(n)$$ ♻️
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(1)$$ 🔥
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

---
# Code 💖

```JAVA []
class Solution {
    public int numSteps(String s) {
        int steps = 0;
        int carry = 0;

        for (int i = s.length() - 1; i >= 1; i--) {
            int digit = ((s.charAt(i) - '0') + carry) % 2;

            if (digit == 0) {
                steps++;
            } else {
                carry = 1;
                steps += 2;
            }
        }

        return steps + carry;
    }
}
```
```PYTHON []
class Solution:
    def numSteps(self, s: str) -> int:
        steps = 0

        carry = 0

        for i in reversed(range(1, len(s))):
            digit = (int(s[i]) + carry) % 2

            if digit == 0:
                steps += 1

            else:
                carry = 1
                steps += 2

        return steps + carry

```
```JAVASCRIPT []
var numSteps = function (s) {
    let steps = 0

    let carry = 0

    for (let i = s.length - 1; i >= 1; i--) {
        let digit = ((s.charAt(i).charCodeAt(0) - '0'.charCodeAt(0)) + carry) % 2

        if (digit == 0) {
            steps++;
        } else {
            carry = 1;
            steps += 2;
        }
    }

    return steps + carry
};
```