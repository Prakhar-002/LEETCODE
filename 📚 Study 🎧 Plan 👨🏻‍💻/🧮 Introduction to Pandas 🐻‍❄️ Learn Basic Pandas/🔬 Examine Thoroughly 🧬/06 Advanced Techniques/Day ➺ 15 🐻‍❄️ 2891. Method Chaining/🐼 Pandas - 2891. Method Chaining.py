#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2891

import pandas as pd

def findHeavyAnimals(animals: pd.DataFrame) -> pd.DataFrame:
      return animals[animals["weight"] > 100].sort_values(by="weight", ascending=False)[["name"]]