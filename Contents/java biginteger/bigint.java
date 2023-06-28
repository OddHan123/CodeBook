import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class z {
    public static void main(String args[]) {
        Scanner cin = new Scanner(System.in);
//Java大數資料型態: BigInteger

        BigInteger num = BigInteger.valueOf(1);
        BigInteger btwo = new BigInteger("2");
        while (cin.hasNext()){
            BigInteger a = BigInteger.valueOf(0);
            BigInteger b = BigInteger.valueOf(0);

            //讀入一整行字串
            String str = cin.next();

            //-1停止輸入
            if (str.equals("-1")) break;

            num = new BigInteger(str);
            //a += num
            a = a.add(num);

            //b -= num
            b = b.subtract(num);

        System.out.print("a+num is " + a + "\n");
        System.out.print("b-num is " + b + "\n");
//乘2
        System.out.printf("%s*2 = %s\n", num, num.multiply(btwo));
//除2
        System.out.printf("%s/2 = %s\n\n", num, num.divide(btwo));
        }
//2的100次方
        System.out.printf("2^100 = %s\n", btwo.pow(100));
    }
}