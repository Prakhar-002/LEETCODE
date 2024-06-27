let steps;

var countSteps = function (root) {
      if (!root) {
            return 0; 
      }

      let leftCoins = countSteps(root.left);
      let rightCoins = countSteps(root.right);

      steps += Math.abs(leftCoins) + Math.abs(rightCoins);

      return (root.val - 1) + leftCoins + rightCoins;
}

var distributeCoins = function (root) {
      steps = 0;
      countSteps(root)
      return steps;
};