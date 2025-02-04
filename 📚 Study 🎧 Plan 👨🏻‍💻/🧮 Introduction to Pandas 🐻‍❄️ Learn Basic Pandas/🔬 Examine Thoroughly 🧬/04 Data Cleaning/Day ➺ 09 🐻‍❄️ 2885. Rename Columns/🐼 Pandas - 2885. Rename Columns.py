#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2885

import pandas as pd

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
      students.columns = [ "student_id", "first_name", "last_name", "age_in_years" ]
      return students

#!----------------------------------------------------------------------------------------------- 

#* Using rename()

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
      return students.rename(columns={
            students.columns[0]: "student_id",
            students.columns[1]: "first_name",
            students.columns[2]: "last_name",
            students.columns[3]: "age_in_years"
      })

#!----------------------------------------------------------------------------------------------- 

#* Using set_axis()

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
      return students.set_axis(["student_id", "first_name", "last_name", "age_in_years"], axis=1)

#!----------------------------------------------------------------------------------------------- 

#* Using eval() (Not Recommended)

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
      students.columns = students.eval('["student_id", "first_name", "last_name", "age_in_years"]')
      return students
