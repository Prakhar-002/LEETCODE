# 2570. Merge Two 2D Arrays by Summing Values

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/?envType=daily-question&envId=2025-03-02"><strong>➥ ♻️ 2570 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two 2D integer arrays `nums1` and `nums2`.

- nums1[i] = [id<sub>i</sub>, val<sub>i</sub>] indicate that the number with the id id<sub>i</sub> has a value equal to val<sub>i</sub>.

- nums2[i] = [id<sub>i</sub>, val<sub>i</sub>] indicate that the number with the id id<sub>i</sub> has a value equal to val<sub>i</sub>.

### Each array contains uniq`ue ids and is sorted in `ascending` order by id.

### Merge the two arrays into one array that is sorted in ascending order by id, respecting the following conditions:

- Only ids that appear in at least one of the two arrays should be included in the resulting array.

- Each id should be included **only once** and its value should be the sum of the values of this id in the two arrays. If the id does not exist in one of the two arrays, then assume its value in that array to be `0`.

### Return *the resulting array*. The returned array must be sorted in ascending order by id.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums1 = [[1,2],[2,3],[4,5]], nums2 = [[1,4],[3,2],[4,1]]

  ### 📤 `Output`  ➤ [[1,6],[2,3],[3,2],[4,6]]

  ### 🔦 `Explanation`  ➤ The resulting array contains the following:</br></br>➺ id = 1, the value of this id is 2 + 4 = 6.</br></br>➺ id = 2, the value of this id is 3.</br></br>➺ id = 3, the value of this id is 2.</br></br>➺ id = 4, the value of this id is 5 + 1 = 6.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums1 = [[2,4],[3,6],[5,5]], nums2 = [[1,3],[4,3]]

  ### 📤 `Output`  ➤  [[1,3],[2,4],[3,6],[4,3],[5,5]]

  ### 🔦 `Explanation` ➤ There are no common ids, so we just include each id with its value in the resulting list.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums1.length, nums2.length <= 200`** </br>

🔹 **`nums1[i].length == nums2[j].length == 2`** </br>

🔹 **1 <= id<sub>i</sub>, val<sub>i</sub> <= 1000** </br>

🔹 **Both arrays contain unique ids.** </br>

🔹 **Both arrays are in strictly ascending order by id.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Two Pointers**  </br>

</br>

# 🌯 Similar 🍲 Questions 🍜 `Solution` 🍱 ˋ°•*⁀➷

### ♻️ [2363. Merge Similar Items](https://github.com/Prakhar-002/LEETCODE/tree/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%E2%99%BB%EF%B8%8F%20Easy%E2%99%BB%EF%B8%8F/%E2%99%BB%EF%B8%8F%20Easy%202363.%20Merge%20Similar%20Items%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%20%F0%9F%8E%B2) </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/02%20-%2003%20-%202025%20---%202570.%20Merge%20Two%202D%20Arrays%20by%20Summing%20Values%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202570.%20Merge%20Two%202D%20Arrays%20by%20Summing%20Values.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/02%20-%2003%20-%202025%20---%202570.%20Merge%20Two%202D%20Arrays%20by%20Summing%20Values%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202570.%20Merge%20Two%202D%20Arrays%20by%20Summing%20Values.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/02%20-%2003%20-%202025%20---%202570.%20Merge%20Two%202D%20Arrays%20by%20Summing%20Values%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202570.%20Merge%20Two%202D%20Arrays%20by%20Summing%20Values.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/02%20-%2003%20-%202025%20---%202570.%20Merge%20Two%202D%20Arrays%20by%20Summing%20Values%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202570.%20Merge%20Two%202D%20Arrays%20by%20Summing%20Values.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/02%20-%2003%20-%202025%20---%202570.%20Merge%20Two%202D%20Arrays%20by%20Summing%20Values%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202570.%20Merge%20Two%202D%20Arrays%20by%20Summing%20Values.c)  |
