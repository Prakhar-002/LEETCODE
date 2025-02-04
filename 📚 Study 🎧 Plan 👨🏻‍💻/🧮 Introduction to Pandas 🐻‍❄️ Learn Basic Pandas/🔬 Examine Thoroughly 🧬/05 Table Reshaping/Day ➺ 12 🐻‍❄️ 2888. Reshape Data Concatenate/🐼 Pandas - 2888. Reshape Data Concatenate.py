#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2888

import pandas as pd

def concatenateTables(df1: pd.DataFrame, df2: pd.DataFrame) -> pd.DataFrame:
      # concat() merges two DataFrames along axis=0 (rows).
      # This stacks df2 below df1, keeping column names consistent.
      return pd.concat([df1, df2], axis=0)
