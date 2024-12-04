public class Doctor {
	//Class attributes 
	private String docName; //the doctor name
	private Patient[] patient; //array for the patient data
	private int index; //for keeping up with the array indexing
	
	//No-Arg constructor for the class
	public Doctor()
	{
		docName = "";
		patient = new Patient[100];
		index = 0; 
	}

	/** Parameterised constructor for the class
	 * @param docName
	 * @param possibleNumberOfPatients
	 */
	public Doctor( String docName, int possibleNumberOfPatients )
	{
		this.docName = docName;
		patient = new Patient[possibleNumberOfPatients];
		index = 0;
	}
	
	//Setter for doctor name
	public void setDocName( String DocName )
	{
		docName = DocName; 
	}
	
	//getter for docName
	public String getDocName()
	{
		return docName;
	}
	
	//Getter for the index
	public int getIndex()
	{
		return index;
	}


	/** populate the array with the Patient name, procedure, and cost
	 * @param patientName
	 * @param procedureDone
	 * @param procedureCost
	 */
	public void addPatient( String patientName, String procedureDone, double procedureCost )
	{
		patient[index] = new Patient( patientName, procedureDone, procedureCost ) ;
		index++;
	}

	/** calculates the average cost of patient procedures
	 * @return
	 */
	public double avgCost() {
		double sum = 0; 
		for(int i = 0 ; i < index ; i++) {
			sum += patient[i].getProcedureCost() ;
		}

		return sum / index ;
	}

	/** sorts the patient array in ascending order by procedureCost */
	public void insertionSort() {
		for(int i = 0 ; i < index; i++) {
			Patient pat = patient[i];
			int pIndex = i - 1; 
			while( (pIndex > -1) && patient[pIndex].getProcedureCost() > pat.getProcedureCost() ) {
				patient[pIndex + 1] = patient[pIndex];
				pIndex--;
			}
			patient[pIndex + 1] = pat;
		}
	}
	
	/**
	 * prints the data for a doctor and the patients data in the array
	 */
	public void printData()
	{
		System.out.println( docName + " currently has " + index + " Patients");
		for( int data = 0; data < index ; data++ )
		{
			System.out.println( patient[data].toString() );
		}
		System.out.printf( "\n\tThe average cost of the doctor's procedures is: $%,.2f\n", avgCost() );
	}
	
	/** print the data for a doctor
	 * and only patients with a procedure greater than or equal to cost 
	 * (which is passed to the method)
	 */
	public void searchData( double cost )
	{
		boolean over = false;
		System.out.println(( docName ));
		for( int i = 0; i < index; i++ )
		{
			if( patient[i].getProcedureCost() >= cost )
			{
				System.out.println("\t"+ patient[i].toString());
				over = true;
			}
		}
		if( !over )
		{
			System.out.println((String.format("\tNo patients had a procedure cost of $%,.00f or greater\n", cost )));
		}
	}

}
