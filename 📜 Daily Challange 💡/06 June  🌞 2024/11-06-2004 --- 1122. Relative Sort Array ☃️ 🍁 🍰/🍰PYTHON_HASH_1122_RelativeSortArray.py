class Solution:
      def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
            arr_2_set = set(arr2)
            arr_1_set = defaultdict(int)

            end_elements = []

            for n in arr1 :
                  if n not in arr_2_set:
                        end_elements.append(n)

                  arr_1_set[n] += 1

            end_elements.sort()

            res = []

            for n in arr2 :
                  for _ in range(arr_1_set[n]):
                        res.append(n)


            return res + end_elements 