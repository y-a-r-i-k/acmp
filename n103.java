import java.util.Scanner;
import java.math.BigInteger;

public class n103 {
    public static void main(String[] args) {
        BigInteger a, b;
        
        Scanner in = new Scanner(System.in);
        a = in.nextBigInteger();
        b = in.nextBigInteger(); 

        System.out.println(a.add(b));

        in.close();
    }
}