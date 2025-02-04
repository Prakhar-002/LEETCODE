#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2879

import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
      # head(3) returns the first 3 rows of the DataFrame.
      return employees.head(3)



#!------------------------------------------------------------------

#* Using Slicing (iloc) 

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
      # iloc[:3] selects the first 3 rows using integer-based indexing.
      return employees.iloc[:3]



#!------------------------------------------------------------------

#* Using Slicing (loc) 

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
      # loc[:2] selects rows with index labels 0, 1, and 2 (inclusive).
      return employees.loc[:2]



#!------------------------------------------------------------------

#* Using df.take()

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
      # take([0, 1, 2]) selects rows at the specified positions (0, 1, and 2).
      return employees.take([0, 1, 2])



#!------------------------------------------------------------------

#* Using df[:n] (Python List Slicing)

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
      # employees[:3] selects the first 3 rows using slicing.
      return employees[:3]
