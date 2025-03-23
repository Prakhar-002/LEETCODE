# 2115. Find All Possible Recipes from Given Supplies

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-all-possible-recipes-from-given-supplies/?envType=daily-question&envId=2025-03-20"><strong>➥ ☢️ 2115 Leetcode Medium ☢️ </strong></a>
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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
