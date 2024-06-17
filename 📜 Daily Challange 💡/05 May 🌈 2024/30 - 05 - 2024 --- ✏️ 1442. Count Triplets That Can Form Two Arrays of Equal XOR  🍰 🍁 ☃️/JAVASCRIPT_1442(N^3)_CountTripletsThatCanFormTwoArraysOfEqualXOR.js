var countTriplets = function (arr) {
      let triplets = 0

      for (let i = 0; i < arr.length - 1; i++) {
            let a = 0;
            for (let j = i + 1; j < arr.length; j++) {
                  a ^= arr[j - 1];
                  let b = 0;
                  for (let k = j; k < arr.length; k++) {
                        b ^= arr[k];

                        if (a == b) {
                              triplets++;
                        }
                  }
            }
      }

      return triplets;
};   