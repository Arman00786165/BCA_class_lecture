class Emp {
    int empId;
    String name;
    int age;

    public Emp() {
    }

    public void getdata(int empId, String name, int age) {
        this.empId = empId;
        this.name = name;
        this.age = age;
    }

    public void showdata() {
        System.out.println("empid " + empId);
        System.out.println("Name " + name);
        System.out.println("age " + age);
    }
}

class Manager extends Emp {
    float salary;
    int experience = 20;

    public Manager(){};

    public void getdata(int empId, String name, int age, float salary, int experience) {
        super.getdata(empId, name, age);

        this.salary = salary;
        this.experience = experience;
    }

    public void showdata() {
        super.showdata();
        System.out.println("salary " + salary);
        System.out.println("experience " + experience);
    }

}

class Account_manager extends Manager {
    int numOfTerms;

    public Account_manager(){};

    public void getdata(int empId, String name, int age, float salary, int experience, int numOfTerms) {
        super.getdata(empId, name, age, salary, experience);

        this.numOfTerms = numOfTerms;
    }

    public void showdata() {
        super.showdata();
        System.out.println("Number of Terms " + numOfTerms);
    }

}

public class MethodChaining {

    public static void main(String[] args) {
        Account_manager ac = new Account_manager();
        ac.getdata(101, "krish", 21, 100000f, 2, 3);
        ac.showdata(); 
    }
}
