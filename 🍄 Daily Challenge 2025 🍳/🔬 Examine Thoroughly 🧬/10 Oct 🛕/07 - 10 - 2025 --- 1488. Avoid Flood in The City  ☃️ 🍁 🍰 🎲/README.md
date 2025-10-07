# 1488. Avoid Flood in The City

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/avoid-flood-in-the-city/description/?envType=daily-question&envId=2025-10-07"><strong>➥ ☢️ 1488 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Your country has an infinite number of lakes. Initially, all the lakes are empty, but when it rains over the `n`th lake, the `n`th lake becomes full of water. If it rains over a lake that is full of water, there will be a flood. Your goal is to avoid floods in any lake.

### Given an integer array `rains` where:

- `rains[i] > 0` means there will be rains over the `rains[i]` lake.
- `rains[i] == 0` means there are no rains this day and you can choose one lake this day and dry it.

### Return an array `ans` where:

- `ans.length == rains.length`
- `ans[i] == -1` if `rains[i] > 0`.
- `ans[i]` is the lake you choose to dry in the `i`th day if `rains[i] == 0`.

### If there are multiple valid answers return any of them. If it is impossible to avoid flood return an empty array.

### Notice that if you chose to dry a full lake, it becomes empty, but if you chose to dry an empty lake, nothing changes.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `rains = [1,2,3,4]`

  ### 📤 `Output`  ➤ `[-1,-1,-1,-1]`

  ### 🔦 `Explanation`  ➤ ➺

  - After the first day full lakes are `[1]`
  - After the second day full lakes are `[1,2]`
  - After the third day full lakes are `[1,2,3]`
  - After the fourth day full lakes are `[1,2,3,4]`
  - There's no day to dry any lake and there is no flood in any lake.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `rains = [1,2,0,0,2,1]`

  ### 📤 `Output`  ➤ `[-1,-1,2,1,-1,-1]`

  ### 🔦 `Explanation`  ➤ ➺

  - After the first day full lakes are `[1]`
  - After the second day full lakes are `[1,2]`
  - After the third day, we dry lake 2. Full lakes are `[1]`
  - After the fourth day, we dry lake 1. There is no full lakes.
  - After the fifth day, full lakes are `[2]`.
  - After the sixth day, full lakes are `[1,2]`.
  - It is easy that this scenario is flood-free. `[-1,-1,1,2,-1,-1]` is another acceptable scenario.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `rains = [1,2,0,1,2]`

  ### 📤 `Output`  ➤ `[]`

  ### 🔦 `Explanation`  ➤ ➺

  - After the second day, full lakes are `[1,2]`. We have to dry one lake in the third day.
  - After that, it will rain over lakes `[1,2]`. It's easy to prove that no matter which lake you choose to dry in the 3rd day, the other one will flood.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= rains.length <= 10^5` </br>
🔹 `0 <= rains[i] <= 10^9` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Binary Search** </br>
🔸 **Greedy** </br>
🔸 **Heap (Priority Queue)** </br>

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
