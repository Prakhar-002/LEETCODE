# 🚀 Without any Bit Manipulation 🔥 || 🫰 Best formatted O(1) space solution  ♻️|| 🐣DRY RUN 🏃🏻‍♂️

<h2 align="center"> 

<a href="https://leetcode.com/problems/single-number-iii/solutions/5234872/without-any-bit-manipulation-best-formatted-o-1-space-solution-dry-run"><strong>➥ 💡 Live Solution On Leetcode ✒️</strong></a>
</h2>

# Screenshot 🎉 

![260.png](https://assets.leetcode.com/users/images/93108805-928c-40cb-a1e2-6147568e0a15_1717141406.7318087.png)


# Intuition 📚
<!-- Describe your first thoughts on how to solve this problem. -->
    `Given`--> One array with
    
    1 Each num in array will appear twice, only two will appear once.

    2 <= arr.length <= 3 * 10 ^ 4

`Que description` --> 

    we have to find two number that occure once in nums 

    and make array of these two number and return
    

# Approach 🔥

`Without any Bit Manipulation`

    We will first sort the array and then traverse whole array

    we inc i with 2 and check weather Ith is != I + 1th 

    If it is so then we'll store it in our arr and do i-- 

    and somehow if we get only one value in our array

    We will assign the last value of nums array 

    because we increased i with 2 so it will be last elem to be added


# Understand with code 📔

       There will be 6 steps 

    Step 1 -> Make k = 0 and array of 2 length and SORT nums

    Step 2 -> Apply for loop from 0 to len(nums) FOR I and inc I + 2

    Step 3 -> check weather nums[i] != nums[i + 1] & (i + 1) < length

        then assign arr[k] with that nums[i] 

    Step 4 -> After the loop if k was not inc twice means we got only 

            1 value till now 

    Step 5 -> check if k == 1 means increased once

            assign arr[k] == arr[length - 1]

    Step 6 -> return arr
---

# DRY RUN 🚀

    let nums = [1,2,1,3,2,5] => [1, 1, 2, 2, 3, 5]  , arr[0, 0]

        - i = 0, nums[i] == nums[i + 1] then i will i + 2

        - i = 2, nums[i] == nums[i + 1] then i will i + 2

        - i = 4, nums[i] != nums[i + 1] then 
            
            arr[0] = 3 and k will inc and will be 1 now

            and i will be i - 1 means 3 and inc BY 2

        - i = 5, condition false nums[i+1] not exist

           bec k == 1 so we have to assign arr[1] to nums[length - 1]

# Stepwise Code ✨ 

`Step 1` **Sort the nums and make arr of 2 length**

JAVA
``` JAVA []
class Solution {
    public int[] singleNumber(int[] nums) {
        Arrays.sort(nums);

        int arr[] = new int[2];
        int k = 0; // Iterator for arr
    }
}
```
JAVASCRIPT
``` JAVASCRIPT []
var singleNumber = function (nums) {
    nums.sort();

    let arr = [0, 0];
    let k = 0; // Iterator for arr
```

---

`Step 2 - 3 ` **loop for i and assign if nums[i] != nums[i + 1]**

JAVA
``` JAVA []
    for (int i = 0; i < nums.length; i += 2) {
        if ((i + 1) < (nums.length) && nums[i] != nums[i + 1]) {
            arr[k++] = nums[i--];
        }
    }
```
JAVASCRIPT
``` JAVASCRIPT []
    for (let i = 0; i < nums.length; i += 2) {
        if ((i + 1) < (nums.length) && nums[i] != nums[i + 1]) {
            arr[k++] = nums[i--];
        }
    }
```

---

`Step 4 - 5 - 6 ` **assign if iterator K only increased by one and return**

JAVA
``` JAVA []
    if (k == 1) {
        arr[1] = nums[nums.length - 1];
    }

    return arr;
```
JAVASCRIPT
``` JAVASCRIPT []
    if (k == 1) {
        arr[1] = nums[nums.length - 1];
    }

    return arr;
```


# Complexity 💫
- ⌚ Time complexity: $$O(nlogn)$$
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- ♻️ Space complexity: $$O(1)$$
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code 💖

JAVA
``` JAVA []
class Solution {
    public int[] singleNumber(int[] nums) {
        Arrays.sort(nums);

        int arr[] = new int[2];
        int k = 0;

        for (int i = 0; i < nums.length; i += 2) {
            if ((i + 1) < (nums.length) && nums[i] != nums[i + 1]) {
                arr[k++] = nums[i--];
            }
        }

        if (k == 1) {
            arr[1] = nums[nums.length - 1];
        }

        return arr;
    }
}
```
JAVASCRIPT
``` JAVASCRIPT []
var singleNumber = function (nums) {
    nums.sort();

    let arr = [0, 0];
    let k = 0;

    for (let i = 0; i < nums.length; i += 2) {
        if ((i + 1) < (nums.length) && nums[i] != nums[i + 1]) {
            arr[k++] = nums[i--];
        }
    }

    if (k == 1) {
        arr[1] = nums[nums.length - 1];
    }

    return arr;
};
```
