import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

class DoctorTest {
    @Test
    void paramConst() {
        Doctor test = new Doctor("Dr. Ziegler" , 5) ;
        assertAll( "testing parameterized constructor" ,
                ()-> assertEquals("Dr. Ziegler" , test.getDocName())
        ) ;
    }

    @Test
    void noParamConst() {
        Doctor test = new Doctor() ;
        assertNotNull(test) ;
    }

    @Test
    void setDocName() {
        Doctor test = new Doctor() ;
        test.setDocName("Mercy") ;
        assertEquals("Mercy" , test.getDocName()) ;
    }

    @Test
    void addPatient() {
        Doctor test = new Doctor("" , 4) ;
        test.addPatient("Juno" , "Uravity" , 123.45) ;
        test.addPatient("Kiriko" , "Kitsune" , 123.45) ;
        assertEquals(2 , test.getIndex()) ;
    }

    @Test
    void avgCost() {
        Doctor test = new Doctor("" , 4) ;
        test.addPatient("Juno" , "Uravity" , 1.75) ;
        test.addPatient("Kiriko" , "Kitsune" , 2.50) ;

        assertEquals(2.125 , test.avgCost()) ;
    }
}