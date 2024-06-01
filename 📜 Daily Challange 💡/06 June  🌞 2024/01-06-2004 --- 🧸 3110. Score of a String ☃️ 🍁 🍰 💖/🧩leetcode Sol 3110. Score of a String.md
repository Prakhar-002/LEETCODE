# 💯 Beats  || simple 🐣 || 4 language || Best Formatted 🫰||

<h2 align="center"> 

<a href="https://leetcode.com/problems/score-of-a-string/solutions/5238370/beats-simple-4-language-best-formatted"><strong>➥ Live Solution On Leetcode</strong></a>
</h2>


# Screenshot 🎉 

![3110 c.png](https://assets.leetcode.com/users/images/592632b6-dc2c-4ef7-ab32-c31117e6e010_1717216831.3929858.png)

---

![3110 java.png](https://assets.leetcode.com/users/images/ff80e2d8-1bbe-4347-8385-966fda4ed0a7_1717216845.5407774.png)

# Intuition 📚

    `Given`--> One String with
    
    `Que description` -->  (2 <= s.length <= 100)

    we have to score of sum of the absolute difference 

    between the ASCII values of adjacent characters.

# Approach 🔥

       There will be 6 steps 

    Step 1 -> Make res variable with res = 0

    Step 2 -> Apply for loop from 0 to len(nums) - 1  

    Step 3 -> sub adjacent means next char from previous one 

    Step 4 -> add in res 

    Step 5 -> return res


# Complexity 💫
- ⌚ Time complexity: $$O(n)$$
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- ♻️ Space complexity: $$O(1)$$
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code 💖

JAVA
```JAVA []
class Solution {
    public int scoreOfString(String s) {
        int res = 0;

        for (int i = 0; i < s.length() - 1; i++) {
            res += Math.abs(s.charAt(i) - s.charAt(i + 1));
        }
        return res;
    }
}
```
JAVASCRIPT
```JAVASCRIPT []
var scoreOfString = function (s) {
    let res = 0;

    for (let i = 0; i < s.length - 1; i++) {
        res += Math.abs(s.charAt(i).charCodeAt(0) - s.charAt(i + 1).charCodeAt(0));
    }
    return res;
};
```
PYTHON
```PYTHON []
class Solution:
    def scoreOfString(self, s: str) -> int:
        res = 0

        for i in range(len(s) - 1):
            res += abs(ord(s[i]) - ord(s[i + 1]))

        return res

```
C
``` C []
int scoreOfString(char* s) {
    int res = 0;

    for (int i = 0; i < strlen(s) - 1; i++) {
        res += abs(s[i] - s[i + 1]);
    }
    return res;
}
```