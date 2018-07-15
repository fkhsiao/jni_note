public class HelloJNI {

    /*
    1. Define Native interfaces
     */

    public static native boolean bolEchoDouble(boolean b);
    public static native int intEchoDouble(int i);
    public static native String strEchoDouble(String s);

    public static void main(String[] args) {
        System.loadLibrary("HelloJNI");
        HelloJNI helloJNI = new HelloJNI();

        System.out.println("bolEchoDouble(boolean b) says: "+bolEchoDouble(true));
        System.out.println("intEchoDouble(int i) says: "+intEchoDouble(2));
        System.out.println("strEchoDouble(String s) says: "+strEchoDouble("Frank"));
    }
}
