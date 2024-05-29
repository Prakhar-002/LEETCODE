# 💯🔥Constant space O(1)🎉||✅ DRY RUN || ♻️ Step wise explanation || 2 Approach💥|| 4 Lang Solution

<h2 align="center"> 

<a href="https://leetcode.com/problems/student-attendance-record-i/solutions/5223682/java-100-beats-one-line-python-sol-step-wise-explanation-biggner-friendy"><strong>➥ Live Solution On Leetcode</strong></a>
</h2>


# Screenshot 🎉 

![1208.png](https://assets.leetcode.com/users/images/46207fbc-91a8-435c-a81d-4f3f0799b3af_1716875932.2448285.png)


# Intuition 🤔
<!-- Describe your first thoughts on how to solve this problem. -->
    `Given`--> 
    
    1 Two string name (s) And (t) with same length

    2 And a maxCost which tells us cost

---

    `Que description` -->

    we have to maximize the length of subStr and return the len of str

1. `subString` must be `same for both` the given subString

2. we can `change the chars of s` to **match** the `of t's subString` 

3. And we need to `maximize` this subString length

4. Now catch is the `cost of changing a cha`r of a s is -->

5. `Absolute diff of ascii value of char of t - char of s at Ith pos`
 
6. ``` java
    Math.abs(t.charAt(i) - s.charAt(i))  --> BY JAVA
     ```

7. And we `can't afford cost above given maxCost`
---
    `Ex 1`

        s = "abcd"  & t = "bcdf" maxCost = 3

        Ans =  3 because "abc" can be change to "bcd" 

        'b' - 'a' == 1
        'c' - 'b' == 1   => Total cost == 3 equal to maxCost
        'd' - 'c' == 1

`I guess all of you got the idea`


# Approach 😍
<!-- Describe your approach to solving the problem. -->

    Approach is simple and we'll use no space nothing at all

`First Approach` 

## 1. Brute force Approach  😏

    1. Make a array of all the abs diff of char at ith for s and t 

    2. And then check for the subArrays if they fit in our solution or not 

    🥰 I can weste your time to continue this appproch 

    But i don't wanna weste your time so 

    let's jump to our main sol

 `Second Approach` 


##  2. No Extra space Approach 🚀🚀

    1. Take two pointer Left assign with 0 and right for loop

    2. We'll go in whole string  // In any string length

    3. and store the cost of each time one char change

    4. and add to our curCost from right pointer 

    5. If at some pos our curCost > maxCost 

    6. inc our left pointer and dec the values from left in curCost

    7. store the max of subStringlen from (right - left + 1) and (Itself)

# Under Stand with code 🫰

    LET's understand with code first then `we will dry run this`

`Step 1` **make variables**

PYTHON
``` PYTHON []
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        curCost = 0
        subStringLen = 0

        l = 0 # left 
```
JAVA
```JAVA []
class Solution {
    public int equalSubstring(String s, String t, int maxCost) {
        int curCost = 0;
        int subStringLen = 0;

        int left = 0;

```
JAVASCRIPT
```JAVASCRIPT []
var equalSubstring = function (s, t, maxCost) {
    let curCost = 0
    let subStringLen = 0

    let left = 0
```
C
```C []
int equalSubstring(char* s, char* t, int maxCost) {
    int curCost = 0;
    int subStringLen = 0;

    int left = 0;

```
`Step 2` **Apply loop and extract our cost of each index**

- Becaue we `extract the diff at same time` 
-    that's `why we don't need arr`

PYTHON
``` PYTHON []
    
    for right in range(len(s)): 
        curCost += abs(ord(s[right]) - ord(t[right]))

```
JAVA
```JAVA []
    for (int right = 0; right < s.length(); right++) {
        curCost += Math.abs(s.charAt(right) - t.charAt(right));

    }

```
JAVASCRIPT
```JAVASCRIPT []
    for (let right = 0; right < s.length; right++) {
        curCost += Math.abs(
            s.charAt(right).charCodeAt(0) - 
                        t.charAt(right).charCodeAt(0)
            );
```
C
```C []
    for (int right = 0; right < strlen(s); right++) {
        curCost += abs(s[right] - t[right]);

    }

```

`Step 3` **subtract starting value if curCost > maxCost** 

- We'll apply `while loop for this` and `inc our left pointer`

PYTHON

``` PYTHON []
    while curCost > maxCost:
        curCost -= abs(ord(s[left]) - ord(t[l]))

        lelf += 1
```
JAVA
```JAVA []

    while (curCost > maxCost) {
        curCost -= Math.abs(s.charAt(left) - t.charAt(left));
        left++;
    }

```
JAVASCRIPT
```JAVASCRIPT []

    while (curCost > maxCost) {
        curCost -= Math.abs(s.charAt(left).charCodeAt(0) - t.charAt(left).charCodeAt(0));

        left++;
    }
```
C
```C []

    while (curCost > maxCost) {
        curCost -= abs(s[left] - t[left]);
        left++;
    }
```

`Step 4` Now `Store the max len` and return it

    We will count our len in the loop and return to main fun

PYTHON
``` PYTHON []
    
            subStringLen = max(subStringLen, r - l + 1)

        return subStringLen
```
JAVA
```JAVA []
            subStringLen = Math.max(subStringLen, right - left + 1);
        }

        return subStringLen;
    }
}

