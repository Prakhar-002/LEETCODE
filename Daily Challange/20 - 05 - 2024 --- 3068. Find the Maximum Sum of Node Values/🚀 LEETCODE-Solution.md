# 👏💯PYTHON 🎉|| JS 🎉|| JAVA 🎉|| 🔥🔥 Best Visualization  ||✅ New Question || 🫰Only Sorting🧩 --> [LEETCODE](https://leetcode.com/problems/find-the-maximum-sum-of-node-values/solutions/5178932/python-js-java-best-visualization-new-question-only-sorting) 



# Screenshot 🎉

![3068.png](https://assets.leetcode.com/users/images/a2eea421-3d0c-4414-bea2-564ce65e7047_1716103426.4556427.png)


---


# Intuition 🤔
<!-- Describe your first thoughts on how to solve this problem. -->
    maximum possible sum of the values 

    Let's understand the problem first and make it easy

1. `Given` 
    `A.` An `undirected tree` with `n Node` whose value are `0 to n - 1`

    `B.` Value of tree can be our `index value`

    `C.` `Array (nums)` which actually tells us the `exact value of node`

    `D.` A number `k` by which `we have to take XOR` with `tree value`

2. `Work to do`

    `A.` we've to `select any edge` from tree

    `B.` Then `take XOR` with `both the connected node` with that edge

    `C.` and then `sum all actual values` of node from `given nums array`

3. `Return the sum` of all value `after taking after xor`

    ### We have to maximize this sum ---------
---


# Approach 🥳
<!-- Describe your approach to solving the problem. -->
    Break this in a very simple problem ...

1. Let's `understand the XOR` first
 
   `A.` `1 time XOR` --> It give s`one value either greater or lower or 0`
        10 ^ 2 = 8  

    `B.` `2 time XOR` --> It give the `same value`
            10 ^ 2 ^ 2 = 10

2. Solve `by understanding problem` -->  `K = 3`
    
  
    ![que 3068.png](https://assets.leetcode.com/users/images/b2b79abd-f1d7-42cc-aba5-43bd4ecb1f31_1716114204.9783974.png)

    `A.` First we'll select `( A C D E edge)` 

    `B.`  Take the `xor of value` with **`k = 3`**

    `C.` only `Take XOR or that value which give a large value`

    `D.`We did not take XOR of 3 because `it'll give 0` (Lower value)
    
    
    ![que 1 3068.png](https://assets.leetcode.com/users/images/040db16f-e3e4-454e-bd41-50f30a040179_1716114233.129734.png)


    `E.` `sum will be 39`

---

3. `As we see node 0 does not mean anything to us`

    ```
            // Best appoach

            1. Either take one edge or just take 2 node
            2. Take one node and do not touch it
            3. Or take any 2 node and take 

            --> We can't just take every node and take xor of that
    ```
    ![que 2 3068.png](https://assets.leetcode.com/users/images/7e45327f-52ea-444f-bfdd-b88ad9cdc1e6_1716114755.572279.png)

        Take 1st and 3th at a time
            and
        Take 4th and 5th at a time
            and
        Do not touch any node

4. Now `problem is that how to choose our node`

        Simple -> take XOR if value inc take it otherwise leave it 

---

# Understand with code 🥳

    We will use best Approach method

    - In which we have 5 works to do
    
    1. Make one diff array give us values if inc or dec after XOR.
    2. Sort this array because we need only increased values
    3. take sum of previous values
    4. Add the positive that comes after the xor from our XOR array
    5. add 2 values at a time as we guessed that and return the some
---

`Step 1` **Make a xorArray** 

    Which will store if value inc or dec either +ve or -ve

    Take XOR of value and given K and subtract with itself 

    So It will give the diffrence only either +Ve or -ve or 0

PYTHON
```python []
     xor_arr = [(n ^ k) - n for n in nums]
```
JAVASCRIPT
```JAVASCRIPT []
    let xorArr = nums.map(n => (n ^ k) - n)

```
JAVA     
```JAVA []
    public Integer[] xorArrCreator(int arr[], int k) {
        Integer xorArr[] = new Integer[arr.length];

        for (int i = 0; i < arr.length; i++) {
            xorArr[i] = (arr[i] ^ k) - arr[i];
        }

        return xorArr;
    }

    // function will return our require array
    Integer xorArr[] = xorArrCreator(nums, k);
```

---

`Step 2 - 3` **Sort in reverse order and take the sum of nums array** 

    because we just need only +ve values

PYTHON
```python []
    xor_arr.sort(reverse=True)
    res = sum(nums)

```
JAVASCRIPT
```JAVASCRIPT []
    xorArr.sort((a, b) => b - a);
    let sum = nums.reduce((a, b) => a + b);
```
JAVA     
```JAVA []
    // Give our sum of array
    public long numArrSum(int arr[]) {
        long sum = 0;

        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }

        return sum;
    }

    // Sort in reverse order
    Arrays.sort(xorArr, Collections.reverseOrder());

    // taking sum of all values in nums array
    long sum = numArrSum(nums);
```
---

`Step 4` **Apply loop and add values 2 at a time** 

    allthough we are adding 2 values at a time 

    In case of odd it will leave one value 

    But It will not gonna add because if we add that node 
    
    it will dec other node connected with same edge

PYTHON
```python []
    for i in range(0, len(nums), 2):
        if i == len(nums) - 1:
            break

        path_sum = xor_arr[i] + xor_arr[i + 1]

        if path_sum <= 0:
            break

        res += path_sum
```
JAVASCRIPT
```JAVASCRIPT []
    for (let i = 0; i < nums.length; i += 2) {
        if (i == nums.length - 1) {
                break;
        }

        let pathSum = xorArr[i] + xorArr[i + 1]

        if (pathSum <= 0) {
                break;
        }

        sum += pathSum;
    }
```
JAVA     
```JAVA []
    for (int i = 0; i < xorArr.length; i += 2) {
        if (i == xorArr.length - 1) {
            break;
        }
        long pathSum = xorArr[i] + xorArr[i + 1];
        if (pathSum <= 0) {
            break;
        }
        sum += pathSum;
    }
```
---

`Step 5` **Make a xorArray** 

    return sum

PYTHON
```python []
    return res

```
JAVASCRIPT
```JAVASCRIPT []
    return sum

```
JAVA     
```JAVA []
    return sum;
```

---

# Complexity 🔥
- Time complexity: $$O(nlogn)$$ `For sorting`
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(n)$$ `For Array `
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

---


# Code

PYTHON
```PYTHON []
class Solution:
    def maximumValueSum(self, nums: List[int], k: int, edges: List[List[int]]) -> int:
        xor_arr = [(n ^ k) - n for n in nums]
        xor_arr.sort(reverse=True)
        res = sum(nums)

        for i in range(0, len(nums), 2):
            if i == len(nums) - 1:
                break

            path_sum = xor_arr[i] + xor_arr[i + 1]

            if path_sum <= 0:
                break

            res += path_sum

        return res

```
JAVASCRIPT
```JAVASCRIPT []
var maximumValueSum = function (nums, k, edges) {
      let xorArr = nums.map(n => (n ^ k) - n)
      xorArr.sort((a, b) => b - a);
      let sum = nums.reduce((a, b) => a + b);

      for (let i = 0; i < nums.length; i += 2) {
            if (i == nums.length - 1) {
                  break;
            }

            let pathSum = xorArr[i] + xorArr[i + 1]

            if (pathSum <= 0) {
                  break;
            }

            sum += pathSum;
      }

      return sum
};
```
JAVA
```JAVA []
class Solution {

    public Integer[] xorArrCreator(int arr[], int k) {
        Integer xorArr[] = new Integer[arr.length];

        for (int i = 0; i < arr.length; i++) {
            xorArr[i] = (arr[i] ^ k) - arr[i];
        }

        return xorArr;
    }

    public long numArrSum(int arr[]) {
        long sum = 0;

        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }

        return sum;
    }

    // Main problem solver fun
    public long maximumValueSum(int[] nums, int k, int[][] edges) {
        // Making xorArr
        Integer xorArr[] = xorArrCreator(nums, k);

        // Sort in reverse order
        Arrays.sort(xorArr, Collections.reverseOrder());

        // taking sum of all values in nums array
        long sum = numArrSum(nums);

        for (int i = 0; i < xorArr.length; i += 2) {
            if (i == xorArr.length - 1) {
                break;
            }
            long pathSum = xorArr[i] + xorArr[i + 1];
            if (pathSum <= 0) {
                break;
            }
            sum += pathSum;
        }

        return sum;
    }
}
```

