--! https://github.com/Prakhar-002/LEETCODE

--Todo 💎 QUESTION NUMBER 1148

SELECT DISTINCT author_id as id  -- Selects distinct author_id and renames it as 'id'
FROM Views  -- From the Views table
WHERE author_id = viewer_id  -- Filters for rows where author_id is equal to viewer_id
ORDER BY author_id  -- Orders the results by author_id
