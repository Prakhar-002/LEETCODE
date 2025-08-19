# 2526. Find Consecutive Integers from a Data Stream

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-consecutive-integers-from-a-data-stream/description/"><strong>➥ ☢️ 2526 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design a data structure to process a stream of integers, capable of checking if the last *k* integers parsed are equal to a specified *value*. 

### Implement the `DataStream` class with an initializer and a method `consec(int num)` to add numbers to the stream and return `true` if the last *k* numbers are equal to *value*, and `false` otherwise. If fewer than *k* integers have been parsed, return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `["DataStream", "consec", "consec", "consec", "consec"]`
  ### `[[4, 3], [4], [4], [4], [3]]`

  ### 📤 `Output`  ➤ `[null, false, false, true, false]`

  ### 🔦 `Explanation`  ➤

```JS
DataStream dataStream = new DataStream(4, 3); //value = 4, k = 3 
dataStream.consec(4); // Only 1 integer is parsed, so returns False. 
dataStream.consec(4); // Only 2 integers are parsed.
                      // Since 2 is less than k, returns False. 
dataStream.consec(4); // The 3 integers parsed are all equal to value, so returns True. 
dataStream.consec(3); // The last k integers parsed in the stream are [4,4,3].
                      // Since 3 is not equal to value, it returns False.
```

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `["DataStream", "consec", "consec", "consec", "consec", "consec"]`
### `[[5,2],[5],[5],[5],[3],[5]]`

### 📤 `Output`  ➤ `[null,false,true,false,false,false]`

### 🔦 `Explanation` ➤

```JS
DataStream dataStream = new DataStream(5, 2); // value = 5, k = 2
dataStream.consec(5); // Only 1 integer is parsed, so returns False.
dataStream.consec(5); // The last k integers parsed are [5,5]. Since 5 == value, returns True.
dataStream.consec(5); // The last k integers parsed are [5,5]. Since 5 == value, returns True (but effectively reset due to only 2 values kept)
dataStream.consec(3); // The last k integers parsed are [5,3]. Since 3 != value, returns False.
dataStream.consec(5); // The last k integers parsed are [3,5]. Since 5 != value, returns False.
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= value, num <= 10^9` </br>
🔹 `1 <= k <= 10^5` </br>
🔹 At most `10^5` calls will be made to `consec`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table** </br>
🔸 **Design** </br>
🔸 **Queue** </br>
🔸 **Counting** </br>
🔸 **Data Stream** </br>

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
