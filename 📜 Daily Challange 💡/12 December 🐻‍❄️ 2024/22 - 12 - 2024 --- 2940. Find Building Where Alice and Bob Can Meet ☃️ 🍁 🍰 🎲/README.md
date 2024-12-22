# 2940. Find Building Where Alice and Bob Can Meet

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-building-where-alice-and-bob-can-meet/description/?envType=daily-question&envId=2024-12-22"><strong>➥ 🫀 2940 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed array `heights` of positive integers, where `heights[i]` represents the height of the i<sup>th</sup> building.

### If a person is in building `i`, they can move to any other building `j` if and only if `i < j` and `heights[i] < heights[j]`.

### You are also given another array `queries` where queries[i] = [a<sub>i</sub>, b<sub>i</sub>]. On the i<sup>th</sup> query, Alice is in building a<sub>i</sub> while Bob is in building b<sub>i</sub>.

### Return *an array `ans` where `ans[i]` is the index of the leftmost building where Alice and Bob can meet on the i<sup>th</sup> query. If Alice and Bob cannot move to a common building on query `i`, set `ans[i]` to `-1`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ heights = [6,4,8,5,2,7], queries = [[0,1],[0,3],[2,4],[3,4],[2,2]]

  ### 📤 `Output`  ➤ [2,5,-1,5,2]

  ### 🔦 `Explanation`  ➤ In the first query, Alice and Bob can move to building 2 since heights[0] < heights[2] and heights[1] < heights[2]. 

➺ In the second query, Alice and Bob can move to building 5 since heights[0] < heights[5] and heights[3] < heights[5]. 

➺ In the third query, Alice cannot meet Bob since Alice cannot move to any other building.

➺ In the fourth query, Alice and Bob can move to building 5 since heights[3] < heights[5] and heights[4] < heights[5].

➺ In the fifth query, Alice and Bob are already in the same building.  

➺ For ans[i] != -1, It can be shown that ans[i] is the leftmost building where Alice and Bob can meet.

➺ For ans[i] == -1, It can be shown that there is no building where Alice and Bob can meet.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ heights = [5,3,8,2,6,1,4,6], queries = [[0,7],[3,5],[5,2],[3,0],[1,6]]

  ### 📤 `Output`  ➤ [7,6,-1,4,6]

  ### 🔦 `Explanation` ➤ In the first query, Alice can directly move to Bob's building since heights[0] < heights[7].

➺ In the second query, Alice and Bob can move to building 6 since heights[3] < heights[6] and heights[5] < heights[6].

➺ In the third query, Alice cannot meet Bob since Bob cannot move to any other building.

➺ In the fourth query, Alice and Bob can move to building 4 since heights[3] < heights[4] and heights[0] < heights[4].

➺ In the fifth query, Alice can directly move to Bob's building since heights[1] < heights[6].

➺ For ans[i] != -1, It can be shown that ans[i] is the leftmost building where Alice and Bob can meet.

➺ For ans[i] == -1, It can be shown that there is no building where Alice and Bob can meet.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= heights.length <= 5 * 10<sup>4</sup>** </br>

🔹 **1 <= heights[i] <= 10<sup>9</sup>** </br>

🔹 **1 <= queries.length <= 5 * 10<sup>4</sup>** </br>

🔹 **queries[i] = [a<sub>i</sub>, b<sub>i</sub>]** </br>

🔹 **0 <= a<sub>i</sub>, b<sub>i</sub> <= heights.length - 1** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Stack**  </br>
🔸 **Binary Indexed Tree**  </br>
🔸 **Segment Tree**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Monotonic Stack**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
