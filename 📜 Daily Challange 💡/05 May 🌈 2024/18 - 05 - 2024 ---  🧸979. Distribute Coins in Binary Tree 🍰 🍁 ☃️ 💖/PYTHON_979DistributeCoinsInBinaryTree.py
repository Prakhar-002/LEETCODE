class Solution:

    def distributeCoins(self, root: Optional[TreeNode]) -> int:
        self.steps = 0

        def countSteps(node):
            if not node:
                return 0

            left_coins = countSteps(node.left)
            right_coins = countSteps(node.right)

            self.steps += abs(left_coins) + abs(right_coins)

            return left_coins + right_coins + node.val - 1

        # calling the function
        countSteps(root)

        return self.steps
