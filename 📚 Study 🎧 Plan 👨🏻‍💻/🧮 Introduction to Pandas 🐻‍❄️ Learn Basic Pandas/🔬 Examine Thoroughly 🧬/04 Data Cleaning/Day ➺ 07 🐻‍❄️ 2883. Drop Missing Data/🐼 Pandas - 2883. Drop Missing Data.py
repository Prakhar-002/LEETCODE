#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2883

import pandas as pd

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
      # dropna() removes rows where the "name" column has missing (NaN) values.
      return students.dropna(subset=["name"])



#!-----------------------------------------------------

#* Using Boolean Indexing 

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
      # notna() returns a boolean mask where True indicates non-missing values.
      # This filters the DataFrame to keep only rows where "name" is not NaN.
      return students[students["name"].notna()]



#!-----------------------------------------------------

#* Using .loc[] 

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
      # loc[] selects rows where "name" is not NaN using notna().
      return students.loc[students["name"].notna()]



#!-----------------------------------------------------

#* Using query() 

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
      # query("name == name") filters out NaN values 
      # because NaN is not equal to itself in comparisons.
      return students.query("name == name")



#!-----------------------------------------------------

#* Using astype(str) with Boolean Indexing

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
      # astype(str) converts values to strings.
      # "nan" as a string does not match actual NaN values, so this may not work correctly.
      # A better approach is using notna(), but this method attempts to filter NaN as a string.
      return students[students["name"].astype(str) != "nan"]
