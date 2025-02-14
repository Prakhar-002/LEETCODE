# 1352. Product of the Last K Numbers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/product-of-the-last-k-numbers/description/?envType=daily-question&envId=2025-02-14"><strong>➥ ☢️ 1352 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design an algorithm that accepts a stream of integers and retrieves the product of the last `k` integers of the stream.

### Implement the `ProductOfNumbers` class:

- `ProductOfNumbers()` Initializes the object with an empty stream.

- `void add(int num)` Appends the integer `num` to the stream.

- `int getProduct(int k)` Returns the product of the last `k` numbers in the current list. You can assume that always the current list has at least `k` numbers.

### The test cases are generated so that, at any time, the product of any contiguous sequence of numbers will fit into a single 32-bit integer without overflowing.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ ["ProductOfNumbers","add","add","add","add","add","getProduct","getProduct","getProduct","add","getProduct"] </br> [[],[3],[0],[2],[5],[4],[2],[3],[4],[8],[2]]

  ### 📤 `Output`  ➤ [null,null,null,null,null,null,20,40,0,null,32]

  ### 🔦 `Explanation`  ➤  </br></br> ProductOfNumbers productOfNumbers = new ProductOfNumbers(); </br></br> productOfNumbers.add(3);        // [3] </br></br> productOfNumbers.add(0);        // [3,0] </br></br> productOfNumbers.add(2);        // [3,0,2] </br></br> productOfNumbers.add(5);        // [3,0,2,5] </br></br> productOfNumbers.add(4);        // [3,0,2,5,4] </br></br> productOfNumbers.getProduct(2); // return 20. The product of the last 2 numbers is 5 * 4 = 20 </br></br> productOfNumbers.getProduct(3); // return 40. The product of the last 3 numbers is 2 * 5 * 4 = 40 </br></br> productOfNumbers.getProduct(4); // return 0. The product of the last 4 numbers is 0 * 2 * 5 * 4 = 0 </br></br> productOfNumbers.add(8);        // [3,0,2,5,4,8] </br></br> productOfNumbers.getProduct(2); // return 32. The product of the last 2 numbers is 4 * 8 = 32 

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`0 <= num <= 100`** </br>

🔹 **1 <= k <= 4 * 10<sup>4</sup>** </br>

🔹 **At most 4 * 10<sup>4</sup> calls will be made to `add` and `getProduct`.** </br>

🔹 **The product of the stream at any point in time will fit in a 32-bit integer.** </br>

##### `Follow-up`: Can you implement both `GetProduct` and `Add` to work in `O(1)` time complexity instead of `O(k)` time complexity?

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Design**  </br>
🔸 **Data Stream**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
