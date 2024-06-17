# ✏️ 100%Beats 💯 || 5 Language 🚀|| 🪩🫧Best visualization🎯|| Best formatted🍸🥂🫧✧˖°|

<h2 align="center"> 

<a href="https://leetcode.com/problems/patching-array/solutions/5320371/100-beats-5-language-best-visualization-best-formatted"><strong>➥ Live Solution On Leetcode</strong></a>
</h2>

# 🎉 Screenshot 📸

![330.png](https://assets.leetcode.com/users/images/4da4528d-c664-414e-9728-55d2b25afc20_1718510944.069194.png)


## Input 📥 

    One Sorted* Number Array (nums)  & (N) 

    1 <= nums[i] <= 10^4

    1 <= N <= 2^31 - 1


## Output 📤

    We have to count number of patches (added number) by which 

    our array subArray sum become in (Range[1, N]) 

    Means by adding any number we got sum 1 <= Sum <= N


# Intuition 🤔💭


    We are given number array so we just have to count number of

    patches so that sum of any number of our arr become 1 <= Sum <= N



# Example 📜

    `Ex.`

        nums = [1, 3],  n = 6 

        1. arr = [1]; reach = 1; pactes = 0 
        
             add 2 to our array

        2. arr = [1, 2] maxNumReach = 3 (1 + 2) pactes = 1 

             add 3 to our array
        
        3. arr = [1, 2, 3] maxNumReach = 6 (1 + 2 + 3) pactes = 1 



# Approach ✍🏼
 
    we have to make our subarray sum to max untill we reach given N

    By either adding our own elements or elemets giving in array 

    So if we add 1 number from given in array we can reach 

    upto perivous reach + adding that number 

    cause we had our maxSum of sub Array before so if 

    we are adding another element  It can reach upto 

        previous + current adding element 

    and if we don't add any number given in nums array 

    The max possible element we can add is ourself cause we have to 

    maximize our sum and catch is we've to addd given array element 

    so once we exceed number present at Ith after adding ourself 

    to maximize we will add that number too just to minimize 
 
    The patches cause adding another ourself inc patche by one


### I think you all got the idea so let's just go step by step


# Step wise 🪜


        There will be 3 steps 

    Step 1 ➤ Take three var i = 0, reach = 1, patches = 0  

            • we assign reach = 1 cause we have to go { 1 <= N }

            • cause adding elem will be a very long number so we'll make 

            • our (Reach A Long Number)

    Step 2 ➤ apply while loop until we get reach <= n 

            • To inc our reach we have two option 

            Option 1 ➤ add nums's number  

                • If we exceed our reach by Ith number 

                    -> consider that we should have elem in nums

                • We will add number to our reach

            Option 2 ➤ add our self and inc patches by 1

                • We just inc our reach by adding ourself

    Step 3 ➤ return patches




# Complexity 🏗️
- ⌚ Time complexity: $$O(n)$$ `n = given`
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- 🧺 Space complexity: $$O(1)$$ 
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code 👨🏻‍💻

JAVA
``` JAVA []
class Solution {
    public int minPatches(int[] nums, int n) {
        // REACH is number up to which we can add our number and got value
        long reach = 1;
        int i = 0;
        int patches = 0;

        // we have to go up to given n so we'll loop for reach until it reaches n
        while (reach <= n) {
            // if we exceed the value present in array
            if (i < nums.length && nums[i] <= reach) {
                // we'll add our array value
                reach += nums[i++];
            } else {
                // else we'll keep adding ourself to reach (N)
                reach += reach;
                // If we add ourself mean we added a number to array hence we inc our patches
                // count
                patches++;
            }
        }

        return patches;
    }
}
```
C++ 
``` C++ []
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        // REACH is number up to which we can add our number and got value
        long long reach = 1;
        long long patches = 0;
        long i = 0;

        // we have to go up to given n so we'll loop for reach until it reaches
        // n
        while ((reach <= n)) {
            // if we exceed the value present in array
            if (i < nums.size() && nums[i] <= reach) {
                // we'll add our array value
                reach += nums[i++];
            } else {
                // else we'll keep adding ourself to reach (N)
                reach += reach;
                // If we add ourself mean we added a number to array hence we
                // inc our patches count
                patches++;
            }
        }
        return patches;
    }
};
```
JAVASCRIPT
``` JAVASCRIPT []
var minPatches = function (nums, n) {
    // REACH is number up to which we can add our number and got value
    let reach = 1;
    let i = 0;
    let patches = 0;

    // we have to go up to given n so we'll loop for reach until it reaches n  
    while (reach <= n) {
        // if we exceed the value present in array 
        if (i < nums.length && nums[i] <= reach) {
            // we'll add our array value 
            reach += nums[i++];
        } else {
            // else we'll keep adding ourself to reach (N)
            reach += reach;
            // If we add ourself mean we added a number to array hence we inc our patches count
            patches++;
        }
    }

    return patches;
};
```
PYTHON
```PYTHON []
class Solution:
    def minPatches(self, nums: List[int], n: int) -> int:
        #  REACH is number up to which we can add our number and got value
        reach = 1
        i = 0
        patches = 0

        # we have to go up to given n so we'll loop for reach until it reaches n
        while reach <= n:
            # if we exceed the value present in array
            if i < len(nums) and nums[i] <= reach:
                # we'll add our array value
                reach += nums[i]
                i += 1
            else:
                # else we'll keep adding ourself to reach (N)
                reach += reach
                # f we add ourself mean we added a number to array hence we inc our patches count
                patches += 1

        return patches

```
C
```C []
int minPatches(int* nums, int numsSize, int n) {
    // REACH is number up to which we can add our number and got value
    long long reach = 1;
    long long patches = 0;
    long i = 0;

    // we have to go up to given n so we'll loop for reach until it reaches n
    while ((reach <= n)) {
        // if we exceed the value present in array
        if (i < numsSize && nums[i] <= reach) {
            // we'll add our array value
            reach += nums[i++];
        } else {
            // else we'll keep adding ourself to reach (N)
            reach += reach;
            // If we add ourself mean we added a number to array hence we inc
            // our patches count
            patches++;
        }
    }
    return patches;
}
```

---
# 🥂✨🧁 More solution 🎉🎂✨🍰🥳 

## Go To My Profile and access my GIT [Prakhar-002](https://leetcode.com/u/Prakhar-002/)

## JAVA 🍁| PYTHON 🍰| JAVASCRIPT☃️ | C++ 🎲| C 💖

![image.png](https://assets.leetcode.com/users/images/cd65a75c-9bd9-4b37-95e8-938ab1cfb2ea_1718515283.0818863.png) 

