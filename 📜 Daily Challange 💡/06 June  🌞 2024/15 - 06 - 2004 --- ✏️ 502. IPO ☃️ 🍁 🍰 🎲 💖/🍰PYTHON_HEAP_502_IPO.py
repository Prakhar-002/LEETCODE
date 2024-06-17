import heapq

class Solution:
      def findMaximizedCapital(self, k: int, w: int, profits: List[int], capital: List[int]) -> int:
            max_profit = [] # only project we can afford
            min_capital = [ (c, p) for c, p in zip(capital, profits)] # making array of value that would give profit
            heapq.heapify(min_capital) # making min_capital to a heap
            # this will sort based on capital 


            for i in range(k): # we can only iterate k times  

                  # while our min_capital is not empty and min capital is less then w
                  while min_capital and min_capital[0][0] <= w :
                        # we take the min value from our heap
                        c, p = heapq.heappop(min_capital) # give a (c, p) Ex. (1, 2)
                        # Now we take the profit and add to our max_profit heap 
                        # cause it's capital is less than our wealth (w) se we can add the profit
                        heapq.heappush(max_profit, -1 * p) # we add -p cause we have t make it maxHeap

                  # if max_profit is empty means we don't have k iteration
                  if not max_profit:
                        break

                  # we'll add profit to our wealth(w)
                  # we multiply by -1 cause we have to add it and we stored our profit in -ve
                  w += -1 * heapq.heappop(max_profit)

            return w