#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2880

import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
      # Filter rows where "student_id" is 101.
      # Select only the "name" and "age" columns from the filtered rows.
      return students.loc[students["student_id"] == 101, ["name", "age"]]



#!-------------------------------------------------------------------------------- 

#*  Using query()

def selectData(students: pd.DataFrame) -> pd.DataFrame:
      # Use query() to filter rows where "student_id" is 101.
      # Select only the "name" and "age" columns from the filtered result.
      return students.query("student_id == 101")[["name", "age"]]



#!-------------------------------------------------------------------------------- 

#*  Using Boolean Indexing with iloc

def selectData(students: pd.DataFrame) -> pd.DataFrame:
      # Filter rows where "student_id" is 101.
      # Use iloc to select columns at index positions 1 and 2 (assumed to be "name" and "age").
      return students[students["student_id"] == 101].iloc[:, 1:3]
