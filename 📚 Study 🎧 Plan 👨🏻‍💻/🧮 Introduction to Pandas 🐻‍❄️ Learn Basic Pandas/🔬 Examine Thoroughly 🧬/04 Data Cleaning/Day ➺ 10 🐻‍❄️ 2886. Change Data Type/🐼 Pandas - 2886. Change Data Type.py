#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2886

import pandas as pd

def changeDatatype(students: pd.DataFrame) -> pd.DataFrame:
      # astype(int) converts the "grade" column to integer type.
      # This modifies the original DataFrame.
      students["grade"] = students["grade"].astype(int)
      return students



#!------------------------------------------------------------------------- 

#*  Using apply(int)

def changeDatatype(students: pd.DataFrame) -> pd.DataFrame:
      # apply(int) converts each value in the "grade" column to an integer.
      # It works similarly to astype(int) but applies the function element-wise.
      students["grade"] = students["grade"].apply(int)
      return students



#!------------------------------------------------------------------------- 

#*  Using numpy.astype()

def changeDatatype(students: pd.DataFrame) -> pd.DataFrame:
      # to_numpy() converts the "grade" column to a NumPy array.
      # astype(int) ensures all values are cast to integers.
      # This modifies the DataFrame by replacing the column with the converted values.
      students["grade"] = students["grade"].to_numpy().astype(int)
      return students
