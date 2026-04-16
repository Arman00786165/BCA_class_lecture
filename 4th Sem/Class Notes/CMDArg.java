public class CMDArg {
    public static void main(String... bca) {
        System.out.println("value is : " + bca[0]);
        for (String val : bca) {
            System.out.println("value is: " + val);
        }
        if (bca.length == 2) {
            int a = Integer.parseInt(bca[0]);
            int b = Integer.parseInt(bca[1]);
            System.out.println("Sumis : " + (a + b));
        } else
            System.out.println("Arg Not Valid");
    }
}
