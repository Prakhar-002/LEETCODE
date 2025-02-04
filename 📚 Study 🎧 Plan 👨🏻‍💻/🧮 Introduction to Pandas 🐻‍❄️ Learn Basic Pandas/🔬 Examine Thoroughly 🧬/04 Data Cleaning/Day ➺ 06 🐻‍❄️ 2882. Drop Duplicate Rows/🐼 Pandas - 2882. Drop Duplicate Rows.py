#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2882

import pandas as pd

def dropDuplicateEmails(customers: pd.DataFrame) -> pd.DataFrame:
      # drop_duplicates() removes duplicate rows based on the "email" column.
      # keep='first' keeps the first occurrence and removes subsequent duplicates.
      return customers.drop_duplicates(subset=['email'], keep='first')
