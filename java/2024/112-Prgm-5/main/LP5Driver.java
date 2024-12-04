//This program prints out Doctors names, the number of Patients and the patient's data, average procedure costs,
//and a list of patients with procedure costs over a given amount
public class LP5Driver {
    public static void main(String[] args) {

        int index = 0; // for the indexing
        Clinic myClinic = new Clinic( "Realty Good Care Clinic" );

        System.out.println();
        System.out.println();
        //print out a welcome message
        System.out.printf( "Welcome to the '%s' patient records program!\n\n", myClinic.getClinicName() );

        // add doctors and their corresponding patients
        // Doctor's name and the number of patients could have
        myClinic.addDoctors( "Dr. House", 50 );

        myClinic.addPatients( "Freddie Funk", "Gastric Bypass", 20375.55, index );
        myClinic.addPatients( "Marie Manson", "Stitches", 256.99, index);
        myClinic.addPatients( "Frannie Fredrick", "Blood Test", 120.85, index);
        myClinic.addPatients( "Stevie Smith", "Eye Injury", 1820.85, index);
        index++;

        myClinic.addDoctors( "Dr. Yurt", 40 );

        myClinic.addPatients( "Jessica Johnson", "Spinal Fusion", 95864.32, index );
        myClinic.addPatients( "Grant George", "Colonoscopy", 3638.00, index );
        myClinic.addPatients( "Anil Anfred", "Heart Bypass", 110350.22, index );
        myClinic.addPatients( "Dominic Davis", "Knee Replacement", 8564.25, index );
        myClinic.addPatients( "Luis Long" , "Hip Replacement", 30201.22, index );
        index++;

        myClinic.addDoctors( "Dr. Bungalow", 100 );

        myClinic.addPatients( "Fernando Franks", "Colonoscopy", 4290.90, index );
        myClinic.addPatients( "Jeremiah Jones", "Eye Injury", 2564.25, index );
        myClinic.addPatients( "Markus Michaels", "Fracture Splint", 338.00, index );
        myClinic.addPatients( "Poppy Price", "Burn Treatment", 1638.00, index );
        myClinic.addPatients( "Perry Prince", "Stitches", 120.85, index);
        myClinic.addPatients( "Jerry Justice", "Blood Test", 110.20, index);
        myClinic.addPatients( "Mani Martin", "Appendix Removal", 1800.20, index);
        index++;

        myClinic.addDoctors( "Dr. Chateau", 80 );

        myClinic.addPatients( "Lily Loadstone", "Stitches", 339.55, index );
        myClinic.addPatients( "Bruce Banner", "Biopsy", 1220.55, index );
        myClinic.addPatients( "Maggie Moons", "Vaccinations", 200.20, index );
        myClinic.addPatients( "Mitha Madduri", "X-ray", 265.25, index );
        myClinic.addPatients( "Charlie Cross", "Blood Test", 130.00, index);
        myClinic.addPatients( "LaMarcus Lawson", "Blood Test", 120.85, index);
        index++ ;

        //sort the array by cost in ascending order
        myClinic.sort();

        //prints the sorted array
        myClinic.printDoctorData();


        double cost = 1500.00;
        System.out.println();
        System.out.println();
        System.out.printf( "*** Patients with procedure costs greater than $%,.00f ***\n", cost );
        System.out.println();
        //prints the data for patients with a procedure cost > $1500
        myClinic.printSearchData(cost);

        System.out.println( "Thank you and have a great day!" );
    }
}
