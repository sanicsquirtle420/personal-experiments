public class PythaCalc {
    private double triOne , triTwo , ans ;
    private String missing ;

    public PythaCalc(String a , double b , double c) {
        missing = a ;
        triOne = b ;
        triTwo = c ;
    }

    public double getAnswer() {
        switch(missing){
            case "a":
            case "b": 
                ans = Math.sqrt(Math.pow(triOne , 2) - Math.pow(triTwo , 2)) ;
                break ; // missing leg
            case "c": 
                ans = Math.sqrt(Math.pow(triOne , 2) + Math.pow(triTwo , 2)) ; 
                break ; // missing hypotenuse
        }
        return ans ;
    }
}
