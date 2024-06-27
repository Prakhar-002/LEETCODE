#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 1482 

class Solution:

      def isPossible(self, bloomDay, day, bouquets, flowers):
            possibleBouquets = 0
            count = 0

            for i in range(len(bloomDay)):
                  # If blooming day is less then our current day
                  if bloomDay[i] <= day:
                        #  IF we have adjacent flowers to make bouquets
                        count += 1
                  else:
                        # Count possible bouquets for adjacent flowers
                        possibleBouquets += count // flowers
                        # Make count 0 cause we got a day where flower not bloomed so adjacent is 0
                        count = 0

            # Count at last for possible bouquets       
            possibleBouquets += count // flowers
            return possibleBouquets >= bouquets

      
      def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
            # base case
            if m * k > len(bloomDay):
                  return -1

            # finding the low and high
            low = min(bloomDay)
            high = max(bloomDay)

            while low <= high :
                  # finding mid of low and high
                  mid = low + (high - low) // 2

                  # IF it's possible to make m bouquets for k flowers each 
                  if(self.is_possible(bloomDay, mid, m, k)):
                        # Then we'll dec the high to mid - 1
                        high = mid - 1

                  else:
                        # IF it's not then we'll inc our low to mid + 1
                        low = mid + 1

            # Low will be our lowest possible waiting day
            return low



#? class Solution:
#?     def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
#?         if m * k > len(bloomDay):
#?             return -1

#?         low = min(bloomDay)
#?         high = max(bloomDay)

#?         def is_possible(day):
#?             possibleBloom = 0
#?             count = 0

#?             for i in range(len(bloomDay)):
#?                 if bloomDay[i] <= day:
#?                     count += 1
#?                 else:
#?                     possibleBloom += count // k
#?                     count = 0

#?             possibleBloom += count // k
#?             return possibleBloom >= m

#?         while low <= high:
#?             mid = low + (high - low) // 2

#?             if is_possible(mid):
#?                 high = mid - 1

#?             else:
#?                 low = mid + 1

#?         return low
