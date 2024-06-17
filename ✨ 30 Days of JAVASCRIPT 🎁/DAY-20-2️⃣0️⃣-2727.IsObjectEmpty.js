var isEmpty = function (obj) {
      if (Array.isArray(obj)) {
            return obj.length === 0;
      } else {
            // Object.keys(obj) --> gives an array of all keys in object
            return Object.keys(obj).length === 0;
      }
};