import java.util.*;

class newTest {
    public static void main(String args[]){
        String str1 = "2-4A0r7-4kyyyyyy";
        LicenseKey(str1,4);
    }
	public static String Key(String S, int K){
		S = S.replaceAll("-", "").toUpperCase();
		StringBuilder strB = new StringBuilder(S);
        
        for(int i = strB.length() - K ;i>0;i = i-K){
            strB.insert(i, '-');
        }

        System.out.println(strB);
		
		return strB.toString();
	}
}