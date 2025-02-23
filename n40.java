import java.util.Scanner;
import java.math.BigInteger;

public class n40 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        
        int exp = in.nextInt();
        BigInteger base = new BigInteger("2");
        
        BigInteger result = base.pow(exp);
        System.out.println(result);
        

        in.close();
    }
}
