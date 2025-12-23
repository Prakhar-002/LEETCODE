//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.5 Q1

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

var canWinNim = function (n) {
      // In the Nim game:
      // - Two players take turns removing 1, 2, or 3 stones.
      // - The player who removes the last stone wins.
      // - Both players play optimally.
      //
      // Key observation:
      // - If n % 4 == 0, the current player is in a losing position:
      //   No matter how many stones (1, 2, or 3) they remove,
      //   the opponent can always respond to leave another multiple of 4.
      // - If n % 4 != 0, the current player can always remove (n % 4) stones
      //   to leave a multiple of 4 for the opponent, putting them in a losing position.
      //
      // Therefore, the first player can win if and only if n is not divisible by 4.
      return n % 4 !== 0;
};
