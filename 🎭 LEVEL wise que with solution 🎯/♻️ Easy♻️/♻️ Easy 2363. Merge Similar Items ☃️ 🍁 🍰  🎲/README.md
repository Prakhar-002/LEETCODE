# 2363. Merge Similar Items

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/merge-similar-items/"><strong>➥ ♻️ 2363 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two 2D integer arrays, items1 and items2, representing two sets of items. Each array items has the following properties:

- `items[i] = [value_i, weight_i]` where `value_i` represents the value and `weight_i` represents the weight of the i<sup>th</sup> item.

-The value of each item in `items` is unique.

### Return *a 2D integer array* `ret` *where* `ret[i] = [value_i, weight_i]`, with `weight_i` *being the sum of weights of all items with value* `value_i`.

### Note: `ret` should be returned in ascending order by value.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ items1 = [[1,1],[4,5],[3,8]], items2 = [[3,1],[1,5]]

  ### 📤 `Output`  ➤ [[1,6],[3,9],[4,5]]

  ### 🔦 `Explanation`  ➤ The item with value = 1 occurs in items1 with weight = 1 and in items2 with weight = 5, total weight = 1 + 5 = 6.</br></br>The item with value = 3 occurs in items1 with weight = 8 and in items2 with weight = 1, total weight = 8 + 1 = 9.</br></br>The item with value = 4 occurs in items1 with weight = 5, total weight = 5.  </br></br>Therefore, we return [[1,6],[3,9],[4,5]].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ items1 = [[1,1],[3,2],[2,3]], items2 = [[2,1],[3,2],[1,3]]

  ### 📤 `Output`  ➤  [[1,4],[2,4],[3,4]]

  ### 🔦 `Explanation` ➤ The item with value = 1 occurs in items1 with weight = 1 and in items2 with weight = 3, total weight = 1 + 3 = 4.</br></br>The item with value = 2 occurs in items1 with weight = 3 and in items2 with weight = 1, total weight = 3 + 1 = 4.</br></br>The item with value = 3 occurs in items1 with weight = 2 and in items2 with weight = 2, total weight = 2 + 2 = 4.</br></br>Therefore, we return [[1,4],[2,4],[3,4]].

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  items1 = [[1,3],[2,2]], items2 = [[7,1],[2,2],[1,4]]

  ### 📤 `Output`  ➤ [[1,7],[2,4],[7,1]]

  ### 🔦 `Explanation`  ➤ The item with value = 1 occurs in items1 with weight = 3 and in items2 with weight = 4, total weight = 3 + 4 = 7. </br></br>The item with value = 2 occurs in items1 with weight = 2 and in items2 with weight = 2, total weight = 2 + 2 = 4. </br></br>The item with value = 7 occurs in items2 with weight = 1, total weight = 1.</br></br>Therefore, we return [[1,7],[2,4],[7,1]].

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= items1.length, items2.length <= 1000`** </br>

🔹 **`items1[i].length == items2[i].length == 2`** </br>

🔹 **`1 <= value_i, weight_i <= 1000`** </br>

🔹 **Each `value_i` in items1 is unique.``** </br>

🔹 **Each `value_i` in items2 is unique.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Sorting**  </br>
🔸 **Ordered Set**  </br>

</br>

# 🌯 Similar 🍲 Questions 🍜 `Solution` 🍱 ˋ°•*⁀➷

### ♻️ [2570. Merge Two 2D Arrays by Summing Values](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/02%20-%2003%20-%202025%20---%202570.%20Merge%20Two%202D%20Arrays%20by%20Summing%20Values%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96) </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202363.%20Merge%20Similar%20Items%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202363.%20Merge%20Similar%20Items.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202363.%20Merge%20Similar%20Items%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202363.%20Merge%20Similar%20Items.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202363.%20Merge%20Similar%20Items%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202363.%20Merge%20Similar%20Items.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202363.%20Merge%20Similar%20Items%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202363.%20Merge%20Similar%20Items.js) |
