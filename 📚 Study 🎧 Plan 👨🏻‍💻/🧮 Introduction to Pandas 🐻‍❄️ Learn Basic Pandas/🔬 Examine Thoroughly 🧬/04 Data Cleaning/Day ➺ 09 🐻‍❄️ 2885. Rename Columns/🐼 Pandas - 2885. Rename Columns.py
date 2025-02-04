#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2885

import pandas as pd

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
      # This function renames all columns of the DataFrame by directly assigning a new list of column names.
      # The new column names are: "student_id", "first_name", "last_name", and "age_in_years".
      students.columns = ["student_id", "first_name", "last_name", "age_in_years"]
      return students



#!----------------------------------------------------------------------------------------------- 

#* Using rename()

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
      # rename() changes specific column names without modifying the original DataFrame.
      # It maps existing column names to new ones using a dictionary.
      return students.rename(columns={
            students.columns[0]: "student_id",
            students.columns[1]: "first_name",
            students.columns[2]: "last_name",
            students.columns[3]: "age_in_years"
      })



#!----------------------------------------------------------------------------------------------- 

#* Using set_axis()

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
      # set_axis() assigns new column names without modifying the original DataFrame.
      # axis=1 specifies that the change applies to columns.
      return students.set_axis(["student_id", "first_name", "last_name", "age_in_years"], axis=1)



#!----------------------------------------------------------------------------------------------- 

#* Using eval() (Not Recommended)

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
      # eval() is unnecessary here since the list is already a valid Python expression.
      # Directly assigning a list to students.columns is a better approach.
      students.columns = students.eval('["student_id", "first_name", "last_name", "age_in_years"]')
      return students
