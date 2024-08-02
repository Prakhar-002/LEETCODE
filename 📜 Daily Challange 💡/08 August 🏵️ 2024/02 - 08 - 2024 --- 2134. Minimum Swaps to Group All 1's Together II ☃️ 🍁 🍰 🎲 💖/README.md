# 2134. Minimum Swaps to Group All 1's Together II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/description/?envType=daily-question&envId=2024-08-02"><strong>➥ ☢️ 2134 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A `swap` is defined as taking two `distinct` positions in an array and swapping the values in them.

### A `circular` array is defined as an array where we consider the `first` element and the `last` element to be `adjacent`.

### Given a `binary circular` array `nums`, return *the minimum number of swaps required to group all `1`'s present in the array together at `any location`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [0,1,0,1,1,0,0]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤  Here are a few of the ways to group all the 1's together:
    [0,0,1,1,1,0,0] using 1 swap.

    [0,1,1,1,0,0,0] using 1 swap.

    [1,1,0,0,0,0,1] using 2 swaps (using the circular property of the array).

    There is no way to group all 1's together with 0 swaps.

    Thus, the minimum number of swaps required is 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [0,1,1,1,0,0,1,1,0]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ Here are a few of the ways to group all the 1's together:

    [1,1,1,0,0,0,0,1,1] using 2 swaps (using the circular property of the array).
    
    [1,1,1,1,1,0,0,0,0] using 2 swaps.
    
    There is no way to group all 1's together with 0 or 1 swaps.
    
    Thus, the minimum number of swaps required is 2.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [1,1,0,0,1]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ All the 1's are already grouped together due to the circular property of the array.</br> Thus, the minimum number of swaps required is 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **`nums[i]` is either `0` or `1`.** </br>

🔹 **** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Sliding Window**  </br>


</br>


# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
