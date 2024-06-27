# 1404. Number of Steps to Reduce a Number in Binary Representation to One

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/?envType=daily-question&envId=2024-05-21"><strong>➥ ☢️ 1404 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given the binary representation of an integer as a string `s`, return the number of steps to reduce it to `1` under the following rules:

- If the current number is even, you have to divide it by `2`.

- If the current number is odd, you have to add `1` to it.

### It is guaranteed that you can always reach one for all test cases.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ s = "1101" 

  ### Output  ➤ 6

  ### Explanation  ➤ "1101" corressponds to number 13 in their decimal representation.

    Step 1) 13 is odd, add 1 and obtain 14. 

    Step 2) 14 is even, divide by 2 and obtain 7.

    Step 3) 7 is odd, add 1 and obtain 8.

    Step 4) 8 is even, divide by 2 and obtain 4.  

    Step 5) 4 is even, divide by 2 and obtain 2. 

    Step 6) 2 is even, divide by 2 and obtain 1.


</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  s = "10"

  ### Output  ➤ 1

  ### Explanation ➤  "10" corresponds to number 2 in their decimal representation.

    Step 1) 2 is even, divide by 2 and obtain 1.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ s = "1"

  ### Output  ➤ 0

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= s.length <= 500**
- **s consists of characters '0' or '1'**
- **s[0] == '1'**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **String**
2. **Bit Manipulation**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/29%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201404.%20No%20of%20Steps%20to%20Reduce%20a%20No%20in%20Binary%20Represent%20to%201%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%8D%81JAVA_1404_NumberOfStepsToReduceANumbeInBinaryRepresentationToOne.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/29%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201404.%20No%20of%20Steps%20to%20Reduce%20a%20No%20in%20Binary%20Represent%20to%201%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%F0%9F%8D%B0PYTHON_1404_NumberOfStepsToReduceANumbeInBinaryRepresentationToOne.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/29%20-%2005%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201404.%20No%20of%20Steps%20to%20Reduce%20a%20No%20in%20Binary%20Represent%20to%201%20%F0%9F%8D%B0%20%F0%9F%8D%81%20%E2%98%83%EF%B8%8F/%E2%98%83%EF%B8%8FJAVASCRIPT_1404_NumberOfStepsToReduceANumbeInBinaryRepresentationToOne.js) |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/solutions/5224440/beats-100-java-best-formated-solution-with-multiple-image-step-wise-explanation)  |
