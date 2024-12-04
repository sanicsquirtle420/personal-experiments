public class Patient {
	//Class attributes
	private String patientName;
	private String procedureDone;
	private double procedureCost;
	
	// No-Arg constructor for the Patient class
	public Patient()
	{
		patientName = "";
		procedureDone = "";
		procedureCost= 0.0; 
	}
	
	// Parameterized constructor for the Patient class
	public Patient( String PatientName, String ProcedureDone, double procedureCost )
	{
		patientName = PatientName;
		procedureDone = ProcedureDone;
		this.procedureCost = procedureCost;
	}
	
	//Setters
	public void setPatientName( String PatientName )
	{
		patientName = PatientName;
	}

	public void setProcedureDone( String ProcedureDone )
	{
		procedureDone = ProcedureDone;
	}

	public void setProcedureCost( double ProcedureCost )
	{
		procedureCost = ProcedureCost;
	}
	
	//Getters
	public String getPatientName()
	{
		return patientName ;
	}

	public String getProcedureDone()
	{
		return procedureDone ;
	}

	public double getProcedureCost()
	{
		return procedureCost;
	}
	
	//toString method
	public String toString()
	{
		return String.format("\tPatient: %-17s Procedure: %-17s Cost: $%,.2f", patientName, procedureDone, procedureCost);
	}
}
