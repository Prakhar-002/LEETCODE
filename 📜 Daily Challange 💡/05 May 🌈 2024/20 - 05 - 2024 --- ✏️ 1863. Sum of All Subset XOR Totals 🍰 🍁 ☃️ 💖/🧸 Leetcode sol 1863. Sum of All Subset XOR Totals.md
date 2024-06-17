# 💯100% JAVA 🥳  || Simple 🎉|| consice 🎗️|| without making SubArrays 🎊

<h2 align="center"> 

<a href="https://leetcode.com/problems/sum-of-all-subset-xor-totals/solutions/5182585/100-java-simple-consice-without-making-subarrays"><strong>➥ Live Solution On Leetcode</strong></a>
</h2>


# Screenshot 🎉

![1863.png](https://assets.leetcode.com/users/images/b578e8c9-7e37-4021-8374-81a1490e739a_1716181333.3171983.png)

---

# Intuition 🤔
<!-- Describe your first thoughts on how to solve this problem. -->

    We have to take xor or every possible subset of given array

    If it has more the 1 values then xor all of those values

      [2,5,6] is =>    2 XOR 5 XOR 6   => 1

# Approach 🥳
<!-- Describe your approach to solving the problem. -->

    We'll take OR of all given values of array 

    Because we have to find at what positions there will be 1 

    And after that we'll just multiply 

    res And  pow of 2 * Length - 1 

`Step 1.` `Take the OR of all number and store in xorSum`

JAVA
```JAVA []
    int xorSum = 0;

    for (int i = 0; i < nums.length; i++) {
        xorSum |= nums[i];
    }
```
JAVASCRIPT
```JAVASCRIPT []
    let xorSum = 0;

    for (let i = 0; i < nums.length; i++) {
        xorSum |= nums[i];
    }
```
PYTHON
```PYTHON []
    xor_sum = 0

    for n in nums :
        xor_sum = xor_sum | n
```
C
```C []
    int xorSum = 0;

    for (int i = 0; i < numsSize; i++) {
        xorSum |= nums[i];
    }
```

---

`Step 2.` *Multiply* xorSum with `2 ** (lenght - 1)`

JAVA
```JAVA []
    return xorSum * (int) (Math.pow(2, (nums.length - 1)));
```
JAVASCRIPT
```JAVASCRIPT []
    return xorSum * (Math.pow(2, (nums.length - 1)));
```
PYTHON
```PYTHON []
    return xor_sum * 2 ** (len(nums) - 1) 
```
C
```C []
    return xorSum * pow(2, (numsSize - 1));
```

---

# Complexity 🔥
- Time complexity: $$O(n)$$ 🥰
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(1)$$ 💯
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
---
# Code 💖

JAVA
```JAVA []
class Solution {
    public int subsetXORSum(int[] nums) {
        int xorSum = 0;

        for (int i = 0; i < nums.length; i++) {
            xorSum |= nums[i];
        }

        return xorSum * (int) (Math.pow(2, (nums.length - 1)));
    }
}
```
JAVASCRIPT
```JAVASCRIPT []
var subsetXORSum = function (nums) {
    let xorSum = 0;

    for (let i = 0; i < nums.length; i++) {
        xorSum |= nums[i];
    }

    return xorSum * (Math.pow(2, (nums.length - 1)));
};
```
PYTHON
```PYTHON 
class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        xor_sum = 0

        for n in nums :
            xor_sum = xor_sum | n

        return xor_sum * 2 ** (len(nums) - 1) 
```
C
```C []
int subsetXORSum(int* nums, int numsSize) {
    int xorSum = 0;

    for (int i = 0; i < numsSize; i++) {
        xorSum |= nums[i];
    }

    return xorSum * pow(2, (numsSize - 1));
}
```
