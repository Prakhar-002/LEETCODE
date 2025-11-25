# How Many Numbers Are Smaller Than the Current Number

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/?envType=problem-list-v2&envId=dsa-linear-shoal-array-ii"><strong>➥ ♻️ Q2 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the array `nums`, for each `nums[i]` find out how many numbers in the array are smaller than it. That is, for each `nums[i]` you have to count the number of valid j's such that j != i and nums[j] < nums[i].

### Return the answer in an array.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [8,1,2,2,3]

  ### 📤 `Output`  ➤ [4,0,1,1,3]

  ### 🔦 `Explanation`  ➤ 

  - For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). 
  - For nums[1]=1 does not exist any smaller number than it.
  - For nums[2]=2 there exist one smaller number than it (1). 
  - For nums[3]=2 there exist one smaller number than it (1). 
  - For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [6,5,4,8]

  ### 📤 `Output`  ➤ [2,1,0,3]

  ### 🔦 `Explanation` ➤ 

  - For nums[0]=6, there are two smaller numbers (5, 4). 
  - For nums[1]=5, there is one smaller number (4). 
  - For nums[2]=4, there are no smaller numbers. 
  - For nums[3]=8, there are three smaller numbers (6, 5, 4).

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [7,7,7,7]

  ### 📤 `Output`  ➤ [0,0,0,0]

  ### 🔦 `Explanation` ➤ For each element, there are no numbers in the array strictly smaller than it.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= nums.length <= 500 </br>
🔹 0 <= nums[i] <= 100 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Sorting** </br>
🔸 **Counting Sort** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Array%202/Q2.%20How%20Many%20Numbers%20Are%20Smaller%20Than%20the%20Current%20Number/%F0%9F%8D%81JAVA%20-%20How%20Many%20Numbers%20Are%20Smaller%20Than%20the%20Current%20Number.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Array%202/Q2.%20How%20Many%20Numbers%20Are%20Smaller%20Than%20the%20Current%20Number/%F0%9F%8E%B2CPP%20-%20How%20Many%20Numbers%20Are%20Smaller%20Than%20the%20Current%20Number.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Array%202/Q2.%20How%20Many%20Numbers%20Are%20Smaller%20Than%20the%20Current%20Number/%F0%9F%8D%B0PYTHON%20-%20How%20Many%20Numbers%20Are%20Smaller%20Than%20the%20Current%20Number.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Array%202/Q2.%20How%20Many%20Numbers%20Are%20Smaller%20Than%20the%20Current%20Number/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20How%20Many%20Numbers%20Are%20Smaller%20Than%20the%20Current%20Number.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/f6650198-a632-4de1-a50b-e05805271a95" width = "700px" height="462px" />

</h1>
