#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2884

import pandas as pd

def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
      # This function doubles the values in the "salary" column.
      # It directly modifies the original DataFrame.
      employees["salary"] = employees["salary"] * 2
      return employees



#!---------------------------------------------------------------------------

#* Using .loc[] 

def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
      # loc[:, "salary"] selects the entire "salary" column.
      # The *= operator updates each value by multiplying it by 2.
      employees.loc[:, "salary"] *= 2
      return employees



#!---------------------------------------------------------------------------

#* Using assign() (Returns a New DataFrame)

def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
      # assign() creates a modified copy of the DataFrame.
      # It updates the "salary" column by multiplying each value by 2.
      # This does not modify the original DataFrame.
      return employees.assign(salary=employees["salary"] * 2)



#!---------------------------------------------------------------------------

#* Using eval()

def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
      # eval() evaluates the expression "salary * 2" on the DataFrame.
      # This modifies the "salary" column by doubling its values.
      employees["salary"] = employees.eval("salary * 2")
      return employees
