var filter = function (arr, fn) {
      // return arr.filter(fn);

      //  or

      let res = [];

      for (let i = 0; i < arr.length; i++) {
            if (fn(arr[i], i)) {
                  res.push(arr[i]);
            }
      }

      return res;
};