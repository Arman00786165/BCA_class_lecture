import java.util.Scanner;

interface Student{
    public void show();
}

class bcastudent implements Student{
    String name;
    int age;
    double marks;

     bcastudent(){
        this.name="Arman";
        this.age= 19;
        this.marks= 80;
    }

    public void show(){
        System.out.println("Name : "+name);
        System.out.println("Age : "+age);
        System.out.println("Marks : "+marks);

    }

}
class mcastudent implements Student{
    String name;
    int age;
    double marks;

     mcastudent(){
        this.name="Arman";
        this.age= 19;
        this.marks= 80;
    }

    public void show(){
        System.out.println("Name : "+name);
        System.out.println("Age : "+age);
        System.out.println("Marks : "+marks);

    }

}

public class OverridingEx {
    public static void main(String...arg){
        int ch;
        Scanner s=new Scanner(System.in);
        Student  stu = new bcastudent();

        do{
            System.out.println("1. mca \n 2. bca \n 3. Exit");
            ch = s.nextInt();
            switch(ch){
                case 1 : 
                    stu = new mcastudent();
                    break;
                
                case 2 :
                    stu = new bcastudent();
                    break;

                default :
                    System.out.println("Number is Invalid");
                    break;
            }
            stu.show();



        }while (ch!= 3) ;
            
        


    }
}
