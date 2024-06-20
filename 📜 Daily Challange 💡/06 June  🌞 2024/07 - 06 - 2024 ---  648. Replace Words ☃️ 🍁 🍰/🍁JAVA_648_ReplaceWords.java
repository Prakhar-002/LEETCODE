import java.util.*;

class Solution {

      public static class Node {
            Node child[] = new Node[26];
            String str;
      }

      public static void insert(Node root, String s){
            for (int i = 0; i < s.length(); i++) {
                  char ch = s.charAt(i);
                  if (root.child[ch - 'a'] == null) {
                        root.child[ch - 'a'] = new Node();
                  } 

                  root = root.child[ch - 'a'];
                  if (root.str != null) {
                        return;
                  }
            }

            root.str = s;
      }

      public static String searchPrefix(Node root, String str){

            for (int i = 0; i < str.length(); i++) {
                  char ch = str.charAt(i);

                  if (root.child[ch - 'a'] == null) {
                        return null;
                  }

                  root = root.child[ch - 'a'];
                  if (root.str != null) {
                        return root.str;
                  }
            }

            return null;
      }

      public String replaceWords(List<String> dictionary, String sentence) {
            Node root = new Node();

            for(String s : dictionary){
                  insert(root, s);
            }

            StringBuilder ans = new StringBuilder();

            for (String word : sentence.split(" ")) {

                  String prefix = searchPrefix(root, word);
                  if (prefix != null) {
                        ans.append(prefix);
                  } else {
                        ans.append(word);
                  }

                  ans.append(" ");
            }

            ans.deleteCharAt(ans.length() - 1);

            return ans.toString();
      }
}