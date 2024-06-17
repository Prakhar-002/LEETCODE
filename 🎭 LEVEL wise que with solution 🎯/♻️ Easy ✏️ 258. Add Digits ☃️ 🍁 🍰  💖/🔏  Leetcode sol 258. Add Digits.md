# 👏💯🔥Beats 100% of users with Java🎉||✅ O(1) one line code without any loop || 💥

<h2 align="center"> 

<a href="https://leetcode.com/problems/add-digits/solutions/5142588/beats-100-of-users-with-java-o-1-one-line-code-without-any-loop"><strong>➥ Live Solution On Leetcode</strong></a>
</h2>

# Screenshot 🎉
![258.png](https://assets.leetcode.com/users/images/9f8794cb-2c68-4fd2-ab60-3038e9957d85_1715417910.6437738.png)


# Intuition 🤔
 We need to add the sum of all digits 

# Approach 🔥
 We just take ` mod ` to our number by ` 9 ` and It will give us the ` sum ` 

# Dry Run ♻️

Take any random number 
- let say ` 1529 ` .
- After adding it We'll get ` 17 `.
- Add ` 17 ` We'll get ` 8 `.
- And when we devide ` 1529 % 9 ` .
- We'll get the same number which is ` 8 `
` we can directly return `

    ```JAVA
    return num % 9 == 0 ? 9 : num % 9;
    ```

- ` If num is 0 we'll return 0 ` 

# Complexity 🚀
- Time complexity: $$O(1)$$ ☃️
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
  
- Space complexity: $$O(1)$$ ☃️
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code 💖

JAVA
``` JAVA []
class Solution {
    public int addDigits(int num) {
        if (num == 0) {
            return 0;
        }
        return num % 9 == 0 ? 9 : num % 9;
    }
}
```
JAVASCRIPT
```JAVASCRIPT []
var addDigits = function(num) {
      if (num == 0) {
            return 0;
      }
      return num % 9 == 0 ? 9 : num % 9;
};
```
PYTHON
```PYTHON []
class Solution:
    def addDigits(self, num: int) -> int:
        if num == 0:
            return 0
            
        return 9 if num % 9 == 0 else num % 9)
```
C
```C []
int addDigits(int num) {
      if (num == 0) {
            return 0;
      }
      return num % 9 == 0 ? 9 : num % 9;
}
```

<h1 align="center"> 

--------------------[☃️Prakhar-002☃️](https://github.com/Prakhar-002/LEETCODE)--------------------
</h1>

    I have wrote some other solutions too 

    and also solve daily problems --> Check out GIT ^



