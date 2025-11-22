-- Select the 'class' column from the Courses table
SELECT class
FROM Courses
-- Group the results by each unique class
GROUP BY class
-- Filter groups to include only those classes where the count exceeds 4
HAVING count(class) > 4;
