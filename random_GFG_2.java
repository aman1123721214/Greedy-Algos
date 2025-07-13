import java.util.*;

class Solution {
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    static String largestNumber(int n, int sum) {
        // add your code here
        if(sum > 9*n) return "-1";
        StringBuilder ans = new StringBuilder();
        for(int i = 0; i<n; i++){
            int digit = Math.min(9, sum);
            ans.append(digit);

            sum-=digit;
        }
        return ans.toString();
    }
}

class random_GFG_2{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int sum = sc.nextInt();

        Solution sol = new Solution();

        System.out.println(sol.largestNumber(n,sum));
    }
}