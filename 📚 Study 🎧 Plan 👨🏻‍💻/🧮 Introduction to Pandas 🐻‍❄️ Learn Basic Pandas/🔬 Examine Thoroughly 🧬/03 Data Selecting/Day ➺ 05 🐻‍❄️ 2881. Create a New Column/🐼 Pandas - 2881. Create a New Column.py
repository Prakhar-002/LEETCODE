#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2881

import pandas as pd

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
      employees["bonus"] = employees["salary"] * 2
      return employees

#!-----------------------------------------------------------------------

#* Using assign() Method

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
      return employees.assign(bonus = employees["salary"] * 2)

#!-----------------------------------------------------------------------

#* Using insert() Method

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
      employees.insert(loc = len(employees.columns), column = "bonus", value = employees["salary"] * 2)
      return employees

#!-----------------------------------------------------------------------

#* Using eval() Method

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
      employees.eval('bonus = salary * 2', inplace = True)
      return employees

#!-----------------------------------------------------------------------

#* Using loc[] for Conditional Assignment

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
      employees.loc[:, 'bonus'] = employees['salary'] * 2 
      return employees
