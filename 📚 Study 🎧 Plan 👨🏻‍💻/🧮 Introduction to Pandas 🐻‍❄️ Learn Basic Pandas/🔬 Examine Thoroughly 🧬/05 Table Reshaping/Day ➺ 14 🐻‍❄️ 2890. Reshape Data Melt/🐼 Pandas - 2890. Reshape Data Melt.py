#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2890

import pandas as pd

def meltTable(report: pd.DataFrame) -> pd.DataFrame:
      return report.melt(id_vars = ["product"], var_name = "quarter", value_name = "sales")