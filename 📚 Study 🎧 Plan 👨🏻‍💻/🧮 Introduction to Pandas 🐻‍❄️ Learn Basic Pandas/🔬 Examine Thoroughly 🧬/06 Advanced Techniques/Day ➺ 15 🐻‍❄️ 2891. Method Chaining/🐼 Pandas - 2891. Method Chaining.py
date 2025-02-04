#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2891

import pandas as pd 

def findHeavyAnimals(animals: pd.DataFrame) -> pd.DataFrame:
      # Filters the DataFrame to include only animals with weight > 100.
      # Sorts the filtered DataFrame by "weight" in descending order.
      # Selects only the "name" column to return.
      return animals[animals["weight"] > 100].sort_values(by="weight", ascending=False)[["name"]]
