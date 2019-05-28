import java.io.*;
import java.math.*;
import java.util.*;


class stringToInt{
    public static void main(String args[]){
       String s = "567";
       int res = stringToInteger(s);
       System.out.println(res);
    }

    static int stringToInteger(String s) {
        int res = 0;
        int len = s.length();
        for (int i = 0; i < len; i++) {
            res += Math.pow(10, i) *  (s.charAt(len-i-1) - '0' );
        }
        return res;
    }
}