# 💯 JAVA 100% Beats ||🔥 One line Python sol 🎉|| ♻️ Step wise explanation || biggner friendy💥


<h2 align="center"> 

<a href="https://leetcode.com/problems/student-attendance-record-i/solutions/5223578/java-100-beats-one-line-python-sol-step-wise-explanation-biggner-friendy"><strong>➥ Live Solution On Leetcode</strong></a>
</h2>

# Screenshot 🎉

![551.png](https://assets.leetcode.com/users/images/3ca18026-acdc-4274-8a98-7be8c8e1af66_1716905224.8211536.png)


# Intuition 🤔
<!-- Describe your first thoughts on how to solve this problem. -->

    Given Imforamtion -->

    We have to check a string which is given as a attendence 

    1. In which A count as Absent
    
    2. P count as Present 
    
    3. L count as Late

    🤔 We have to check weather one student 

    🤔 1. was not absent for more than 1 

    🤔 2. And was not late for 3 consecutive days


# Approach 😍
<!-- Describe your approach to solving the problem. -->

    Simple explnation --> only Build In function only

    1. Check for 'LLL' 
    
    2. Count 'A' And check not greater than 1 

`Step 1` **Build In function for "LLL"**

    Every language has a funtion of search a subString 

    For python one line (s.find("LLL") >= 0)

JAVA
```JAVA []
class Solution {
    public boolean checkRecord(String s) {
        if (s.contains("LLL")) {
            return false;
        }
```
JAVASCRIPT
```JAVASCRIPT []
var checkRecord = function (s) {
    if (s.includes("LLL")) {
        return false;
    }
```
PYTHON
``` PYTHON []
class Solution:
    def checkRecord(self, s: str) -> bool:
        if s.find("LLL") >= 0:
            return False

```
---

`Step 2` **Apply a loop and count for 'A'**

    Loop will count 'A' and return if count > 1

    For python one line (s.count('A') > 1)

JAVA
```JAVA []
    int absCount = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s.charAt(i) == 'A') {
            absCount++;
        }

        if (absCount >= 2) {
            return false;
        }
    }
```
JAVASCRIPT
```JAVASCRIPT []
    for (let i = 0; i < s.length; i++) {
        if (s.charAt(i) == 'A') {
            absCount++;
        }

        if (absCount >= 2) {
            return false;
        }
    }

    return true;
};
```
PYTHON
``` PYTHON []

    if s.count("A") > 1:
        return False

    return True

```

`Step 3` **Finaly return True**

JAVA
```JAVA []
        return true;
    }
}
```
JAVASCRIPT
```JAVASCRIPT []
    return true;
```
PYTHON
``` PYTHON []
    return True

```



# Complexity ☃️
- Time complexity: $$O(n)$$ ♻️
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(1)$$ 🚀
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code 💖

PYTHON
```PYTHON []
# One line solution
class Solution:
      def checkRecord(self, s: str) -> bool:

        return False if s.find("LLL") >= 0 or s.count('A') > 1 else True
```
JAVA
```JAVA []
class Solution {
    public boolean checkRecord(String s) {
        if (s.contains("LLL")) {
            return false;
        }

        int absCount = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'A') {
                absCount++;
            }

            if (absCount >= 2) {
                return false;
            }
        }

        return true;
    }
}
```
JAVASCRIPT
```JAVASCRIPT []
var checkRecord = function (s) {
    if (s.includes("LLL")) {
        return false;
    }

    let absCount = 0

    for (let i = 0; i < s.length; i++) {
        if (s.charAt(i) == 'A') {
            absCount++;
        }

        if (absCount >= 2) {
            return false;
        }
    }

    return true;
};
```
PYTHON
``` PYTHON []
class Solution:
    def checkRecord(self, s: str) -> bool:
        if s.find("LLL") >= 0:
            return False

        if s.count("A") > 1:
            return False

        return True

```