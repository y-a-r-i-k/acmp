import java.util.Scanner;
import java.math.BigInteger;

public class n363 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        BigInteger n = in.nextBigInteger();
        BigInteger m = in.nextBigInteger();

        System.out.println(n.multiply(m));

        in.close();
    }    
}
