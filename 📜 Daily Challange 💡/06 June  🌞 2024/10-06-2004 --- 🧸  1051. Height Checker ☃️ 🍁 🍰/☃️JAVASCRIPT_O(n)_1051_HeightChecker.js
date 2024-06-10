var heightChecker = function(heights) {
      let heightFreq = new Array(101).fill(0);

      for(const h of heights){
            heightFreq[h]++;
      }

      let expected = []

      for (let height = 0; height < 101; height++) {
            let children = heightFreq[height];

            while (children-- > 0) {
                  expected.push(height)
            }
      }

      let count = 0

      for (let i = 0; i < heights.length; i++) {
            if (heights[i] !== expected[i]) {
                  count++;
            }
      }

      return count;
};