--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1907 

SELECT "Low Salary" AS category,  -- Selects a constant value "Low Salary" as the category
      SUM(IF(income < 20000, 1, 0)) AS accounts_count  -- Sums the count of accounts where income is less than 20,000
FROM Accounts  -- From the Accounts table

UNION  -- Combines the result sets from the three queries while removing duplicates

SELECT "Average Salary" AS category,  -- Selects a constant value "Average Salary" as the category
      SUM(IF(income BETWEEN 20000 AND 50000, 1, 0)) AS accounts_count  -- Sums the count of accounts where income is between 20,000 and 50,000
FROM Accounts  -- From the Accounts table

UNION  -- Combines the result sets from the three queries while removing duplicates

SELECT "High Salary" AS category,  -- Selects a constant value "High Salary" as the category
      SUM(IF(income > 50000, 1, 0)) AS accounts_count  -- Sums the count of accounts where income is greater than 50,000
FROM Accounts  -- From the Accounts table
