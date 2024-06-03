# True Explaination 📋 Step by Step  🪜 || 97.89 % Beats 🎉||  Best Visualization 🔮 || Formatted ✏️

<h2 align="center"> 

<a href="https://leetcode.com/problems/reverse-string/solutions/5244010/beats-with-java-one-line-code-with-99-42-fully-explained"><strong>➥ Live Solution On Leetcode</strong></a>
</h2>


# 🎉 Screenshot 📸

![2486.png](https://assets.leetcode.com/users/images/f09d5b39-99fb-4557-82cd-3611eeb06400_1717392263.1084611.png)

---

## Input 📥 

    Two String  

    S contain chars

    T alse contain chars

## Output 📤

    A number that contain number of char we have to appends in S
    
    To make T a subsequence of S

# Intuition 🤔 

   ` What is subsequence ? `

- `Parts of a string` by which a small string can made  
- `Need to be in order` 

# Example 📜
    `Ex.`

        S = "coaching" t = "coding" z = "cing" p = "dng"

        For s let's find out which of these are subsequence

        1. z = "Cing" 
            First c comes ✔
            Then i ✔
            Then n ✔
            Then g ✔
        All are in order and part of string hence ✅️ It is 


        2. p = "dng" 
            First d comes ✔
            Then n ✔
            Then g ✔
        All are in order and part of string hence ✅️ It is 


        3. z = "coding" 
            First c comes ✔
            Then 0 ✔
            Then d ✖
        As we see d is not present in whole string 

        So we'll append rest of our T string to our S string

        Now s will we "coachingding"

        Number of char we add is 4 hence 4 is our ans 💃🏻🕺🏽

# Approach ✍🏼 

    We will traverse our both string and check for every char of T

    If char of T contain in S then we move on next step

    If any char of T does not present in whole S string

    Then we will add rest of our T string chars in string 

    And return the count of char we add to our string

# Two Pointer Approach 🎯

       There will be 4 steps 

    Step 1 -> Make  
            # Index... Two Pointer
                sIdx = 0
                tIdx = 0
            # Length...
                sLen = len(s)
                tLen = len(t)

    Step 2 -> Apply while loop sIdx < sLen and tIdx < tLen

            Because we have to traverse whole strings

    Step 3 -> Inc ⬆️ pointers

            S pointer will inc each time and

            T pointer only inc when we found char of that pointer in S

    Step 4 -> Return 🚚 tLen - tIdx 

            Because no of char going to append will be 

            Length of T - Pointer of T

---

`Step - 1` **🪜 Make variables**

JAVA
```JAVA []
class Solution {
    public int appendCharacters(String s, String t) {
        int sIdx = 0, tIdx = 0; // Pointers
        int sLen = s.length(), tLen = t.length(); // Lengths
    }
}
```
JAVASCRIPT
```JAVASCRIPT []
var appendCharacters = function (s, t) {
    // Index
    let sIdx = 0, tIdx = 0
    //Length
    let sLen = s.length, tLen = t.length
};
```
PYTHON
``` PYTHON []
class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        # Index...
        sIdx = 0
        tIdx = 0
        # Length...
        sLen = len(s)
        tLen = len(t)
```
C
```C []
int appendCharacters(char* s, char* t) {
    int sIdx = 0, tIdx = 0;
    int sLen = strlen(s), tLen = strlen(t);
}
```

---

`Step 2 - 3` **🪜 Apply loop and inc pointers acc to condition**

JAVA
``` JAVA []
    while (sIdx < sLen && tIdx < tLen) {
        if (s.charAt(sIdx) == t.charAt(tIdx)) {
            tIdx++; // T pointer inc when condition is true
        }
        sIdx++; // S pointer inc all time
    }
```
JAVASCRIPT
```JAVASCRIPT []
    while (sIdx < sLen && tIdx < tLen) {
        if (s.charAt(sIdx) == t.charAt(tIdx)) {
            tIdx++; // T pointer inc when condition is true
        }
        sIdx++; // S pointer inc all time
    }
```
PYTHON
``` PYTHON []
    while sIdx < sLen and tIdx < tLen:
        if s[sIdx] == t[tIdx]:
            tIdx += 1 # T pointer inc when condition is true

        sIdx += 1 # S pointer inc all time

```
C
```C []
    while (sIdx < sLen && tIdx < tLen) {
        if (s[sIdx] == t[tIdx]) {
            tIdx++; // T pointer inc when condition is true
        }
        sIdx++; // S pointer inc all time
    }

```

---

`Step 4`  **🪜 Return number of char appended**
 
JAVA
``` JAVA []
    return tLen - tIdx;
```
JAVASCRIPT
```JAVASCRIPT []
    return tLen - tIdx;

```
PYTHON
``` PYTHON []
    return tLen - tIdx
```
C
```C []
    return tLen - tIdx;

```



# Complexity 🏗️
- ⌚ Time complexity: $$O(S + T)$$ `S => len(s) ` `T => len(t) `
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- 🧺 Space complexity: $$O(1)$$
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code 👨🏻‍💻


JAVA
```JAVA []
class Solution {
    public int appendCharacters(String s, String t) {
        int sIdx = 0, tIdx = 0;
        int sLen = s.length(), tLen = t.length();
        
        while (sIdx < sLen && tIdx < tLen) {
            if (s.charAt(sIdx) == t.charAt(tIdx)) {
                tIdx++;
            }
            sIdx++;
        }
        return tLen - tIdx;
    }
}
```
JAVASCRIPT
```JAVASCRIPT []
var appendCharacters = function (s, t) {
    // Index
    let sIdx = 0, tIdx = 0
    //Length
    let sLen = s.length, tLen = t.length

    while (sIdx < sLen && tIdx < tLen) {
        if (s.charAt(sIdx) == t.charAt(tIdx)) {
            tIdx++;
        }
        sIdx++;
    }

    return tLen - tIdx;
};
```
PYTHON
``` PYTHON []
class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        # Index...
        sIdx = 0
        tIdx = 0
        # Length...
        sLen = len(s)
        tLen = len(t)

        while sIdx < sLen and tIdx < tLen:
            if s[sIdx] == t[tIdx]:
                tIdx += 1
            sIdx += 1

        return tLen - tIdx

```
C
```C []
int appendCharacters(char* s, char* t) {
    int sIdx = 0, tIdx = 0;
    int sLen = strlen(s), tLen = strlen(t);

    while (sIdx < sLen && tIdx < tLen) {
        if (s[sIdx] == t[tIdx]) {
            tIdx++;
        }
        sIdx++;
    }
    return tLen - tIdx;
}
```