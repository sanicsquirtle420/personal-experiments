public class BasicCalc {
    private double num1 , num2 , ans = 0 ;
    private String opp ; 

    public BasicCalc(String a , double b , double c) {
        opp = a ;
        num1 = b ;
        num2 = c ;
    }
    public double getAnswer() {
        switch(opp) {
            case "+":
                ans = num1 + num2 ;
                break ;
            case "-":
                ans = num1 - num2 ;
                break ;
            case "*": 
                ans = num1 * num2 ;
                break ;
            case "/":
                ans = num1 / num2 ;
                break ;
        }
        return ans ;
    }
}
