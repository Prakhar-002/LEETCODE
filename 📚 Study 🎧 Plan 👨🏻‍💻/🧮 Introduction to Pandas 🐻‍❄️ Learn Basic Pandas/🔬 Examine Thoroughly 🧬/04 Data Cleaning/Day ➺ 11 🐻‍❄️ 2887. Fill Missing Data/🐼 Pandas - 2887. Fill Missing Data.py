#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2887

import pandas as pd

def fillMissingValues(products: pd.DataFrame) -> pd.DataFrame:
      products["quantity"] = products["quantity"].fillna(0)
      return products

#!----------------------------------------------------------------------------- 

#* Using replace()

def fillMissingValues(products: pd.DataFrame) -> pd.DataFrame:
      products["quantity"] = products["quantity"].replace({ None : 0 })
      return products

#!----------------------------------------------------------------------------- 

#* Using .loc[]

def fillMissingValues(products: pd.DataFrame) -> pd.DataFrame:
      products.loc[products["quantity"].isna(), "quantity"] = 0
      return products

#!----------------------------------------------------------------------------- 

#* Using where()

def fillMissingValues(products: pd.DataFrame) -> pd.DataFrame:
      products["quantity"] = products["quantity"].where(products["quantity"].notna(), 0)
      return products
