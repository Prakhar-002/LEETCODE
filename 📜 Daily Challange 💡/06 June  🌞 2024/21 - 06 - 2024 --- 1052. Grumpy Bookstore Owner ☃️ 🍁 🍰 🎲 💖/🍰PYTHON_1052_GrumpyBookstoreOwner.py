class Solution:

      def satisfiedCustomers(self, customers, grumpy, start, end, initialSatisfied):
            # calculate more satisfied customer if owner use themselves power
            # for a period of time which is start to end 
            satisfied = initialSatisfied;

            for i in range(start , end + 1):
                  # we'll only add those part in which their power used
                  # means if in our window there was only 0 then on applying power there will be no change
                  # and if there was 1 then it will make changes to satisfied customers
                  if grumpy[i]:
                        satisfied += customers[i]

            return satisfied

      def maxSatisfied(self, customers: List[int], grumpy: List[int], minutes: int) -> int:
            # sliding window will start from 0 to minutes - 1
            startWindow = 0
            endWindow = minutes - 1
            # max satisfied
            maxSatisfied = 0

            # counting initial satisfied customer when our bookstore owner was not grumpy
            initialSatisfied = 0

            for i in range(len(customers)):
                  if not grumpy[i]:
                        initialSatisfied += customers[i]

            # check for every window we can have with length minutes
            while endWindow < len(customers):
                  maxSatisfied = max(maxSatisfied, self.satisfiedCustomers(customers, grumpy, startWindow, endWindow, initialSatisfied))
                  startWindow += 1
                  endWindow += 1

            return maxSatisfied