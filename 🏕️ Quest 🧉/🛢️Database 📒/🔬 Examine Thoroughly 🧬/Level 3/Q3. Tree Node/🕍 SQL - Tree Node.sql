-- Select the id from the Tree table
SELECT id,
      -- Determine the type of each node using CASE
      CASE
            -- If p_id (parent id) is NULL, node is the root
            WHEN p_id IS NULL THEN 'Root'
            -- If id appears as a parent id in the Tree, node is an inner node
            WHEN id IN (SELECT p_id FROM Tree) THEN 'Inner'
            -- Otherwise, it's a leaf node (no children)
            ELSE 'Leaf'
      END AS type
FROM Tree;
