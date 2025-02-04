#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2887

import pandas as pd

def fillMissingValues(products: pd.DataFrame) -> pd.DataFrame:
      # fillna(0) replaces all NaN (missing) values in the "quantity" column with 0.
      # This modifies the original DataFrame.
      products["quantity"] = products["quantity"].fillna(0)
      return products



#!----------------------------------------------------------------------------- 

#* Using replace()

def fillMissingValues(products: pd.DataFrame) -> pd.DataFrame:
      # replace({None: 0}) replaces all None values in the "quantity" column with 0.
      # Note: This will not replace NaN values (use fillna(0) for that).
      products["quantity"] = products["quantity"].replace({None: 0})
      return products



#!----------------------------------------------------------------------------- 

#* Using .loc[]

def fillMissingValues(products: pd.DataFrame) -> pd.DataFrame:
      # isna() checks for missing (NaN) values in the "quantity" column.
      # loc[] selects those rows and assigns them a value of 0.
      products.loc[products["quantity"].isna(), "quantity"] = 0
      return products



#!----------------------------------------------------------------------------- 

#* Using where()

def fillMissingValues(products: pd.DataFrame) -> pd.DataFrame:
      # where() keeps existing values and replaces NaN with the specified value (0).
      # notna() checks for non-missing values, keeping them unchanged.
      products["quantity"] = products["quantity"].where(products["quantity"].notna(), 0)
      return products
