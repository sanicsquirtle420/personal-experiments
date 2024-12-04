import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

class PatientTest {
    @Test
    void paramConst() {
        Patient test = new Patient("a" , "b" , 123.45) ;
        assertAll("testing parameterized constructor" ,
                ()-> assertEquals("a" , test.getPatientName()) ,
                ()-> assertEquals("b" , test.getProcedureDone()) ,
                ()-> assertEquals(123.45 , test.getProcedureCost())
        ) ;
    }

    @Test
    void noParamConst() {
        Patient test = new Patient() ;
        assertNotNull(test) ;
    }

    @Test
    void setPatientName() {
        Patient test = new Patient() ;
        test.setPatientName("Juno") ;
        assertEquals("Juno" , test .getPatientName()) ;
    }

    @Test
    void setProcedureDone() {
        Patient test = new Patient() ;
        test.setProcedureDone("Uravity") ;
        assertEquals("Uravity" , test.getProcedureDone()) ;
    }

    @Test
    void setProcedureCost() {
        Patient test = new Patient() ;
        test.setProcedureCost(123.45) ;
        assertEquals(123.45 , test.getProcedureCost()) ;
    }

    @Test
    void testToString() {
        Patient test = new Patient("Juno" , "Uravity" , 123.45) ;
        assertEquals(String.format("\tPatient: %-17s Procedure: %-17s Cost: $%,.2f", "Juno", "Uravity", 123.45)  , test.toString()) ;
    }
}