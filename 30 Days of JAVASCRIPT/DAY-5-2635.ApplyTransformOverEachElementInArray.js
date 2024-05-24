var map = function (arr, fn) {
      // return arr.filter(fn);
      let res = []
      for (let i = 0; i < arr.length; i++) {
            res.push(fn(arr[i], i))
      }
      return res;
};