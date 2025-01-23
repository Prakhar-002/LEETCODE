--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 626

SELECT  
      CASE  -- Starts the CASE expression to conditionally modify the id
            WHEN id = (SELECT MAX(id) FROM Seat) AND id % 2 = 1  -- Checks if the id is the maximum and odd
            THEN id  -- If true, returns the id as is
            WHEN id % 2 = 1  -- Checks if the id is odd
            THEN id + 1  -- If true, returns the id plus 1
            ELSE id - 1  -- If neither condition is true, returns the id minus 1
      END AS id,  -- Renames the result of the CASE expression as 'id'
      student  -- Selects the student from the Seat table
FROM Seat  -- From the Seat table
ORDER BY id  -- Orders the results by the modified id in ascending order
