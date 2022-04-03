public class Globals
{
	public static void main(String[] args)
	{
		Fmain myObj1 = new Fmain();
		second myObj2 = new second();
		myObj1.fname = "Calire";
		myObj1.lname = "Zianah";
		myObj2.firstGrading = 89;
		myObj2.secondGrading = 88;
		myObj2.thirdGrading = 93;
		myObj2.fourthGrading = 85;
		System.out.print("Good day ");
		System.out.print(myObj1.fname);
		System.out.print("  ");
		System.out.print(myObj1.lname);
		System.out.print(" your grades from first grading to fourth grading are :");
		System.out.print("\n");
		System.out.print("First Grading : ");
		System.out.print(myObj2.firstGrading);
		System.out.print("\n");
		System.out.print("Second Grading : ");
		System.out.print(myObj2.secondGrading);
		System.out.print("\n");
		System.out.print("Third Grading : ");
		System.out.print(myObj2.thirdGrading);
		System.out.print("\n");
		System.out.print("fourthGrading : ");
		System.out.print(myObj2.fourthGrading);
		System.out.print("\n");
	}

}