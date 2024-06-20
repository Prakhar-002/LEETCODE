class Solution:
      def canWePlace(self, position, dist, balls):
            # we place one ball at 0 index so count is 1
            cntBall = 1
            # force is | x - y| so 2nd ball - 1st ball position => x and y are potion[i]
            # first ball position is at 0 and force will be position[0]
            initialPos = position[0]

            for i in range(len(position)):
                  if position[i] - initialPos >= dist:
                        # inc our ball count if we |x - y| is greater them our minimum possible distance  
                        cntBall += 1
                        # we will update our first ball position with 2nd ball position 
                        # and check for next possible place for next ball
                        initialPos = position[i];
                  # anywhere we found then we can place m ball we'll return true
                  if cntBall >= balls:
                        return True

            #  else we'll return false
            return False

      def maxDistance(self, position: List[int], m: int) -> int:
            #  sort the array first
            position.sort()
            n = len(position)

            #  minimum possible dist for a ball is 1
            low = 1
            # maximum possible distance for 1 ball is
            high = (position[n - 1] - position[0]) // (m - 1)

            # unTill they swap each other
            while low <= high:
                  # finding mid and 
                  # check is we can place m balls with this maximum possible distance
                  # cause wee have to minimize this distance so we'll apply binary search
                  # with maximum possible distance we have can we dec it if we can we'll get our ans
                  mid = low + (high - low) // 2
                  if(self.canWePlace(position, mid, m)):
                        # if we can't place with mid distance for 1 ball we'll inc our dict
                        low = mid + 1
                  else :
                        # if we get our ans mean we could able to place m balls with mid distance btw them
                        # we'll check for sorter so dec high
                        high = mid - 1

            # return high cause minimum will be at high at last
            return high