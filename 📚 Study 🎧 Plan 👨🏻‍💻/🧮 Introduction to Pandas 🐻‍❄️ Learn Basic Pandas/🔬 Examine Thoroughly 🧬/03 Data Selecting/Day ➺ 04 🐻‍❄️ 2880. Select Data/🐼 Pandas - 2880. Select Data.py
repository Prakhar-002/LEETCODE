#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2880

import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
      return students.loc[students["student_id"] == 101, ["name", "age"]]

#!-------------------------------------------------------------------------------- 

#*  Using query()

def selectData(students: pd.DataFrame) -> pd.DataFrame:
      return students.query("student_id == 101")[["name", "age"]]

#!-------------------------------------------------------------------------------- 

#*  Using Boolean Indexing with iloc

def selectData(students: pd.DataFrame) -> pd.DataFrame:
      return students[students["student_id"] == 101].iloc[:, 1 : 3]
