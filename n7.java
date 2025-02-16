import java.util.Scanner;
import java.math.BigInteger;

public class n7 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        
        BigInteger a, b, c;
        a = in.nextBigInteger();
        b = in.nextBigInteger();
        c = in.nextBigInteger();

        System.out.println(BigIntMax(a, BigIntMax(b, c)));

        in.close();
    }

    public static BigInteger BigIntMax(BigInteger a, BigInteger b) {
        int isBigger = a.compareTo(b);
        if (isBigger == 1) {
            return a;
        } else if (isBigger == -1) {
            return b;
        } else {
            return a;
        }
    }
}
