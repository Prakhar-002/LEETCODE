var pow = function (x, n) {
      if (n == 0) {
            return 1;
      }

      if (x == 0) {
            return 0;
      }

      var res = pow(x, Math.floor(n / 2));

      return n % 2 === 0 ? res * res : res * res * x;
};


var myPow = function (x, n) {

      let res = pow(x, Math.abs(n));

      return n > 0 ? res : 1 / res;
};

