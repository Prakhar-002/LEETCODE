var relativeSortArray = function(arr1, arr2) {
      let arr2Set = new Set(arr2);
      
      let arr1HashMap = new Map();

      let endElements = []

      for(const n of arr1){
            if(!arr2Set.has(n)){
                  endElements.push(n);
            }

            arr1HashMap.set(n, (arr1HashMap.get(n) || 0) + 1);
      } 

      endElements.sort((a, b) => a - b)

      let res = []

      for(const n of arr2){
            for (let i = 0; i < arr1HashMap.get(n); i++) {
                  res.push(n)
            }
      }

      return res.concat(endElements);

};