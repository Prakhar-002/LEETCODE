//! https://github.com/Prakhar-002/LEETCODE

var maxDistance = function(position, m) {
      // sort the array first
      position.sort((a, b) => a - b);
      let n = position.length;
      // minimum possible dist for a ball is 1
      let low = 1;
      // maximum possible distance for 1 ball is 
      //! => (max value - min value) / (number of balls - 1);
      let high = (position[n - 1] - position[0]) / (m - 1);
      // unTill they swap each other
      while (low <= high) {
            // finding mid and 
            // check is we can place m balls with this maximum possible distance
            // cause wee have to minimize this distance so we'll apply binary search
            // with maximum possible distance we have can we dec it if we can we'll get our ans
            let mid = Math.floor((position[n - 1] - position[0]) / (m - 1));;
            if (canWePlace(position, mid, m)) {
                  // if we can't place with mid distance for 1 ball we'll inc our dict
                  low = mid + 1;
            } else {
                  // if we get our ans mean we could able to place m balls with mid distance btw them
                  // we'll check for sorter so dec high
                  high = mid - 1;
            }
      }
      // return high cause minimum will be at high at last
      return high;
};

var canWePlace = function(position, dist, balls){
      // we place one ball at 0 index so count is 1
      let cntBalls = 1;
      //  force is | x - y| so 2nd ball - 1st ball position => x and y are potion[i]
      // first ball position is at 0 and force will be position[0]
      let initialPos = position[0];
      for (let i = 0; i < position.length; i++) {
            if (position[i] - initialPos >= dist) {
                  // inc our ball count if we |x - y| is greater them our minimum possible distance  
                  cntBalls++;
                  // we will update our first ball position with 2nd ball position 
                  // and check for next possible place for next ball
                  initialPos = position[i];
            } 
            // anywhere we found then we can place m ball we'll return true
            if (cntBalls >= balls) {
                  return true;
            }
      }
      // else we'll return false
      return false;
}