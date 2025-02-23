import java.util.Scanner;
import java.math.BigInteger;

public class n143 {

    public static void main(String agrs[]) {
            
        Scanner in = new Scanner(System.in);
    
        BigInteger a = in.nextBigInteger();
        BigInteger b = in.nextBigInteger();

        System.out.println(a.subtract(b));

        in.close();
    }
}
