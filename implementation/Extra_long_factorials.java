import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the extraLongFactorials function below.
    static void extraLongFactorials(int n) {
        BigInteger x=new BigInteger("1");
        BigInteger y=new BigInteger("1");
        int a=1;
        for(BigInteger i=new BigInteger("1");a<=n;i=i.add(y)){
            x=x.multiply(i);
            a++;
        }
        System.out.println(x);

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        extraLongFactorials(n);

        scanner.close();
    }
}
