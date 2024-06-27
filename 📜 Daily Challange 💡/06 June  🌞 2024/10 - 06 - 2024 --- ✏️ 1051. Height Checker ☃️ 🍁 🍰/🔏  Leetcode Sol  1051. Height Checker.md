# 💫100% Beats || 🎊 TWO Approach ||🥂True Explanation🧁|| 🐣 Beginner Friendly🫰 || 4 Lang 🎉


<h2 align="center"> 

<a href="https://leetcode.com/problems/height-checker/solutions/5288059/100-beats-two-approach-true-explanation-beginner-friendly-4-lang"><strong>➥ 💡 Live Solution On Leetcode ✒️</strong></a>
</h2>



# 🎉 Screenshot 📸

![1051.png](https://assets.leetcode.com/users/images/a21c6140-cbec-46e4-9b97-ce1498445b4c_1717998056.3307333.png)

---

## Input 📥 

    One Number (heights) Array  

    heights[i] is the height of the ith student in line (0-indexed).



## Output 📤

    A number that count the number of not matched with expected array

    Which is build after sorting the heights arr


# Intuition 🤔 

    We have to find children that are lined randomly in a row 

    after rearranging them in non-decreasing order 

    The students that were not stand according to the order


# Example 📜

    `Ex.`

        heights:  [1,1,4,2,1,3] 

        expected: [1,1,1,2,3,4]

        Indices 2, 4, and 5 do not match.

        Return 3

# 1️⃣ Approach ✍🏼


       There will be 3 steps 

    Step 1 -> Make Expected Arr clone of main height arr  

            And sort it by Inbuild func          

    Step 2 -> Make count var Apply for loop and compare both array

            If We found not matching Element ⬆️ count

    Step 3 -> Return count



# Complexity 🏗️
- ⌚ Time complexity: $$O(nlog )$$ `Inbuild sorting`
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- 🧺 Space complexity: $$O(n)$$ `n => length of expected array `
<!-- Add your space complexity here, e.g. $$O(n)$$ -->


![1051 2.png](https://assets.leetcode.com/users/images/2840176c-f814-450c-9148-a39708cfa086_1717999619.4994888.png)

# Code 👨🏻‍💻

JAVA 🍁
``` JAVA []
class Solution {
    public int heightChecker(int[] heights) {
        // Creating same copy of given array
        int[] expected = heights.clone();

        // Sort copied array
        Arrays.sort(expected);

        int count = 0;

        for (int i = 0; i < heights.length; i++) {
            // Check condition
            if (heights[i] != expected[i]) {
                count++;
            }
        }

        return count;
    }
}
```
JAVASCRIPT ☃️
```JAVASCRIPT []
var heightChecker = function (heights) {
    let expected = [...heights];

    expected.sort((a, b) => a - b)

    let count = 0

    for (let i = 0; i < heights.length; i++) {
        if (heights[i] !== expected[i]) {
            count++;
        }
    }

    return count;
};
```
PYTHON 🍰
```PYTHON []
class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        expected = heights.copy()

        expected.sort()

        count = 0

        for i in range(len(heights)):
            if heights[i] != expected[i]:
                count += 1

        return count

```

---




# 2️⃣ Approach ✍🏼 

###   If we see our Constraints : 

    1 <= heights.length <= 100

    1 <= heights[i] <= 100

### We got one thing we can use counting sort because no. of elements are very less -- se we'll use this in our Approach

---


# Step Wise Explanation ✨ 


       There will be 6 steps 

    Step 1 -> Make a heightFreq arr with [101] len

        count freq of heights

    Step 2 -> Make expected Array of same len => (height.length)

    Step 3 -> Apply loop for every childen with heigths 

            Get children from -> heightFreq arr

    Step 4 -> Append children in our expected arr

    Step 5 -> Make count var Apply for loop and compare both array

            If We found not matching Element ⬆️ count

    Step 6 -> Return count

---


`Step - 1 - 2` **🪜 Makeing HeightFreq**

JAVA 🍁
```JAVA []
class Solution {
    public int heightChecker(int[] heights) {
        // Making array of height Frequency
        int heightFreq[] = new int[101];

        for (int height : heights) {
            // Counting freq of every height
            heightFreq[height]++;
        }

        // Making expected array
        int expected[] = new int[heights.length];
    }
}
```
JAVASCRIPT ☃️
``` JAVASCRIPT []
var heightChecker = function (heights) {
    // Making array of height Frequency
    let heightFreq = new Array(101).fill(0);

    for (const h of heights) {
        // Counting freq of every height
        heightFreq[h]++;
    }

    // Making expected array
    let expected = []
};
```
PYTHON 🍰
```PYTHON []
class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        # Making array of height Frequency
        height_freq = [0] * 101

        for h in heights:
            # Counting freq of every height
            height_freq[h] += 1

        # Making expected array
        expected = []
```
C 💖
```C []
int heightChecker(int* heights, int heightsSize) {
    // Making array of height Frequency
    int heightFreq[101] = {0};

    for (int i = 0; i < heightsSize; i++) {
        // Counting freq of every height
        heightFreq[heights[i]]++;
    }

    // Making expected array
    int expected[heightsSize];
}
```

---

`Step - 3 - 4` **🪜Extract children for every heights and loop for children and append height in expected array**


JAVA 🍁
```JAVA []
    int k = 0;

    for (int height = 0; height < 101; height++) {
        // Get freq of every height as children
        int children = heightFreq[height];

        // Apply loop for childred(freq)
        while(children-- > 0){
            // append heights for freq times
            expected[k++] = height;
        }
    }

```
JAVASCRIPT ☃️
``` JAVASCRIPT []
    for (let height = 0; height < 101; height++) {
        // Get freq of every height as children
        let children = heightFreq[height];

        // Apply loop for childred(freq)
        while (children-- > 0) {
            // append heights for freq times
            expected.push(height)
        }
    }
```
PYTHON 🍰
```PYTHON []
    for height in range(1, 101):
        # Get freq of every height as children
        children = height_freq[height]

        # Apply loop for childred(freq)
        for _ in range(children):
            # append heights for freq times
            expected.append(height)

```
C 💖
```C []
    int k = 0;

    for (int height = 0; height < 101; height++) {
        // Get freq of every height as children
        int children = heightFreq[height];

        // Apply loop for childred(freq)
        while (children-- > 0) {
            // append heights for freq times
            expected[k++] = height;
        }
    }

```
---

`Step - 5 - 6` **🪜 count number of unmatched with expected**

JAVA 🍁
```JAVA []
    int count = 0;

    for (int i = 0; i < heights.length; i++) {
        // Checking for unmacthed
        if (heights[i] != expected[i]) {
            count++;
        }
    }

    return count;
```
JAVASCRIPT ☃️
``` JAVASCRIPT []
    let count = 0

    for (let i = 0; i < heights.length; i++) {
        // Checking for unmacthed
        if (heights[i] !== expected[i]) {
            count++;
        }
    }

    return count;

```
PYTHON 🍰
```PYTHON []
    count = 0

    for i in range(len(heights)):
        # Checking for unmacthed
        if heights[i] != expected[i]:
            count += 1

    return count

```
C 💖
```C []

    int count = 0;

    for (int i = 0; i < heightsSize; i++) {
        // Checking for unmacthed
        if (heights[i] != expected[i]) {
            count++;
        }
    }

    return count;
```


# Complexity 🏗️
- ⌚ Time complexity: $$O(n)$$ `n => length of height array `

- 🧺 Space complexity: $$O(n)$$ `n => length of expected array `

# Code 👨🏻‍💻


JAVA 🍁
```JAVA []
class Solution {
    public int heightChecker(int[] heights) {
        int heightFreq[] = new int[101];

        for (int height : heights) {
            heightFreq[height]++;
        }

        int expected[] = new int[heights.length];

        int k = 0;

        for (int height = 0; height < 101; height++) {
            int children = heightFreq[height];

            while(children-- > 0){
                expected[k++] = height;
            }
        }

        int count = 0;

        for (int i = 0; i < heights.length; i++) {
            if (heights[i] != expected[i]) {
                count++;
            }
        }

        return count;
    }
}
```
JAVASCRIPT ☃️
``` JAVASCRIPT []
var heightChecker = function (heights) {
    let heightFreq = new Array(101).fill(0);

    for (const h of heights) {
        heightFreq[h]++;
    }

    let expected = []

    for (let height = 0; height < 101; height++) {
        let children = heightFreq[height];

        while (children-- > 0) {
            expected.push(height)
        }
    }

    let count = 0

    for (let i = 0; i < heights.length; i++) {
        if (heights[i] !== expected[i]) {
            count++;
        }
    }

    return count;
};
```
PYTHON 🍰
```PYTHON []
class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        height_freq = [0] * 101

        for h in heights:
            height_freq[h] += 1

        expected = []

        for height in range(1, 101):
            children = height_freq[height]

            for _ in range(children):
                expected.append(height)

        count = 0

        for i in range(len(heights)):
            if heights[i] != expected[i]:
                count += 1

        return count

```
C 💖
```C []
int heightChecker(int* heights, int heightsSize) {
    int heightFreq[101] = {0};

    for (int i = 0; i < heightsSize; i++) {
        heightFreq[heights[i]]++;
    }

    int expected[heightsSize];

    int k = 0;

    for (int height = 0; height < 101; height++) {
        int children = heightFreq[height];

        while (children-- > 0) {
            expected[k++] = height;
        }
    }

    int count = 0;

    for (int i = 0; i < heightsSize; i++) {
        if (heights[i] != expected[i]) {
            count++;
        }
    }

    return count;
}
```
