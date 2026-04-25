class StringEx {
    public static void main(String... arg) {
        String S1 = "IBM";
        String S2 = "IBM";
        String S3 = new String("IBm");

        System.out.println(S1 == S2);
        System.out.println(S2 == S3);

        System.out.println(S1.equals(S2));
        System.out.println(S1.equals(S3));
        System.out.println(S1.equalsIgnoreCase(S3));
        System.out.println(S1.length());
        System.out.println(S1.charAt(1));
        System.out.println(S1 + S3);

        StringBuffer s1 = new StringBuffer("IBM");
        System.out.println("Value is " + s1);
        System.out.println("Value is" + s1.hashCode());

        s1.append("Org");
        System.out.println("value is" + s1);
        System.out.println("Ref is " + s1.hashCode());

        StringBuffer s4=new StringBuffer("IBM");
        StringBuffer s2=new StringBuffer("IBM");
        System.out.println(s1==s2);
        System.out.println(s1.equals(s4));

    }
}