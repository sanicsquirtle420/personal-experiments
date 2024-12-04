import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

class ClinicTest {
    @Test
    void paramConst() {
        Clinic test = new Clinic("Kitsune") ;
        assertAll("testing parameterized constructor" ,
                ()-> assertEquals("Kitsune" , test.getClinicName())
                ) ;
    }

    @Test
    void noParamConst() {
        Clinic test = new Clinic() ;
        assertNotNull(test) ;
    }

    @Test
    void setClinicName() {
        Clinic test = new Clinic() ;
        test.setClinicName("Juno") ;
        assertEquals("Juno" , test.getClinicName()) ;
    }
}
