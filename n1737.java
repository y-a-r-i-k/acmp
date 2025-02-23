import java.util.Scanner;
import java.math.BigInteger;

public class n1737 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String s = in.nextLine();
        int len = s.length();

        BigInteger res = BigInteger.valueOf(1);
        for (int i = 1; i <= len; ++i) {
            res = res.multiply(BigInteger.valueOf(i));
        }

        System.out.println(res);

        in.close();
    }    
}
