# 1438. Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/description/?envType=daily-question&envId=2024-06-23"><strong>➥ ☢️ 1438 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of integers `nums` and an integer limit, return the size of the longest **non-empty** subarray such that the absolute difference between any two elements of this subarray is less than or equal to `limit`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ nums = [8,2,4,7], limit = 4

  ### Output  ➤ 2

  ### Explanation  ➤ All subarrays are: 

      [8] with maximum absolute diff |8-8| = 0 <= 4.
      [8,2] with maximum absolute diff |8-2| = 6 > 4. 
      [8,2,4] with maximum absolute diff |8-2| = 6 > 4.
      [8,2,4,7] with maximum absolute diff |8-2| = 6 > 4.
      [2] with maximum absolute diff |2-2| = 0 <= 4.
      [2,4] with maximum absolute diff |2-4| = 2 <= 4.
      [2,4,7] with maximum absolute diff |2-7| = 5 > 4.
      [4] with maximum absolute diff |4-4| = 0 <= 4.
      [4,7] with maximum absolute diff |4-7| = 3 <= 4.
      [7] with maximum absolute diff |7-7| = 0 <= 4. 
      Therefore, the size of the longest subarray is 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  nums = [10,1,2,4,7,2], limit = 5

  ### Output  ➤ 4

  ### Explanation ➤ The subarray [2,4,7,2] is the longest since the maximum absolute diff is |2-7| = 5 <= 5.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤  nums = [4,2,2,2,4,4,2,2], limit = 0

  ### Output  ➤ 3

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= nums.length <= 105**
- **1 <= nums[i] <= 109**
- **0 <= limit <= 109**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Queue**
3. **Sliding Window**
4. **Heap (Priority Queue)**
5. **Ordered Set**
6. **Monotonic Queue**

