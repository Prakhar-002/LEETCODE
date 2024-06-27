# 1442. Count Triplets That Can Form Two Arrays of Equal XOR

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/?envType=daily-question&envId=2024-05-21"><strong>➥ ☢️ 1442 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of integers `arr`.

### We want to select three indices `i`, `j` and `k` where `(0 <= i < j <= k < arr.length)`.

### Let's define `a` and `b` as follows:

- `a = arr[i] ^ arr[i + 1] ^ ... ^ arr[j - 1]`

- `b = arr[j] ^ arr[j + 1] ^ ... ^ arr[k]`

### Note that ^ denotes the `bitwise-xor` operation.

### Return *the number of triplets (`i`, `j` and `k`) Where `a == b`*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤  arr = [2,3,1,6,7]

  ### Output  ➤ 4

  ### Explanation  ➤ The triplets are (0,1,2), (0,2,2), (2,3,4) and (2,4,4)

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ arr = [1,1,1,1,1]

  ### Output  ➤ 10

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= arr.length <= 300**
- **1 <= arr[i] <= 108**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Hash Table**
3. **Math**
4. **Bit Manipulation**
5. **Prefix Sum**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/30%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201442.%20Count%20Triplets%20That%20Can%20Form%20Two%20Arrays%20of%20Equal%20XOR%20%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%8D%81JAVA_1442(N%5E2)_CountTripletsThatCanFormTwoArraysOfEqualXOR.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/30%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201442.%20Count%20Triplets%20That%20Can%20Form%20Two%20Arrays%20of%20Equal%20XOR%20%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%8D%B0PYTHON_1442(N%5E2)_CountTripletsThatCanFormTwoArraysOfEqualXOR.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/30%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201442.%20Count%20Triplets%20That%20Can%20Form%20Two%20Arrays%20of%20Equal%20XOR%20%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%E2%98%83%EF%B8%8FJAVASCRIPT_1442(N%5E2)_CountTripletsThatCanFormTwoArraysOfEqualXOR.js) |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/solutions/5230002/100-beats-champion-s-explanation-cute-formatted-with-examples-3-languages)  |
