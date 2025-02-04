#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2883

import pandas as pd

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
      return students.dropna(subset = ["name"])

#!-----------------------------------------------------

#* Using Boolean Indexing 

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
      return students[students["name"].notna()]

#!-----------------------------------------------------

#* Using .loc[] 

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
      return students.loc[students["name"].notna()]

#!-----------------------------------------------------

#* Using query() 

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
      return students.query("name == name")

#!-----------------------------------------------------

#* Using astype(str) with Boolean Indexing

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
      return students[students["name"].astype(str) != "nan"]
