# Q3. Tree Node

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/tree-node/description/?envType=problem-list-v2&envId=db-db3-grouping-aggregation"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Table: Tree

| Column Name | Type |
|-------------|------|
| id          | int  |
| p_id        | int  |

id is the column with unique values for this table.
Each row of this table contains information about the id of a node and the id of its parent node in a tree.
The given structure is always a valid tree.

</br>

### Each node in the tree can be one of three types:

- "Leaf": if the node is a leaf node.
- "Root": if the node is the root of the tree.
- "Inner": If the node is neither a leaf node nor a root node.

### Write a solution to report the type of each node in the tree.

### Return the result table in any order.

### The result format is in the following example.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src ="https://github.com/user-attachments/assets/84532121-44dd-4148-a798-9e45337bc2d2"  />

  ### 📥 `Input`  ➤ Tree table:

| id | p_id |
|----+------|
| 1  | null |
| 2  | 1    |
| 3  | 1    |
| 4  | 2    |
| 5  | 2    |

</br>

  ### 📤 `Output`  ➤

| id | type  |
|----+-------|
| 1  | Root  |
| 2  | Inner |
| 3  | Leaf  |
| 4  | Leaf  |
| 5  | Leaf  |

</br>

  ### 🔦 `Explanation`  ➤
  ### Node 1 is the root node because its parent node is null and it has child nodes 2 and 3.
  ### Node 2 is an inner node because it has parent node 1 and child node 4 and 5.
  ### Nodes 3, 4, and 5 are leaf nodes because they have parent nodes and they do not have child nodes.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src ="https://github.com/user-attachments/assets/5e1104af-3261-47c3-80c3-dfe6ca542699"  />

  ### 📥 `Input`  ➤ Tree table:

| id | p_id |
|----+------|
| 1  | null |

</br>

  ### 📤 `Output`  ➤

| id | type  |
|----+-------|
| 1  | Root  |

</br>

  ### 🔦 `Explanation`  ➤
  ### If there is only one node on the tree, you only need to output its root attributes.

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Database** </br>

</br>

# SQL 🕍 ˋ°•*⁀➷

```sql

SELECT id,
  CASE
    WHEN p_id IS NULL THEN 'Root'
    WHEN id IN (SELECT p_id FROM Tree) THEN 'Inner'
    ELSE 'Leaf'
    END AS type
FROM Tree
```

</br>

# Detail Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![MySQL Badge](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=fff&style=for-the-badge)  | [SQL 🕍](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%9B%A2%EF%B8%8FDatabase%20%F0%9F%93%92/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%203/Q3.%20Tree%20Node/%F0%9F%95%8D%20SQL%20-%20Tree%20Node.sql) |