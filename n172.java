import java.util.Scanner;
import java.math.BigInteger;

public class n172 {
    public static void main(String args[]) {
        
        Scanner in = new Scanner(System.in);

        BigInteger a = in.nextBigInteger();
        BigInteger b = in.nextBigInteger();

        BigInteger res = a.mod(b);

        System.out.println(res);

        in.close();
    }    
}
