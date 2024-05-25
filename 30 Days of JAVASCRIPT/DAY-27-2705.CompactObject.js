var compactObject = function (obj) {
      if (obj === null) {
            return obj;
      }

      if (typeof obj !== "object") {
            return obj
      }

      if (Array.isArray(obj)) {
            return obj.filter(Boolean).map(compactObject)
      }

      let compacted = {}

      for (let key in obj) {
            let value = compactObject(obj[key])
            if (value) {
                  compacted[key] = value
            }
      }

      return compacted

};