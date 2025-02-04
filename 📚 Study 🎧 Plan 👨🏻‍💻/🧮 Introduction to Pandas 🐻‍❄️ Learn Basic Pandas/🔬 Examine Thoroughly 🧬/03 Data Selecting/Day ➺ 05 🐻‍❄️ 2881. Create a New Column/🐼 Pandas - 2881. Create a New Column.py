#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2881

import pandas as pd

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
      # This function adds a new column "bonus" to the DataFrame,
      # where the bonus is calculated as twice the employee's salary.
      employees["bonus"] = employees["salary"] * 2
      return employees

#!-----------------------------------------------------------------------

#* Using assign() Method

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
      # assign() creates a new column without modifying the original DataFrame.
      # It adds a "bonus" column where each value is twice the "salary".
      return employees.assign(bonus=employees["salary"] * 2)

#!-----------------------------------------------------------------------

#* Using insert() Method

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
      # insert() adds a new column at a specified position.
      # Here, it appends the "bonus" column at the last position, 
      # with values being twice the "salary".
      employees.insert(loc=len(employees.columns), column="bonus", value=employees["salary"] * 2)
      return employees

#!-----------------------------------------------------------------------

#* Using eval() Method

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
      # eval() evaluates expressions on DataFrame columns.
      # Here, it creates a "bonus" column as twice the "salary".
      # inplace=True modifies the DataFrame directly.
      employees.eval('bonus = salary * 2', inplace=True)
      return employees

#!-----------------------------------------------------------------------

#* Using loc[] for Conditional Assignment

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
      # loc[:, 'bonus'] assigns values to the entire "bonus" column.
      # It sets each value as twice the corresponding "salary".
      employees.loc[:, 'bonus'] = employees['salary'] * 2
      return employees
