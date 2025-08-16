# 332. Reconstruct Itinerary

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/reconstruct-itinerary/description/"><strong>➥ 🫀 332 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a list of airline tickets, `tickets`, where `tickets[i] = [fromi, toi]` represents a flight from airport `fromi` to airport `toi`. You must reconstruct and return the itinerary in the correct order.

### Essential Information:

- All of the tickets belong to a single person who always starts their journey from "JFK" airport. Therefore, your itinerary must begin with "JFK".
- If there are multiple valid itineraries possible, you are required to return the itinerary that has the smallest *lexical order* when read as a single string (i.e., the one that comes earliest in alphabetical order).
- You are assured that the provided tickets will always form at least one valid itinerary.
- Each ticket must be used exactly once in constructing the itinerary.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/909e9307-db92-4207-b914-47f7cc0e4505" width="" height=""/>

  ### 📥 `Input`  ➤ tickets = [["MUC","LHR"],["JFK","MUC"],["SFO","SJC"],["LHR","SFO"]]

  ### 📤 `Output`  ➤ ["JFK","MUC","LHR","SFO","SJC"]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/69c49522-08e4-487f-9a27-fb68ef8b945a" width="" height=""/>

  ### 📥 `Input` ➤ tickets = [["JFK","SFO"],["JFK","ATL"],["SFO","ATL"],["ATL","JFK"],["ATL","SFO"]]

  ### 📤 `Output`  ➤ ["JFK","ATL","JFK","SFO","ATL","SFO"]

  ### 🔦 `Explanation` ➤ Another possible reconstruction is ["JFK","SFO","ATL","JFK","ATL","SFO"] but it is larger in lexical order.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= tickets.length <= 300 </br>

🔹 tickets[i].length == 2 </br>

🔹 fromi.length == 3 </br>

🔹 toi.length == 3 </br>

🔹 fromi and toi consist of uppercase English letters. </br>

🔹 fromi != toi </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Depth-First Search**  </br>
🔸 **Graph**  </br>
🔸 **Eulerian Circuit**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2095%20%F0%9F%A5%A1%20332.%20Reconstruct%20Itinerary%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20332.%20Reconstruct%20Itinerary.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2095%20%F0%9F%A5%A1%20332.%20Reconstruct%20Itinerary%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20332.%20Reconstruct%20Itinerary.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2095%20%F0%9F%A5%A1%20332.%20Reconstruct%20Itinerary%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20332.%20Reconstruct%20Itinerary.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2095%20%F0%9F%A5%A1%20332.%20Reconstruct%20Itinerary%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20332.%20Reconstruct%20Itinerary.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/3ad4bce0-4dd5-41e5-9157-888265a77e10" width = "700px" height="462px" />

</h1>
