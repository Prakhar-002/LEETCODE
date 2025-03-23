# 2115. Find All Possible Recipes from Given Supplies

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-all-possible-recipes-from-given-supplies/?envType=daily-question&envId=2025-03-21"><strong>➥ ☢️ 2115 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

#  Description 📜 ˋ°•*⁀➷

You have information about `n` different recipes. You are given:
- A **string array** `recipes`.
- A **2D string array** `ingredients` where `ingredients[i]` contains the list of ingredients needed for `recipes[i]`.
- A **string array** `supplies`, which contains all the ingredients that you initially have (with infinite supply).

### 🔹 Rules:
- A recipe can also be an ingredient for another recipe.
- Return a **list of all the recipes** that can be created.
- The result can be in **any order**.
- **Note**: Two recipes may contain each other in their ingredients.

</br>


# 💡 Example 1️⃣ ˋ°•*⁀➷

### 📥 Input ➤ 
```plaintext
recipes = ["bread"]
ingredients = [["yeast","flour"]]
supplies = ["yeast","flour","corn"]
```

### 📤 Output ➤ 
```plaintext
["bread"]
```

### 🔦 Explanation ➤ 
We can create **"bread"** since we have the ingredients **"yeast"** and **"flour"**.

</br>

# 💡 Example 2️⃣ ˋ°•*⁀➷

### 📥 Input ➤ 
```plaintext
recipes = ["bread","sandwich"]
ingredients = [["yeast","flour"],["bread","meat"]]
supplies = ["yeast","flour","meat"]
```

### 📤 Output ➤ 
```plaintext
["bread","sandwich"]
```

### 🔦 Explanation ➤ 
1️⃣ We can create **"bread"** since we have **"yeast"** and **"flour"**.
2️⃣ We can create **"sandwich"** since we have **"meat"** and can create **"bread"**.

</br>

# 💡 Example 3️⃣ ˋ°•*⁀➷

### 📥 Input ➤ 
```plaintext
recipes = ["bread","sandwich","burger"]
ingredients = [["yeast","flour"],["bread","meat"],["sandwich","meat","bread"]]
supplies = ["yeast","flour","meat"]
```

### 📤 Output ➤ 
```plaintext
["bread","sandwich","burger"]
```

### 🔦 Explanation ➤ 
1️⃣ We can create **"bread"** since we have **"yeast"** and **"flour"**.
2️⃣ We can create **"sandwich"** since we have **"meat"** and can create **"bread"**.
3️⃣ We can create **"burger"** since we have **"meat"** and can create **"bread"** and **"sandwich"**.

</br>

# 🔒 Constraints ˋ°•*⁀➷

🔹 `n == recipes.length == ingredients.length`  
🔹 `1 <= n <= 100`  
🔹 `1 <= ingredients[i].length, supplies.length <= 100`  
🔹 `1 <= recipes[i].length, ingredients[i][j].length supplies[k].length <= 10`  
🔹 `recipes[i]`, `ingredients[i][j]`, and `supplies[k]` consist only of **lowercase English letters**.  
🔹 All values in `recipes` and `supplies` are **unique**.  
🔹 Each `ingredients[i]` does **not** contain duplicate values.  

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  
🔸 **Hash Table**  
🔸 **String**  
🔸 **Graph**  
🔸 **Topological Sort**

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/21%20-%2003%20-%202025%20---%202115.%20Find%20All%20Possible%20Recipes%20from%20Given%20Supplies%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202115.%20Find%20All%20Possible%20Recipes%20from%20Given%20Supplies.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/21%20-%2003%20-%202025%20---%202115.%20Find%20All%20Possible%20Recipes%20from%20Given%20Supplies%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202115.%20Find%20All%20Possible%20Recipes%20from%20Given%20Supplies.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/21%20-%2003%20-%202025%20---%202115.%20Find%20All%20Possible%20Recipes%20from%20Given%20Supplies%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202115.%20Find%20All%20Possible%20Recipes%20from%20Given%20Supplies.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/21%20-%2003%20-%202025%20---%202115.%20Find%20All%20Possible%20Recipes%20from%20Given%20Supplies%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202115.%20Find%20All%20Possible%20Recipes%20from%20Given%20Suppli.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