```
JAVASCRIPT
```JAVASCRIPT []
        subStringLen = Math.max(subStringLen, right - left + 1);
    }

    return subStringLen;
};
```
C
```C []
  
        subStringLen = fmax(subStringLen, right - left + 1);
    }

    return subStringLen;
}

``` 

# DRY RUN ☢️

                         `Taking same example` 

---


    `Ex`

        s = "abcd"  & t = "bcdf" maxCost = 3

        subStrinLen = 0



```
In the loop 
s = "abcd" 
     ^ l = 0  
                  curCost = 1   subStrinLen = 1
     | r = 0  
```

```
In the loop
s = "abcd" 
     ^ l = 0  
                  curCost = 2   subStrinLen = 2
      ^  
      | r = 1  
```
```
In for the loop
s = "abcd" 
     ^ l = 0  
                  curCost = 3   subStrinLen = 3
       ^  
       | r = 2 
```

```
In for the loop
s = "abcd" 
     ^ l = 0  
                  curCost = 5   subStrinLen = 3
        ^  
        | r = 3 

    In while loop 
        s = "abcd" 
              ^ l = 1  
                        curCost = 5 - 1 = 4   subStrinLen = 3
               ^  
               | r = 3 
        ```
    
    In while loop 
        s = "abcd" 
               ^ l = 2  
                        curCost = 4 - 1 = 3   subStrinLen = 3
               ^  
               | r = 3 
        ```
    
```
                Loop Ended Max length == subStringLen 

---

# Complexity ☃️

- Time complexity: $$O(n)$$ ♻️
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(1)$$ 🔥
<!-- Add your space complexity here, e.g. $$O(n)$$ -->



# Code 💖

PYTHON
``` PYTHON []
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        curCost = 0
        subStringLen = 0

        l = 0 # left 

        for r in range(len(s)): # r == right pointer
            curCost += abs(ord(s[r]) - ord(t[r]))

            while curCost > maxCost:
                curCost -= abs(ord(s[l]) - ord(t[l]))

                l += 1

            subStringLen = max(subStringLen, r - l + 1)

        return subStringLen
```
JAVA
```JAVA []
class Solution {
    public int equalSubstring(String s, String t, int maxCost) {
        int curCost = 0;
        int subStringLen = 0;

        int left = 0;

        for (int right = 0; right < s.length(); right++) {
            curCost += Math.abs(s.charAt(right) - t.charAt(right));

            while (curCost > maxCost) {
                curCost -= Math.abs(s.charAt(left) - t.charAt(left));
                left++;
            }

            subStringLen = Math.max(subStringLen, right - left + 1);
        }

        return subStringLen;
    }
}
```
JAVASCRIPT
```JAVASCRIPT []
var equalSubstring = function (s, t, maxCost) {
    let curCost = 0
    let subStringLen = 0

    let left = 0

    for (let right = 0; right < s.length; right++) {
        curCost += Math.abs(s.charAt(right).charCodeAt(0) - t.charAt(right).charCodeAt(0));

        while (curCost > maxCost) {
            curCost -= Math.abs(s.charAt(left).charCodeAt(0) - t.charAt(left).charCodeAt(0));

            left++;
        }

        subStringLen = Math.max(subStringLen, right - left + 1);
    }

    return subStringLen;
};
```
C
```C []
int equalSubstring(char* s, char* t, int maxCost) {
    int curCost = 0;
    int subStringLen = 0;

    int left = 0;

    for (int right = 0; right < strlen(s); right++) {
        curCost += abs(s[right] - t[right]);

        while (curCost > maxCost) {
            curCost -= abs(s[left] - t[left]);
            left++;
        }

        subStringLen = fmax(subStringLen, right - left + 1);
    }

    return subStringLen;
}
```


