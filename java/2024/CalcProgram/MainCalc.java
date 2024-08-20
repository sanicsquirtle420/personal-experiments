import java.util.* ;

public class MainCalc {
    public static void main(String [] args) {
        String calcType , a ;
        double b , c ;

        System.out.println("Which calculator do you need?") ;
        System.out.print("[Bas]ic, [Pyt]agorean: ") ;
        Scanner yotsuba = new Scanner(System.in) ;
        calcType = yotsuba.nextLine() ;

        switch(calcType) {
            case "bas" :
                Scanner aqua = new Scanner(System.in) ;
                System.out.print("1st Value: ") ;
                b = aqua.nextDouble() ;
                Scanner darkness = new Scanner(System.in) ;
                System.out.print("2nd Value: ") ;
                c = darkness.nextDouble() ;

                Scanner nino = new Scanner(System.in) ;
                System.out.print("Opperations [+ , - , * , /]: ") ;
                a = nino.next() ; 

                BasicCalc basCalc = new BasicCalc(a , b , c) ;
                System.out.printf("%.3f %s %.3f = %.3f\n" , b , a , c ,basCalc.getAnswer()) ;
                break ;
            case "pyt" :
                Scanner miku = new Scanner (System.in) ;
                System.out.print("What side is missing? [a , b , c]: ") ;
                a = miku.next() ; 

                if(a != "c"){
                    Scanner futaba = new Scanner(System.in) ;
                    System.out.print("Hypotenuse: ") ;
                    b = futaba.nextDouble() ;
                    Scanner mai = new Scanner(System.in) ;
                    System.out.print("Leg: ") ;
                    c = mai.nextDouble() ;

                    PythaCalc pytCalc = new PythaCalc(a , b , c) ;
                    System.out.printf("The missing leg = %.3f\n" , pytCalc.getAnswer()) ;
                } else {
                    Scanner nami = new Scanner(System.in) ;
                    System.out.print("Leg: ") ;
                    b = nami.nextDouble() ;
                    Scanner itsuki = new Scanner(System.in) ;
                    System.out.print("Leg: ") ;
                    c = itsuki.nextDouble() ;

                    PythaCalc pytCalc = new PythaCalc(a , b , c) ;
                    System.out.printf("The hypotenuse = %.3f\n" , pytCalc.getAnswer()) ;                   
                }
                break ;
        }
    }
}
