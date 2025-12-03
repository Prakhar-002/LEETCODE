# Q3. Ways to Make a Fair Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/ways-to-make-a-fair-array/description/?envType=problem-list-v2&envId=dsa-association-slope-prefix-sum"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`. You can choose exactly one index (0-indexed) and remove the element. Notice that the index of the elements may change after the removal.

### For example, if `nums = [6,1,7,4,1]`:

- Choosing to remove index 1 results in `nums = [6,7,4,1]`.
- Choosing to remove index 2 results in `nums = [6,1,4,1]`.
- Choosing to remove index 4 results in `nums = [6,1,7,4]`.

### An array is fair if the sum of the odd-indexed values equals the sum of the even-indexed values.

### Return the number of indices that you could choose such that after the removal, `nums` is fair.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [2,1,6,4]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤
Remove index 0: [1,6,4] -> Even sum: 1 + 4 = 5. Odd sum: 6. Not fair.
Remove index 1: [2,6,4] -> Even sum: 2 + 4 = 6. Odd sum: 6. Fair.
Remove index 2: [2,1,4] -> Even sum: 2 + 4 = 6. Odd sum: 1. Not fair.
Remove index 3: [2,1,6] -> Even sum: 2 + 6 = 8. Odd sum: 1. Not fair.
There is 1 index that you can remove to make nums fair.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,1,1]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ You can remove any index and the remaining array is fair.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,3]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ You cannot make a fair array after removing any index.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 10<sup>5</sup> </br>
🔹 1 <= nums[i] <= 10<sup>4</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Prefix Sum** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
