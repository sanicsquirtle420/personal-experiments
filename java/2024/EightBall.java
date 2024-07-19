/*
05/11/2024
The original version was a python file "8ball.py" and
sense I have been learning Java I have decided to make
a Java version of the 8 Ball python file.
*/
import java.util.* ;

public class EightBall {
	public static void main(String [] args) {
		String eightBall = EightBallResponse() , userInput = "y" ;
		if (userInput == "y" || userInput == "yes") {
			System.out.print("Ask the Eight Ball a question? ") ;
			Scanner input = new Scanner(System.in) ;
			String question = input.nextLine() ; 
			System.out.printf("\nThe Eight Ball's response to [%s] is %s" , question , eightBall) ;

			System.out.printf("\nWould you like to ask another question? (yes/no) ") ;
			Scanner input2 = new Scanner(System.in) ;
			userInput = input2.nextLine() ;
		} 
		System.out.printf("Have a nice day!\n") ;

		System.out.println(userInput) ;
	}

	public static String EightBallResponse() {
		String[] responses = {"Yes" , "No" , "Maybe" , "Ask Again Later"} ;
		Random r = new Random() ;
		int i = r.nextInt(responses.length) ;
		return responses[i] ;
	}
}
