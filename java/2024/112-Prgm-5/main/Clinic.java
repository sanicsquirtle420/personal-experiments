import java.util.ArrayList ;

public class Clinic {
    private String name ;
    private ArrayList<Doctor> drs ;

    public Clinic() {
        name = "" ;
        drs = new ArrayList<>() ;
    }

    public Clinic(String name) {
        this.name = name ;
        drs = new ArrayList<>() ;
    }

    public void setClinicName(String name) {
        this.name = name ;
    }

    public String getClinicName() {
        return name ;
    }

    public void addDoctors(String docName , int maxPatients) {
        drs.add(new Doctor(docName , maxPatients)) ;
    }

    public void addPatients(String name, String opperation, double cost, int index) {
        drs.get(index).addPatient(name , opperation , cost) ;
    }

    public void sort() {
        for(int i = 0 ; i < drs.size() ; i++) {
            drs.get(i).insertionSort();
        }
    }

    public void printDoctorData() {
        for(int i = 0 ; i < drs.size() ; i++) {
            drs.get(i).printData() ;
        }
    }

    public void printSearchData(double search) {
        for(int i = 0 ; i < drs.size() ; i++) {
            drs.get(i).searchData(search) ;
        }
    }
}
