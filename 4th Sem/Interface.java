interface myinterface {

   void show();

}

interface secondinterface {

   void show();

}

class Arman implements myinterface, secondinterface{



   @Override
   public void show(){
      System.out.println("this is showdata method");
   }

}


public class Interface{

   public static void main(String[] args) {
      
      Arman arman = new Arman();
      arman.show();
    
   }
}
