//1. Static Example in Java?

class Emp {
	static int count = 0;
	int val = 0;

	public Emp() {
		count++;
		val++;

	}

	void show() {
		System.out.println("No of object is : " + count);
		System.out.println("value is : " + val);

	}

	static void totalobj() {

		System.out.println("No of object is : " + count);

	}
}

public class noofobj{

	public static void main(String... arg){

	Emp e1 = new Emp();
	e1.show();
	Emp e2 = new Emp();
	e2.show();
	Emp e3 = new Emp();
	e3.show();

	}

}

// 3.
// make a
// command line
// java Application
// to find
// maximum from
// n number
// of arguments
// ?
