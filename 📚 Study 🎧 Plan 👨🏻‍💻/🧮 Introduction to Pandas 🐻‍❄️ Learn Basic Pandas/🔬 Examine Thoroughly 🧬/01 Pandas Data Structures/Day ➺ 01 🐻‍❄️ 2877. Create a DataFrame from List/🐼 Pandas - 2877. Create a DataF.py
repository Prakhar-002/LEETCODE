#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2877

import pandas as pd

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
      # Create a DataFrame from the given list of student data
      # Each sublist represents a student's details (student_id and age)
      # The DataFrame will have two columns: "student_id" and "age"
      return pd.DataFrame(student_data, columns=["student_id", "age"])



#!---------------------------------------------------------------------

#* Using rename function

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
      # Create a DataFrame from the given list of student data
      df = pd.DataFrame(student_data)

      # Rename the columns: the first column (index 0) to "student_id" 
      # and the second column (index 1) to "age"
      df = df.rename(columns={0: "student_id", 1: "age"})

      # Return the modified DataFrame
      return df



#!---------------------------------------------------------------------

#* Modifying columns Attribute

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
      # Create a DataFrame from the given list of student data
      df = pd.DataFrame(student_data)

      # Assign column names directly: "student_id" for the first column
      # and "age" for the second column
      df.columns = ["student_id", "age"]

      # Return the modified DataFrame
      return df



#!---------------------------------------------------------------------

#* Using set_axis() Method

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
      # Create a DataFrame from the given list of student data
      df = pd.DataFrame(student_data)

      # Set column names using set_axis method
      # "student_id" for the first column and "age" for the second column
      df = df.set_axis(["student_id", "age"], axis=1)

      # Return the modified DataFrame
      return df
