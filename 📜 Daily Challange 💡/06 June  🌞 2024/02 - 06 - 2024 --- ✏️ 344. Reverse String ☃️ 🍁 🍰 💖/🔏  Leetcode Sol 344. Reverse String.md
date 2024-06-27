# 💯 Beats with JAVA 💫 || One line Code with 99.42%🔥|| Fully Explained 🫰||

<h2 align="center"> 

<a href="https://leetcode.com/problems/reverse-string/solutions/5244010/beats-with-java-one-line-code-with-99-42-fully-explained"><strong>➥ 💡 Live Solution On Leetcode ✒️</strong></a>
</h2>

# Screenshot 🎉 

![344.png](https://assets.leetcode.com/users/images/10ad12b9-fe9a-4d07-bf73-dc604a94cb50_1717304211.075155.png)


# Intuition 🤔

    `Given`--> One String Array
    
    `Que description` -->  (1 <= s.length <= 10^5)

    we have to reverse our char array

![q 344.png](https://assets.leetcode.com/users/images/517c22e1-2b68-4c77-8a42-e14dd55e6897_1717304762.9152582.png)



# Approach 🤔

    We will simply swap our char values from start with end.

    with a while loop and with `Two pointer approach`

---


       There will be 6 steps 

    Step 1 -> Make st = 0, end = length - 1

    Step 2 -> Apply while loop while st < end

    Step 3 -> swap start with end

    Step 4 -> ⬆️ st index and ⬇️ End index

# Complexity 🏗️
- ⌚ Time complexity: $$O(n)$$
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- 🧺 Space complexity: $$O(1)$$
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code 🐣

JAVA
``` JAVA []
class Solution {
    public void reverseString(char[] s) {
        int i = 0, j = s.length - 1;

        while (i < j) {
            char ch = s[i];
            s[i] = s[j];
            s[j] = ch;
            j--;
            i++;
        }
    }
}
```
C
``` C []
void reverseString(char* s, int sSize) {
    int st = 0, end = sSize - 1;
    while (st < end) {
        char ch = s[st];
        s[st] = s[end];
        s[end] = ch;
        end--;
        st++;
    }
}
```

# One line Bonus 🤑

JAVASCRIPT
```JAVASCRIPT []
var reverseString = function(s) {
    s.reverse()
};
```
PYTHON
```PYTHON []
class Solution:
    def reverseString(self, s: List[str]) -> None:
        s.reverse()
```
![344 js.png](https://assets.leetcode.com/users/images/fe4127dd-063d-4e24-b4e4-a091e63b69b9_1717304882.2061756.png)

