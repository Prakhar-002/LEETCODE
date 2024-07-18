#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 1530

# ? ⌚ Time complexity -> O(n^2) 👉 Total nodes

# ? 🧺 Space complexity -> O(n) 👉 Total nodes

class Solution:

      # concept => take the distance of leaf node from every node in an array
      # then check for the all leaf possible

      count = 0

      def pairFinder(self, root, distance) -> list[int]:
            # if we found null return 0 distance
            if not root:
                  return [0]

            # for the leaf node return 1 distance
            if not root.left and not root.right:
                  return [1]

            # find the all leaf that exist in left side
            left = self.pairFinder(root.left, distance)
            # find the all leaf that exist in right side
            right = self.pairFinder(root.right, distance)

            # processing check every possible pair
            self.count += sum(
                  1 for x in left for y in right if x > 0 and y > 0 and x + y <= distance
            )

            # now add the all dist from left and right and return them
            # if distance is greater than 0 and less than distance

            return [x + 1 for x in left if 0 < x < distance] + [
                  y + 1 for y in right if 0 < y < distance
            ]

      def countPairs(self, root: Optional[TreeNode], distance: int) -> int:
            # find the helper function
            self.pairFinder(root, distance)
            return self.count

