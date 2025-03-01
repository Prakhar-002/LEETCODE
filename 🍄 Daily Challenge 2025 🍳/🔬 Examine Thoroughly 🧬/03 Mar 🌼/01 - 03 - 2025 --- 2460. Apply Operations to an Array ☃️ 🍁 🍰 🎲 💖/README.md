# 2460. Apply Operations to an Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/apply-operations-to-an-array/description/?envType=daily-question&envId=2025-03-01"><strong>➥ ♻️ 2460 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed array `nums` of size `n` consisting of non-negative integers.

### You need to apply `n - 1` operations to this array where, in the i<sup>th</sup> operation (0-indexed), you will apply the following on the i<sup>th</sup> element of `nums`:

- If `nums[i] == nums[i + 1]`, then multiply `nums[i]` by `2` and set `nums[i + 1]` to `0`. Otherwise, you skip this operation.

### After performing `all` the operations, `shift` all the `0`'s to the `end` of the array.

- For example, the array `[1,0,2,0,0,1]` after shifting all its `0`'s to the end, is `[1,2,1,0,0,0]`.

### Return *the resulting array*.

### Note that the operations are applied `sequentially`, not all at once.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,2,1,1,0]

  ### 📤 `Output`  ➤ [1,4,2,0,0,0]

  ### 🔦 `Explanation`  ➤ We do the following operations:</br></br> ➺ i = 0: nums[0] and nums[1] are not equal, so we skip this operation.</br></br> ➺ i = 1: nums[1] and nums[2] are equal, we multiply nums[1] by 2 and change nums[2] to 0. The array becomes [1,4,0,1,1,0].</br></br> ➺ i = 2: nums[2] and nums[3] are not equal, so we skip this operation.</br></br> ➺ i = 3: nums[3] and nums[4] are equal, we multiply nums[3] by 2 and change nums[4] to 0. The array becomes [1,4,0,2,0,0].</br></br> ➺ i = 4: nums[4] and nums[5] are equal, we multiply nums[4] by 2 and change nums[5] to 0. The array becomes [1,4,0,2,0,0].</br></br> After that, we shift the 0's to the end, which gives the array [1,4,2,0,0,0].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [0,1]

  ### 📤 `Output`  ➤ [1,0]

  ### 🔦 `Explanation` ➤  No operation can be applied, we just shift the 0 to the end.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`2 <= nums.length <= 2000`** </br>

🔹 **`0 <= nums[i] <= 1000`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
