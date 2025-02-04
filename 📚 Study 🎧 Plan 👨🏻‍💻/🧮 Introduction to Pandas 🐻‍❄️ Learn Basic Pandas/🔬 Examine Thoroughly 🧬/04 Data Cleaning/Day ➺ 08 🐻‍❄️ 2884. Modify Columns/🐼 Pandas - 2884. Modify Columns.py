#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2884

import pandas as pd

def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
      employees["salary"] = employees["salary"] * 2
      return employees

#!---------------------------------------------------------------------------

#* Using .loc[] 

def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
      employees.loc[:, "salary"] *= 2
      return employees

#!---------------------------------------------------------------------------

#* Using assign() (Returns a New DataFrame)

def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
      return employees.assign(salary = employees["salary"] * 2)

#!---------------------------------------------------------------------------

#* Using eval()

def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
      employees["salary"] = employees.eval("salary * 2")
      return employees
