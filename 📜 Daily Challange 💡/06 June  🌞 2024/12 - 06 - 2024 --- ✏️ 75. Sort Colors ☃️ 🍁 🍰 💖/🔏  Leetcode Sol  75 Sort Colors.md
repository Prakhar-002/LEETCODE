# 💫 Counting Sort  🤔 || ✍🏼 2 Approach  Both 💯 Beats ||  4 languages 🛩️  



<h2 align="center"> 

<a href="https://leetcode.com/problems/sort-colors/solutions/5301200/counting-sort-2-approach-both-beats-4-languages"><strong>➥💡 Live Solution On Leetcode ✒️</strong></a>
</h2>


# 🎉 Screenshot 📸

![75.png](https://assets.leetcode.com/users/images/ac3c4354-0d82-4ab0-9852-b045b79ab6d3_1718187034.3181896.png)


## Input 📥 

    One Number (colors) Array  

    nums[i] can be 

        -> 0 represent "RED" 

        -> 1 represent "WhITE" 

        -> 2 represent "BLUE" 



## Output 📤

    We have to sort this array -> We don't have to return it

# Example 📜

    `Ex.`

        colors:  [1,2,0,2,1,0] 

        expected: [0,0,1,1,2,2]


# 1️⃣ Approach ✍🏼


       There will be 2 steps 

    Step 1 -> Make red , white , blue variables  

            And count respect assigned number    

            If color[i] == 0 Red ⬆️  

            If color[i] == 1 White ⬆️  

            If color[i] == 2 Blue ⬆️      

    Step 2 -> Make Apply for loop upto nums.length

            If We replace values of nums 

            for red times - then

            for white times - then

            for blue times



# Complexity 🏗️
- ⌚ Time complexity: $$O(n)$$ `length of nums`
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- 🧺 Space complexity: $$O(1)$$ `only 3 variables are using`
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code 👨🏻‍💻

JAVA
``` JAVA []
class Solution {
    public void sortColors(int[] nums) {
        int red = 0;
        int white = 0;
        int blue = 0;

        for (int i = 0; i < nums.length; i++) {
            if(nums[i] == 0){
                red++;
            } else if(nums[i] == 1){
                white++;
            } else {
                blue++;
            }
        }
        // For reds
        for (int i = 0; i < red; i++) {
            nums[i] = 0; 
        }   
        // For whites
        for (int i = red; i < red + white; i++) {
            nums[i] = 1; 
        }
        // For Blues
        for (int i = red + white; i < nums.length; i++) {
            nums[i] = 2; 
        }
    }
}
```

---


# 2️⃣ Approach ✍🏼 

       There will be 2 steps 

    Step 1 -> Make two pointer (st) and (end)

    Step 2 -> Make Apply for int (i) loop upto nums.length

            If We found 0 place it in start (swap) & ⬆️ st pointer

            If we found 2 place it at last (swap) ⬇️ en(d) pointer

            If we found 1 inc pointer i


# Complexity 🏗️
- ⌚ Time complexity: $$O(n)$$ `length of nums`
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- 🧺 Space complexity: $$O(1)$$ `only 2 Pointer`
<!-- Add your space complexity here, e.g. $$O(n)$$ -->


JAVA
``` JAVA []
class Solution {
    public void sortColors(int[] nums) {
        // TWo pointers start and end pointer
        int st = 0, end = nums.length - 1;

        for (int i = 0; i < nums.length;) {
            if (nums[i] == 0 && i != st) {
                // If we found 0 we'll shift it in starting of array
                int temp = nums[st];
                nums[st] = nums[i];
                nums[i] = temp;
                st++;
            } else if (end > i && nums[i] == 2) {
                // if we found 2 we'll shift it at end of array
                int temp = nums[end];
                nums[end] = nums[i];
                nums[i] = temp;
                end--;
            } else {
                // if we found 1 we'll inc pointer by one
                i++;
            }
        }
    }
}
```
PYTHON
``` PYTHON []
class Solution:
    def sortColors(self, nums: List[int]) -> None:
        # Two pointers start and end pointer
        st = 0
        end = len(nums) - 1

        i = 0

        while i < len(nums):
            # If we found 0 we'll shift it in starting of array
            if st != i and nums[i] == 0:
                nums[i], nums[st] = nums[st], nums[i]
                st += 1

            # if we found 2 we'll shift it at end of array
            elif end > i and nums[i] == 2:
                nums[i], nums[end] = nums[end], nums[i]
                end -= 1

            # if we found 1 we'll inc pointer by one
            else:
                i += 1

```
JAVASCRIPT
``` JAVASCRIPT []
var sortColors = function (nums) {
    let st = 0
    let end = nums.length - 1

    for (let i = 0; i < nums.length;) {
        if (nums[i] == 0 && i != st) {
            // If we found 0 we'll shift it in starting of array
            let temp = nums[st];
            nums[st] = nums[i];
            nums[i] = temp;
            st++;
        } else if (end > i && nums[i] == 2) {
            // if we found 2 we'll shift it at end of array
            let temp = nums[end];
            nums[end] = nums[i];
            nums[i] = temp;
            end--;
        } else {
            // if we found 1 we'll inc pointer by one
            i++;
        }
    }
};
```
C
``` C []
void sortColors(int* nums, int numsSize) {
    // TWo pointers start and end pointer
    int st = 0, end = numsSize - 1;

    for (int i = 0; i < numsSize;) {
        if (nums[i] == 0 && i != st) {
            // If we found 0 we'll shift it in starting of array
            int temp = nums[st];
            nums[st] = nums[i];
            nums[i] = temp;
            st++;
        } else if (end > i && nums[i] == 2) {
            // if we found 2 we'll shift it at end of array
            int temp = nums[end];
            nums[end] = nums[i];
            nums[i] = temp;
            end--;
        } else {
            // if we found 1 we'll inc pointer by one
            i++;
        }
    }
}
```



