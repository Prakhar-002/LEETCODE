# 238. Product of Array Except Self

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/product-of-array-except-self/description/"><strong>➥ ☢️ 238 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `nums`, return *an array answer such that answer[i] is equal to the product of all the elements of `nums` except `nums[i]`*.

### The product of any prefix or suffix of `nums` is `guaranteed` to fit in a `32-bit` integer.

### You must write an algorithm that runs in `O(n)` time and without using the division operation.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤  nums = [1,2,3,4]

  ### 📤 Output  ➤ [24,12,8,6]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ nums = [-1,1,0,-3,3]

  ### 📤 Output  ➤ [0,0,9,0,0]


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= nums.length <= 10<sup>5</sup>** </br>
🔹 **-30 <= nums[i] <= 30** </br>
🔹 **The product of any prefix or suffix of `nums` is `guaranteed` to fit in a `32-bit` integer.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Prefix Sum**  </br>

</br>


# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Arrays%20%26%20Hashing/Day%20%E2%9E%BA%2007%20%F0%9F%A5%A1%20238.%20Product%20of%20Array%20Except%20Self%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%20238.%20Product%20of%20Array%20Except%20Self.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Arrays%20%26%20Hashing/Day%20%E2%9E%BA%2007%20%F0%9F%A5%A1%20238.%20Product%20of%20Array%20Except%20Self%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%20238.%20Product%20of%20Array%20Except%20Self.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Arrays%20%26%20Hashing/Day%20%E2%9E%BA%2007%20%F0%9F%A5%A1%20238.%20Product%20of%20Array%20Except%20Self%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%20238.%20Product%20of%20Array%20Except%20Self.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Arrays%20%26%20Hashing/Day%20%E2%9E%BA%2007%20%F0%9F%A5%A1%20238.%20Product%20of%20Array%20Except%20Self%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20238.%20Product%20of%20Array%20Except%20Se.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Arrays%20%26%20Hashing/Day%20%E2%9E%BA%2007%20%F0%9F%A5%A1%20238.%20Product%20of%20Array%20Except%20Self%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%20238.%20Product%20of%20Array%20Except%20.c)  |
