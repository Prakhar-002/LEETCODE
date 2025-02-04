#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2886

import pandas as pd

def changeDatatype(students: pd.DataFrame) -> pd.DataFrame:
      students["grade"] = students["grade"].astype(int)
      return students

#!------------------------------------------------------------------------- 

#*  Using apply(int)

def changeDatatype(students: pd.DataFrame) -> pd.DataFrame:
      students["grade"] = students["grade"].apply(int)
      return students

#!------------------------------------------------------------------------- 

#*  Using numpy.astype()

def changeDatatype(students: pd.DataFrame) -> pd.DataFrame:
      students["grade"] = students["grade"].to_numpy().astype(int)
      return students
