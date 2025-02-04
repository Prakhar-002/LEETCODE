#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2890

import pandas as pd

def meltTable(report: pd.DataFrame) -> pd.DataFrame:
      # melt() transforms wide-format data into long-format.
      # "product" stays as an identifier column (id_vars).
      # Other columns become two new columns: "quarter" (column names) and "sales" (values).
      return report.melt(id_vars=["product"], var_name="quarter", value_name="sales")
