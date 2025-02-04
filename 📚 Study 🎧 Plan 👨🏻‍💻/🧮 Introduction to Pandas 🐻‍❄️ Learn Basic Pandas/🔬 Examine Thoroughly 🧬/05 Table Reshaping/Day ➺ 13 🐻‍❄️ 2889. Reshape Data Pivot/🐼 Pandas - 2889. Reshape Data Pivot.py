#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2889

import pandas as pd

def pivotTable(weather: pd.DataFrame) -> pd.DataFrame:
      return weather.pivot(index="month", columns="city", values="temperature")
