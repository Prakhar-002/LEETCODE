--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 610

SELECT x, y, z,  -- Selects the x, y, and z columns from the Triangle table
      CASE WHEN  -- Starts a conditional case expression
            x + y > z  -- Checks if the sum of x and y is greater than z
            AND 
            y + z > x  -- Checks if the sum of y and z is greater than x
            AND 
            z + x > y  -- Checks if the sum of z and x is greater than y
      THEN 'Yes'  -- If all the conditions are true, then the triangle is valid (output 'Yes')
      ELSE 'No'  -- If any condition is false, then the triangle is invalid (output 'No')
      END AS triangle  -- Assigns the result of the CASE expression to the column 'triangle'
FROM Triangle  -- From the Triangle table
