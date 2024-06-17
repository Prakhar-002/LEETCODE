# ✏️ Only Basic 🔥 BINARY SEARCH || 💯% beats with proof 📝|| Beginner 😍 Friendly 💡|| 5 language

<h2 align="center"> 

<a href="https://leetcode.com/problems/sum-of-square-numbers/solutions/5325268/only-basic-binary-search-beats-with-proof-beginner-friendly-5-language"><strong>➥ Live Solution On Leetcode</strong></a>
</h2>


# 🎉 Screenshot 📸

![que number 633.png](https://assets.leetcode.com/users/images/b4c0bb2c-b0ab-425a-af61-d54638e8ee38_1718600174.5967762.png)


## Input 📥 

    One C which is made with the sum of two positive numbers 

        c = a ^ 2 + b ^ 2 


## Output 📤

    We have to find given number c 
    
    can be a sum of square of two numbers or not ? 

        Return either false Or true 

# Approach ✍🏼 

    We will done this in just 3 basic steps of binary search

## What is Binary search basic 🤔💭


        There will be 4 steps 

    Step 1 ➤ Take two var st and end 

        assign them with 0 and lst index 

    Step 2 ➤ Apply loop until pointer cross eachother

        while(st <= en){}

    Step 3 ➤ only 3 condition possible 

        Case 1 ➤ We got our ans 

            return true 

        Case 2 ➤ We have value > condition 

            dec en pointer

        Case 3 ➤ We have value < condition

            inc st pointer

    Step 4 ➤ If we do not got our ans Return false
 
![633 two pppointer binary search.png](https://assets.leetcode.com/users/images/389e678d-c8be-4794-aa20-032bfc5f543d_1718601113.6483305.png)


# Step wise Explanation 🪜


        There will be 4 steps as we seen above

    Step 1 ➤ Take two var st = 0, en = sqrt(c) 

        • cause a and b can not greater than sqrt(c)

    Step 2 ➤ Apply loop until pointer cross eachother

        while(st <= en){
            Find square of st and square of end then take the sum

            square will be > st * st + en * en
        }

    Step 3 ➤ only 3 condition possible

        Case 1 ➤ We got our ans square == c

            Return true

        Case 2 ➤ We have square > c 

            dec ⬇️ en pointer

        Case 3 ➤ We have square < c

            inc ⬆️ st pointer

    Step 4 ➤ If we do not got our ans Return false

    






# Complexity 🏗️
- ⌚ Time complexity: $$O(sqrt(c))$$ `C = given`
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- 🧺 Space complexity: $$O(1)$$ 
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code 👨🏻‍💻

C
``` c []
bool judgeSquareSum(int c) {
    // taking to pointer a star with 0
    long long st = 0;
    // end with the square root of given c we'll take the ceil value
    long long end = (long long)ceil(sqrt(c));

    // While start <= end
    while (st <= end) {
        // Calculating square
        long long square = (st * st) + (end * end);
        // If it is equal to c return TRUE
        if (square == c) {
            return 1;
            // If it is greater than c shift end pointer to left
        } else if (square > c) {
            end--;
            // If it is smaller than c shift start pointer to right
        } else {
            st++;
        }
    }

    return 0;
}
```
JAVA
``` JAVA []
class Solution {
    public boolean judgeSquareSum(int c) {
        // taking to pointer a star with 0
        long st = 0;
        // end with the square root of given c we'll take the ceil value
        long end = (long) Math.ceil(Math.sqrt(c));

        // While start <= end
        while (st <= end) {
            // Calculating square
            long square = (st * st) + (end * end);
            // If it is equal to c return TRUE
            if (square == c) {
                return true;
                // If it is greater than c shift end pointer to left
            } else if (square > c) {
                end--;
                // If it is smaller than c shift start pointer to right
            } else {
                st++;
            }
        }

        return false;
    }
}
```
C++
```C++ []
#include <cmath>

class Solution {
public:
    bool judgeSquareSum(int c) {
        // taking to pointer a star with 0
        long long st = 0;
        // end with the square root of given c we'll take the ceil value
        long long end = static_cast<long>(std::ceil(std::sqrt(c)));

        // While start <= end
        while (st <= end) {
            // Calculating square
            long long square = (st * st) + (end * end);
            // If it is equal to c return TRUE
            if (square == c) {
                return true;
                // If it is greater than c shift end pointer to left
            } else if (square > c) {
                end--;
                // If it is smaller than c shift start pointer to right
            } else {
                st++;
            }
        }

        return false;
    }
};
```
JAVASCRIPT
```JAVASCRIPT []
var judgeSquareSum = function (c) {
    // taking to pointer a star with 0
    let st = 0;
    // end with the square root of given c we'll take the ceil value
    let end = Math.ceil(Math.sqrt(c));

    // While start <= end
    while (st <= end) {
        // Calculating square
        let square = (st * st) + (end * end);
        // If it is equal to c return TRUE
        if (square == c) {
            return true;
            // If it is greater than c shift end pointer to left
        } else if (square > c) {
            end--;
            // If it is smaller than c shift start pointer to right
        } else {
            st++;
        }
    }

    return false;

};
```
PYTHON
```PYTHON []
import math
class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        # taking to pointer a star with 0
        st = 0
        # end with the square root of given c we'll take the ceil value
        end = math.isqrt(c) + 1

        # While start <= end
        while st <= end:
            # Calculating square
            square = (st ** 2) + (end ** 2)
            # If it is equal to c return TRUE
            if square == c:
                return True
            # If it is greater than c shift end pointer to left
            elif square > c:
                end -= 1
            # If it is smaller than c shift start pointer to right
            else:
                st += 1

        return False

```

---
# 🥂✨🧁 More solution 🎉🎂✨🍰🥳 

## Go To My Profile and access my GIT [Prakhar-002](https://leetcode.com/u/Prakhar-002/)

## JAVA 🍁| PYTHON 🍰| JAVASCRIPT☃️ | C++ 🎲| C 💖

![image.png](https://assets.leetcode.com/users/images/bbfb1863-9d81-48ba-a385-ee09a5f55df8_1718601663.757992.png)



