#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2878

import pandas as pd

#* Using df.shape (Number of Rows and Columns) 

def getDataframeSize(players: pd.DataFrame) -> List[int]:
      # players.shape returns a tuple (rows, columns).
      # Converting this tuple to a list provides the required format.
      return list(players.shape)



#!-----------------------------------------------------------------

#* Using len(df) and len(df.columns) 

def getDataframeSize(players: pd.DataFrame) -> List[int]:
      # len(players) returns the number of rows in the DataFrame.
      # len(players.columns) returns the number of columns in the DataFrame.
      # The function returns a list containing both values.
      return [len(players), len(players.columns)]



#!-----------------------------------------------------------------

#* Using df.axes

def getDataframeSize(players: pd.DataFrame) -> List[int]:
      # axes[0] represents the row index, and size gives the total number of rows.
      # axes[1] represents the column index, and size gives the total number of columns.
      # The function returns a list containing the row count and column count.
      return [players.axes[0].size, players.axes[1].size]
