import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class bigint {
    public static void main(String args[]) {
        Scanner cin = new Scanner(System.in);
//Java大數運算宣告BigInteger
    //首先宣告plus代表做加法運算
        BigInteger plus = BigInteger.valueOf(0);
    //首先宣告minus代表做減法運算
        BigInteger minus = BigInteger.valueOf(0);
        while ( cin.hasNext() ) {
    //接下來讀入一整行字串
            String str = cin.next();
        //宣告num代表讀入進來的一整行數字
        //然後把str丟到BigInteger num裡面
            BigInteger num = new BigInteger(str);
            if ( str.equals("0") ) break;
            else {
                plus = plus.add(num);
                minus = minus.subtract(num);
            }
        }
        System.out.print("The plus sum is " + plus + "\n");
        System.out.print("The minus sum is " + minus + "\n");
    }
}