# 2353. Design a Food Rating System

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/design-a-food-rating-system/description/?envType=daily-question&envId=2025-09-17"><strong>➥ ☢️ 2353 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Design a food rating system that can do the following:

- **Modify** the rating of a food item listed in the system.

- Return the highest-rated food item for a type of cuisine in the system.

### Implement the FoodRatings class:

- `FoodRatings(String[] foods, String[] cuisines, int[] ratings)` Initializes the system. The food items are described by `foods`, `cuisines` and `ratings`, all of which have a length of `n`.

  - `foods[i]` is the name of the i<sup>th</sup> food,
  
  - `cuisines[i]` is the type of cuisine of the i<sup>th</sup> food, and
  
  - `ratings[i]` is the initial rating of the i<sup>th</sup> food.

- `void changeRating(String food, int newRating)` Changes the rating of the food item with the name `food`.

- `String highestRated(String cuisine)` Returns the name of the food item that has the highest rating for the given type of `cuisine`. If there is a tie, return the item with the lexicographically smaller name.

### Note that a string `x` is lexicographically smaller than string `y` if `x` comes before `y` in dictionary order, that is, either `x` is a prefix of `y`, or if `i` is the first position such that `x[i] != y[i]`, then `x[i]` comes before `y[i]` in alphabetic order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤

```JS
`["FoodRatings", "highestRated", "highestRated", "changeRating", "highestRated", "changeRating", "highestRated"]
[[["kimchi", "miso", "sushi", "moussaka", "ramen", "bulgogi"], ["korean", "japanese", "japanese", "greek", "japanese", "korean"], [9, 12, 8, 15, 14, 7]], ["korean"], ["japanese"], ["sushi", 16], ["japanese"], ["ramen", 16], ["japanese"]]`
```

  ### 📤 `Output`  ➤ `[null, "kimchi", "ramen", null, "sushi", null, "ramen"]`

  ### 🔦 `Explanation`  ➤ 

```JS
    FoodRatings foodRatings = new FoodRatings(["kimchi", "miso", "sushi", "moussaka", "ramen", "bulgogi"], ["korean", "japanese", "japanese", "greek", "japanese", "korean"], [9, 12, 8, 15, 14, 7]);
    foodRatings.highestRated("korean"); // return "kimchi" ("kimchi" is highest rated korean food, rating 9)
    foodRatings.highestRated("japanese"); // return "ramen" ("ramen" is highest rated japanese food, rating 14)
    foodRatings.changeRating("sushi", 16); // "sushi" now has rating 16.
    foodRatings.highestRated("japanese"); // return "sushi" ("sushi" is highest rated japanese food, rating 16)
    foodRatings.changeRating("ramen", 16); // "ramen" now has rating 16.
    foodRatings.highestRated("japanese"); // return "ramen" (both "sushi" and "ramen" have rating 16, "ramen" is lexicographically smaller)
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n <= 2 * 10^4` </br>
🔹 `n == foods.length == cuisines.length == ratings.length` </br>
🔹 `1 <= foods[i].length, cuisines[i].length <= 10` </br>
🔹 `foods[i], cuisines[i]` consist of lowercase English letters. </br>
🔹 `1 <= ratings[i] <= 10^8` </br>
🔹 All the strings in `foods` are distinct. </br>
🔹 `food` will be the name of a food item in the system across all calls to `changeRating`. </br>
🔹 `cuisine` will be a type of cuisine of at least one food item in the system across all calls to `highestRated`. </br>
🔹 At most `2 * 10^4` calls in total will be made to `changeRating` and `highestRated`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **String** </br>
🔸 **Design** </br>
🔸 **Heap (Priority Queue)** </br>
🔸 **Ordered Set** </br>


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
