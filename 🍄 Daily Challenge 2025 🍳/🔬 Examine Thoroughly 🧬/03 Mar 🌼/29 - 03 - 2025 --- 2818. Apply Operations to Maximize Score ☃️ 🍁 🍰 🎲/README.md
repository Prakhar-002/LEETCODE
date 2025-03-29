# 2818. Apply Operations to Maximize Score

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/apply-operations-to-maximize-score/description/?envType=daily-question&envId=2025-03-29"><strong>➥ 🫀 2818 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

You are given an array `nums` of `n` **positive** integers and an integer `k`.

Initially, you start with a **score** of `1`. You need to **maximize** your score by applying the following operation **at most `k` times**:

1️⃣ **Choose any non-empty subarray** `nums[l, ..., r]` that **hasn't been chosen previously**.  

2️⃣ **Choose an element `x`** from this subarray that has the **highest prime score**.  
   - If multiple such elements exist, choose the one with the **smallest index**.  

3️⃣ **Multiply** your score by `x`.

🔹 **The prime score** of an integer `x` is the **number of distinct prime factors** of `x`.  
   - For example, **300 = 2 × 2 × 3 × 5 × 5** has a prime score of `3` (`{2,3,5}`).

🔹 Return the **maximum possible score** after applying **at most `k` operations**.  

🔹 Since the answer may be **large**, return it **modulo** `10⁹ + 7`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [8,3,9,3,8], k = 2

  ### 📤 `Output`  ➤ 81

  ### 🔦 `Explanation`  ➤ 

To get a score of `81`, apply the following operations:

1️⃣ **Choose subarray `nums[2, ..., 2]`**  
   - `nums[2] = 9`, which has the **highest prime score**.  
   - Multiply the score: `1 × 9 = 9`.

2️⃣ **Choose subarray `nums[2, ..., 3]`**  
   - Both `nums[2]` and `nums[3]` have a prime score of `1`, but `nums[2]` has the **smaller index**.  
   - Multiply the score: `9 × 9 = 81`.  

Thus, the **maximum score is `81`**. ✅

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [19,12,14,6,10,18], k = 3

  ### 📤 `Output`  ➤ 4788

  ### 🔦 `Explanation` ➤ 

To get a score of `4788`, apply the following operations:

1️⃣ **Choose subarray `nums[0, ..., 0]`**  
   - `nums[0] = 19`  
   - Multiply the score: `1 × 19 = 19`.

2️⃣ **Choose subarray `nums[5, ..., 5]`**  
   - `nums[5] = 18`  
   - Multiply the score: `19 × 18 = 342`.

3️⃣ **Choose subarray `nums[2, ..., 3]`**  
   - Both `nums[2]` and `nums[3]` have a prime score of `2`, but `nums[2]` has the **smaller index**.  
   - Multiply the score: `342 × 14 = 4788`.

Thus, the **maximum score is `4788`**. ✅

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2, 4, 3, 5], k = 4

  ### 📤 `Output`  ➤ 600

  ### 🔦 `Explanation`  ➤ Operations:

1. Choose subarray [0...0], multiply by 2, score = 2
2. Choose subarray [1...1], multiply by 4, score = 8
3. Choose subarray [2...2], multiply by 3, score = 24
4. Choose subarray [3...3], multiply by 5, score = 120

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ nums = [6, 8, 10], k = 3
   ### 📤 `Output`  ➤ 480

   ### 🔦 `Explanation`  ➤ Steps:

*First operation, pick subarray [0,0]. The maximum is 6. Total = 1 * 6 = 6.*

*Second operation, pick subarray [1,1]. The maximum is 8. Total = 6 * 8 = 48.*

*Third operation, pick subarray [2,2]. The maximum is 10. Total = 48 * 10 = 480.*

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length == n <= 10<sup>5</sup> </br>
🔹 1 <= nums[i] <= 10<sup>5</sup> </br>
🔹 1 <= k <= min(n * (n + 1) / 2, 10<sup>9</sup>) </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Stack**  </br>
🔸 **Greedy**  </br>
🔸 **Sorting**  </br>
🔸 **Monotonic Stack**  </br>
🔸 **Number Theory**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
