# 165. Compare Version Numbers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/compare-version-numbers/description/?envType=daily-question&envId=2024-05-03"><strong>➥ ☢️ 165 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given two version strings, `version1` and `version2`, compare them. A version string consists of revisions separated by dots `'.'`. The value of the revision is its integer conversion ignoring leading zeros.

### To compare version strings, compare their revision values in left-to-right order. If one of the version strings has fewer revisions, treat the missing revision values as 0.

### Return the following:

- If `version1 < version2`, return `-1`.
- If `version1 > version2`, return `1`.
- Otherwise, return `0`.
 
</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ version1 = "1.2", version2 = "1.10"

  ### Output  ➤ -1

  ### Explanation  ➤ version1's second revision is "2" and version2's second revision is "10": 2 < 10, so version1 < version2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ version1 = "1.01", version2 = "1.001"

  ### Output  ➤ 0

  ### Explanation ➤ Ignoring leading zeroes, both "01" and "001" represent the same integer "1".


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ version1 = "1.0", version2 = "1.0.0.0"

  ### Output  ➤ 0

  ### Explanation  ➤ version1 has less revisions, which means every missing revision are treated as "0".

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= version1.length, version2.length <= 500**
- **`version1` and `version2` only contain digits and '.'.**
- **`version1` and `version2` are valid version numbers.**
- **All the given revisions in `version1` and `version2` can be stored in a 32-bit integer.**


</br>

# Topics 📋 ˋ°•*⁀➷

1. **Two Pointers**
2. **String**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/03%20-%2005%20-%202024%20---165.%20Compare%20Version%20Numbers%20%F0%9F%8D%81/%F0%9F%8D%81JAVA_165_CompareVersionNumbers.java) |
