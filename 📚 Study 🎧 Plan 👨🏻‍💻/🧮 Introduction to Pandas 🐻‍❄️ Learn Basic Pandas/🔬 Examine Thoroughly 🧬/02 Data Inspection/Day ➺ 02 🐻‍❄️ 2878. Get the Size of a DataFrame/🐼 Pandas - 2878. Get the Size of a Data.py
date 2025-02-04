#! https://github.com/Prakhar-002/LEETCODE

# Todo 🐼 QUESTION NUMBER 2878

import pandas as pd

#* Using df.shape (Number of Rows and Columns) 

def getDataframeSize(players: pd.DataFrame) -> List[int]:
      return list(players.shape)

#!-----------------------------------------------------------------

#* Using len(df) and len(df.columns) 

def getDataframeSize(players: pd.DataFrame) -> List[int]:
      return [len(players), len(players.columns)]

#!-----------------------------------------------------------------

#* Using df.axes

def getDataframeSize(players: pd.DataFrame) -> List[int]:
      return [players.axes[0].size, players.axes[1].size]
