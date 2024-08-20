import java.util.* ;

public class MainCalc {
    public static void main(String [] args) {
        String calcType , a ;
        double b , c ;

        System.out.println("Which calculator do you need?") ;
        System.out.print("[Bas]ic, [Pyt]agorean: ") ;
        Scanner input = new Scanner(System.in) ;
        calcType = input.nextLine() ;

        Scanner inpu = new Scanner(System.in) ;
        System.out.print("1st Value: ") ;
        b = inpu.nextDouble() ;
        Scanner inp = new Scanner(System.in) ;
        System.out.print("2nd Value: ") ;
        c = inp.nextDouble() ;

        switch(calcType) {
            case "bas" :
                Scanner inputA = new Scanner(System.in) ;
                System.out.print("Opperations [+ , - , * , /]: ") ;
                a = inputA.next() ; 

                BasicCalc tempCalc = new BasicCalc(a , b , c) ;
                System.out.printf("%.3f %s %.3f = %.3f\n" , b , a , c ,tempCalc.getAnswer()) ;
                break ;
            case "pyt" :
                System.out.println("PYTHAOGREAN") ;
                break ;
        }
    }
}
