import java.util.*;
public class Solution
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int i = 0 ;i < T ;i++)
        {
            int V = sc.nextInt();
            int D = sc.nextInt();
            double c = (double)(1.0/2.0 * Math.toDegrees(Math.asin(9.8*D / (V*V))));
            System.out.println("Case #"+(i+1)+String.format(": %.7f" , c));
        }
    }
}