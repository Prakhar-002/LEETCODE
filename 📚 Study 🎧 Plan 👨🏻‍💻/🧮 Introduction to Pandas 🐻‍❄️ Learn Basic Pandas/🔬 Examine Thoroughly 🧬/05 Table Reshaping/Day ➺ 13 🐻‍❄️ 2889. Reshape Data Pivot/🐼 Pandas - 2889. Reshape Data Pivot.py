#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2889

import pandas as pd

def pivotTable(weather: pd.DataFrame) -> pd.DataFrame:
      # pivot() reshapes the DataFrame to organize data in a structured format.
      # "month" becomes the index, "city" becomes the columns, and "temperature" fills the values.
      return weather.pivot(index="month", columns="city", values="temperature")
