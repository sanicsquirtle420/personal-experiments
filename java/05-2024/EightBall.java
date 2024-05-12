/*
05/11/2024
The original version was a python file "8ball.py" and
sense I have been learning Java I have decided to make
a Java version of the 8 Ball python file.
*/
import java.util.* ;

public class EightBall {
  public static void main(String [] args) {
        
  }

  public static String EightBallResponse() {
    String[] responses = {"Yes" , "No" , "Maybe" , "Ask Again Later"} ;
    Random r = new Random() ;
    int responseIndex = r.nextInt(responses.length - 1)
    return answer ;
  }
}
