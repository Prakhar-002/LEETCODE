# ! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 2285

#  ? Time complexity -> O(NLogN + E) // N is given E is number of edges

#  ? Space complexity -> O(N) // given 

class Solution:
      def maximumImportance(self, n: int, roads: List[List[int]]) -> int:
            # making array to count nodes of every edge
            # what ever times a city comes in our way that will be it's importance
            city_count = [0] * n

            # Roads is 2D array looks like a web of roads
            for road in roads:
                  # Taking one road extract both cities connecting by that road 
                  cityOne, cityTwo = road
                  # counting the city to have it's road importance
                  city_count[cityOne] += 1
                  city_count[cityTwo] += 1

            # city label will start from 1 to N
            cityLabel = 1
            # importance will be 0 in starting
            importance = 0

            # sort our array to have arrange them by importance order
            # city label will be given by number of city occur in our web of roads
            for city in sorted(city_count):
                  # as given importance of city will be based on it's label
                  importance += cityLabel * city
                  # assigning label according the number of occurrence of that city 
                  cityLabel += 1

            return importance