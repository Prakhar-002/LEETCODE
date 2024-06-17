class Solution:
      def paintWalls(self, cost: List[int], time: List[int]) -> int:
            n = len(cost)

            @cache 

            def dfs(i, walls):
                  # ? If remaining walls 0
                  if walls <= 0:
                        return 0
                  # ? If i out of bound return infinity
                  if i == n:
                        return math.inf
                  
                  #? If we paint one wall
                  paint = cost[i] + dfs(i + 1, walls - 1 - time[i])

                  #? If we skip to paint current wall
                  skip = dfs(i + 1, walls)

                  return min(paint, skip)
            
            return dfs(0, n)