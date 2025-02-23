import java.util.Scanner ;
import java.util.Random ;

public class PassGen {
    public static void main(String[] args) {
        String chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!#$()" ;
        Scanner scan = new Scanner(System.in) ;
        Random rand = new Random() ;

        System.out.print("Length of password: ") ;
        int passLen = scan.nextInt() ;
        System.out.print("How many passwords: ") ;
        int passNum = scan.nextInt() ;

        for(int k = 0 ; k < passNum ; k++) {
            String passwd = "" ;
            for (int i = 0; i < passLen; i++) {
                int j = rand.nextInt(0, chars.length());
                passwd += chars.charAt(j);
            }

            System.out.println("Generated Password: " + passwd);
        }
    }
}
