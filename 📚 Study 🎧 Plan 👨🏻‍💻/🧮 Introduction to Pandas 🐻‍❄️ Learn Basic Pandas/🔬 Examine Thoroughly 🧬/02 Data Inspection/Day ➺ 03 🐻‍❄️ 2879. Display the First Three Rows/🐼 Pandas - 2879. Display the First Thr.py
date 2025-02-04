#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2879

import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
      return employees.head(3)

#!------------------------------------------------------------------

#* Using Slicing (iloc) 

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
      return employees.iloc[:3]

#!------------------------------------------------------------------

#* Using Slicing (loc) 

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
      return employees.loc[:2]

#!------------------------------------------------------------------

#* Using df.take()

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
      return employees.take([0, 1, 2])

#!------------------------------------------------------------------

#* Using df[:n] (Python List Slicing)

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
      return employees[:3]
