#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3100

# ? ⌚ Time complexity ➺ O(sqrt(n)) 👉🏻  n = len(numBottles)

# ? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def maxBottlesDrunk(self, numBottles: int, numExchange: int) -> int:
            # Initialize total bottles drunk with the initial full bottles
            ans = numBottles

            # Track how many empty bottles are currently available after drinking
            empty = numBottles

            # While there are enough empty bottles to perform an exchange
            while empty >= numExchange:
                  # Exchange 'numExchange' empties for 1 full bottle and drink it now
                  # This increases the total drunk count by 1
                  ans += 1

                  # Net effect on empties:
                  # - Spend 'numExchange' empty bottles to get 1 full bottle
                  # - Drink that bottle and gain 1 new empty
                  # => empty = empty - numExchange + 1  ==  empty - (numExchange - 1)
                  empty -= numExchange - 1

                  # The exchange cost increases by 1 after each exchange
                  numExchange += 1

            # Return the total number of bottles drunk
            return ans
