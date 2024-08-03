# 1460. Make Two Arrays Equal by Reversing Subarrays

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/description/?envType=daily-question&envId=2024-08-03"><strong>➥ ☢️ 1460 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two integer arrays of equal length `target` and `arr`. In one step, you can select any `non-empty subarray` of `arr` and reverse it. You are allowed to make any number of steps.

### Return *`true` if you can make `arr` equal to `target` or `false` otherwise*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  target = [1,2,3,4], arr = [2,4,1,3]

  ### 📤 `Output`  ➤  true

  ### 🔦 `Explanation`  ➤ You can follow the next steps to convert arr to target:

    1- Reverse subarray [2,4,1], arr becomes [1,4,2,3]
    
    2- Reverse subarray [4,2], arr becomes [1,2,4,3]
    
    3- Reverse subarray [4,3], arr becomes [1,2,3,4]
    
    There are multiple ways to convert arr to target, 
    this is not the only way to do so.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ target = [7], arr = [7]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation` ➤ arr is equal to target without any reverses.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ target = [3,7,9], arr = [3,7,11]

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation`  ➤ arr does not have value 9 and it can never be converted to target.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`target.length == arr.length`** </br>

🔹 **`1 <= target.length <= 1000`** </br>

🔹 **`1 <= target[i] <= 1000`** </br>

🔹 **`1 <= arr[i] <= 1000`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
