-- Select specific columns to display from the result
SELECT firstName, lastName, city, state
-- Choose the primary table to start the join
FROM Person
-- Perform a LEFT JOIN to include all records from the Person table
-- even if there is no matching record in the Address table
LEFT JOIN Address
-- Define the condition that links both tables based on PersonId
ON Person.PersonId = Address.PersonId;