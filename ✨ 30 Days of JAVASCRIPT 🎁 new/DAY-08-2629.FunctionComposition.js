var compose = function (functions) {

      return function (x) {
            for (const fn of functions.reverse()) {
                  x = fn(x);
            }
            return x;
      }
};