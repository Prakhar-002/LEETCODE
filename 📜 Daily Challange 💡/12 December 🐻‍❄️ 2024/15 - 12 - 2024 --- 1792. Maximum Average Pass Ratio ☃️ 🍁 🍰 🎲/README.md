# 1792. Maximum Average Pass Ratio

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-average-pass-ratio/description/?envType=daily-question&envId=2024-12-15"><strong>➥ ☢️ 1792 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is a school that has classes of students and each class will be having a final exam. You are given a 2D integer array classes, where classes[i] = [pass<sup>i</sup>, total<sup>i</sup>]. You know beforehand that in the i<sup>th</sup> class, there are total<sup>i</sup> total students, but only pass<sup>i</sup> number of students will pass the exam.

###  You are also given an integer `extraStudents`. There are another `extraStudents` brilliant students that are `guaranteed` to pass the exam of any class they are assigned to. You want to assign each of the `extraStudents` students to a class in a way that `maximizes` the `average` pass ratio across `all` the classes.

###  The `pass ratio` of a class is equal to the number of students of the class that will pass the exam divided by the total number of students of the class. The `average pass ratio` is the sum of pass ratios of all the classes divided by the number of the classes.
 
###  Return *the maximum possible average pass ratio after assigning the `extraStudents` students. Answers within 10-5 of the actual answer will be accepted*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ classes = [[1,2],[3,5],[2,2]], extraStudents = 2

  ### 📤 `Output`  ➤ 0.78333

  ### 🔦 `Explanation`  ➤ You can assign the two extra students to the first class. The average pass ratio will be equal to (3/4 + 3/5 + 2/2) / 3 = 0.78333.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ classes = [[2,4],[3,9],[4,5],[2,10]], extraStudents = 4

  ### 📤 `Output`  ➤ 0.53485

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= classes.length <= 10<sup>5</sup>** </br>

🔹 **`classes[i].length == 2`** </br>

🔹 **1 <= pass<sup>i</sup> <= total<sup>i</sup> <= 10<sup>5</sup>** </br>

🔹 **1 <= extraStudents <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>
🔸 **Heap (Priority Queue)**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/15%20-%2012%20-%202024%20---%201792.%20Maximum%20Average%20Pass%20Ratio%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201792.%20Maximum%20Average%20Pass%20Ratio.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/15%20-%2012%20-%202024%20---%201792.%20Maximum%20Average%20Pass%20Ratio%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201792.%20Maximum%20Average%20Pass%20Ratio.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/15%20-%2012%20-%202024%20---%201792.%20Maximum%20Average%20Pass%20Ratio%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201792.%20Maximum%20Average%20Pass%20Ratio.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/12%20December%20%F0%9F%90%BB%E2%80%8D%E2%9D%84%EF%B8%8F%202024/15%20-%2012%20-%202024%20---%201792.%20Maximum%20Average%20Pass%20Ratio%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201792.%20Maximum%20Average%20Pass%20Ratio.js) |
