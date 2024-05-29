# Only (N) Without sorting 🚀 || concise 🎗️|| newbie friendly 🔥|| simple explanation 🧩|| 4 lang 🎉
<h2 align="center"> 

<a  href="https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/solutions/5216642/only-n-without-sorting-concise-newbie-friendly-simple-explanation-4-lang"><strong>➥ Live Solution On Leetcode</strong></a>
</h2>

# Screenshot 🎉

![1608.png](https://assets.leetcode.com/users/images/c32aeb32-967d-4772-962b-cd49b8a737cc_1716815086.325122.png)

---
# Intuition 🤔
    This is a pretty good problem ... Let's discuss first-->

`Given -->` 

`1.` We are given `an array` with `some positive values` only

`To return -->`

`1.` A number `X` which `can be a part of our nums array or not`

`2.` And there `must present` **exactly** `x numbers in nums` that `are >= X`.

    Ex.
        nums = [1, 2, 4, 5, 6]

        Ans will be (3) -> Although it is not present in array

    Ex. 
        nums = [5, 6]

        Ans will be (2) -> Although it is alse not present in array

    Ex. 
        nums = [0, 0, 3, 4, 4]

        Ans will be (3) -> it is  present in array

---

# Approach 🥳
<!-- Describe your approach to solving the problem. -->

    It's a observation -->

    that number X can't be greater then the length of nums

    X = [1, N] within this arra 

<h1 align="center"> 

--------`Step 1`-------- 
</h1>

   - We will `make array` which will `count the frequency`all the elem. 
   
   - which will `store all the freq of nums's element`

<h1 align="center"> 

--------`Step 2`-------- 
</h1>

   - Now the `catch is our Constraints` `0 <= nums[i] <= 1000`
   
   - we **can't make an array with this length**
   
   - now `we'll use our observation` That is `X = [1, N]`
   
   - so we'll make array with `length of N + 1` 
   
   - yaa you guess right `last index will store all rest count of elem`

<h1 align="center"> 

--------`Step 3`-------- 
</h1>

    Have a Example --> 

        Nums = [1, 2, 4, 5, 6]  

        x = [1, 5]  --> 5 will store all the rest elem's freq 

        count = no greater than X.

        X   count   freq            count from freq
         
        1     5       1   >              5  -->   
        2     4       1   |  >           4  --> 
        3     3       0   |  |  >        3  --> X = 3 ==> our Ans
        4     3       1   |  |  |  >     3  --> 
        5     2       2   |  |  |  |  >  2  --> 



<h1 align="center"> 

--------`I guess all of you got the idea`-------- 
</h1>

---

# understand with code 😍
    We will have steps to do our job

    Step 1. make an arr count

    Step 2. Count freq of elem 

    Step 3. CountFreq from end and if equal i return countFreq else -1

---
    
`Step 1.` **make tha arr (countNo) and `count the freq` of all elem in nums**

**--> Store the element at last index If it is greater than length**

`index = nums[i] < nums.length ? nums[i] : nums.length`


JAVA

```JAVA []

    int countNo[] = new int[nums.length + 1];

    for (int el : nums) {
        countNo[Math.min(el, nums.length)]++;
    }
```
JAVASCRIPT
```JAVASCRIPT []
    let countNo = new Array(nums.length + 1).fill(0);

    for (const el of nums) {
        countNo[Math.min(el, nums.length)]++;
    }

```
PYTHON
```PYTHON []
    countNo = [0] * (len(nums) + 1)

    for el in nums:
        countNo[min(el, len(nums))] += 1

```
C
```C []
    int countNo[numsSize + 1];

    for (int i = 0; i <= numsSize; i++) {
        countNo[i] = 0;
    }
```

---

`Step 2 - 3` **-->** `make TotalRight and return it or -1`

**Make a totalRight variable that will store our number greater than X and if i == totalRight then totalRight else -1**

JAVA

```JAVA []

    int totalRight = 0;

    for (int i = nums.length; i >=0 ; i--) {
            totalRight += countNo[i];

            if (i == totalRight) {
                return totalRight;
            }
    }

    return -1;
```
JAVASCRIPT

```JAVASCRIPT []
    let rightTotal = 0;

    for (let i = nums.length; i >= 0; i--) {
        rightTotal += countNo[i];
        if (i == rightTotal) {
            return rightTotal;
        }
    }

    return -1;
```
PYTHON
``` PYTHON []
    total_right = 0

    for i in reversed(range(len(nums) + 1)):
            total_right += countNo[i]

            if i == total_right:
                return total_right
            
    return -1
```
C
```C []
    int totalRight = 0;

    for (int i = numsSize; i >= 0; i--) {
        totalRight += countNo[i];

        if (i == totalRight) {
            return totalRight;
        }
    }

    return -1;
```
---

# Complexity 🔥
- Time complexity: $$O(n)$$ 💯
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(n)$$ 🩷
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
---
# Code 🍁

JAVA
```JAVA []
class Solution {
      public int specialArray(int[] nums) {
            int countNo[] = new int[nums.length + 1];

            for (int el : nums) {
                  countNo[Math.min(el, nums.length)]++; // This will count all numbers in array
            }

            int totalRight = 0;

            for (int i = nums.length; i >=0 ; i--) {
                  totalRight += countNo[i];

                  if (i == totalRight) {
                        return totalRight;
                  }
            }

            return -1;

      }
}
```
JAVASCRIPT
```JAVASCRIPT []
var specialArray = function (nums) {
    let countNo = new Array(nums.length + 1).fill(0);

    for (const el of nums) {
        countNo[Math.min(el, nums.length)]++;
    }

    let rightTotal = 0;

    for (let i = nums.length; i >= 0; i--) {
        rightTotal += countNo[i];
        if (i == rightTotal) {
            return rightTotal;
        }
    }

    return -1;
};
```
PYTHON
```PYTHON []
class Solution:
      def specialArray(self, nums: List[int]) -> int:
            countNo = [0] * (len(nums) + 1)

            for el in nums:
                  countNo[min(el, len(nums))] += 1

            total_right = 0

            for i in reversed(range(len(nums) + 1)):
                  total_right += countNo[i]

                  if i == total_right:
                        return total_right
                  
            return -1
```
C
```C []
int specialArray(int* nums, int numsSize) {
    int countNo[numsSize + 1];

    for (int i = 0; i <= numsSize; i++) {
        countNo[i] = 0;
    }

    for (int i = 0; i < numsSize; i++) {
        countNo[nums[i] < numsSize ? nums[i] : numsSize]++;
    }

    int totalRight = 0;

    for (int i = numsSize; i >= 0; i--) {
        totalRight += countNo[i];

        if (i == totalRight) {
            return totalRight;
        }
    }

    return -1;
}
```
<h1 align="center"> 

--------------------[☃️Prakhar-002☃️](https://github.com/Prakhar-002/LEETCODE)--------------------
</h1>

    I have wrote some other solutions too 

    and also solve solve daily problems --> Check out GIT




-----
