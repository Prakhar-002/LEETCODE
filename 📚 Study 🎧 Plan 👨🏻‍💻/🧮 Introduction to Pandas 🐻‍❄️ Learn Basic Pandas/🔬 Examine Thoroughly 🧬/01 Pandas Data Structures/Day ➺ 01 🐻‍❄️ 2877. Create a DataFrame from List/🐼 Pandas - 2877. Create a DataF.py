#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2877

import pandas as pd

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
      return pd.DataFrame(student_data, columns = ["student_id", "age"])

#!---------------------------------------------------------------------

#* Using rename function

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
      df = pd.DataFrame(student_data)
      df = df.rename(columns = {0 : "student_id", 1 : "age"})
      return df

#!---------------------------------------------------------------------

#* Modifying columns Attribute

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
      df = pd.DataFrame(student_data)
      df.columns = ["student_id", "age"]
      return df

#!---------------------------------------------------------------------

#* Using set_axis() Method

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
      df = pd.DataFrame(student_data)
      df = df.set_axis(["student_id", "age"], axis = 1)
      return df
