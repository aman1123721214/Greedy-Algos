import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashSet;

class Solution{
    static int isPossible(String S){
        // code here
        HashSet<String> st = new HashSet<>();
        StringBuilder str = new StringBuilder();

        for(char ch: S.toCharArray()){
            str.append(ch);
            if(!st.contains(str.toString())){
                st.add(str.toString());
                str.setLength(0);
            }
            if(st.size() == 4) return 1;
        }return 0;
    }
}
class random_GFG_9_Split_the_string{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();

        Solution sol = new Solution();
        System.out.print(sol.isPossible(str));
    }
}