class Student{
    String name;
    int age;
    double marks;

    Student(String name, int age , double marks){
        this.name=name;
        this.age=age;
        this.marks=marks;
    }

    Student(String name, int age ){
        this.name=name;
        this.age=age;
        
    }

    Student(String name){
        this.name=name;
   }

    Student(){
     
    }

    public void show(){
        System.out.println("Name : "+name);
        System.out.println("Age : "+age);
        System.out.println("Marks : "+marks);

    }
    
}


public class ConstructorOverloading extends Student {
    public static void main(String...arg){
        Student stu=new Student("Arman",19,80);
        stu.show();

        Student kri=new Student("krish",100);
        kri.show();

        Student Arm=new Student("Talib");
        Arm.show();

        Student Tal=new Student();
        Tal.show();
    }
   

   
}
