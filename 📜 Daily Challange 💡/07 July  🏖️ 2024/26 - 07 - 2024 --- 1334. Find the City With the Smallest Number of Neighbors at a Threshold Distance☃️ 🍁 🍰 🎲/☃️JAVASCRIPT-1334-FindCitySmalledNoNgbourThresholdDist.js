//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1334

//? ⌚ Time complexity -> O(n^2 log n) 👉🏻 Dijkstra algorithm

//? 🧺 Space complexity -> O(n) 👉🏻 Building adjacency list 

var findTheCity = function (n, edges, distanceThreshold) {
      // Create adjacency list for easy lookup of connected cities and distances
      const adjacency = new Map();

      for (const [city_one, city_two, dist] of edges) {
            if (!adjacency.has(city_one)) adjacency.set(city_one, []);
            if (!adjacency.has(city_two)) adjacency.set(city_two, []);
            adjacency.get(city_one).push([city_two, dist]);
            adjacency.get(city_two).push([city_one, dist]);
      }

      // Dijkstra algorithm to find the shortest paths from a given city to all other cities
      const dijkstra = (city) => {
            const distances = Array(n).fill(Infinity);
            distances[city] = 0;
            const heap = [[0, city]];

            while (heap.length > 0) {
                  // Sort heap to get the city with the minimum distance
                  heap.sort((a, b) => a[0] - b[0]);
                  const [cityDist, node] = heap.shift();

                  if (cityDist > distances[node]) continue;

                  for (const [nei, dist] of (adjacency.get(node) || [])) {
                        const nei_dist = dist + cityDist;
                        if (nei_dist < distances[nei]) {
                              distances[nei] = nei_dist;
                              heap.push([nei_dist, nei]);
                        }
                  }
            }

            // Return the number of cities that can be reached within distanceThreshold except the source city
            return distances.filter(d => d <= distanceThreshold).length - 1;
      };

      // Track the city ID with the minimum number of reachable neighbors and the count of these neighbors
      let city = -1, min_neighbor = n;

      // Call Dijkstra algorithm for every city
      for (let curCity = 0; curCity < n; curCity++) {
            const neighbor = dijkstra(curCity);
            if (neighbor <= min_neighbor) {
                  city = curCity;
                  min_neighbor = neighbor;
            }
      }

      // Return the city that can reach the fewest number of cities within the distanceThreshold
      return city;
};