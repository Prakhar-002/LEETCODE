var join = function (arr1, arr2) {
      let resObj = {};
      for (let obj of arr1) {
            resObj[obj.id] = obj;
      }

      for (let obj of arr2) {
            resObj[obj.id] = resObj[obj.id] ? { ...resObj[obj.id], ...obj } : obj;
      }

      return Object.values(resObj);
};