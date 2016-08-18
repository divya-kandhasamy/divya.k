import java.io.*;
class reverse
{
public static void main(String args[])
{
System.out.println("Enter the string");
Scanner s=new Scanner(System.in);
String str=s.nextLine();
int i=str.length();
for(int j=i-1;i>=0;i--)
System.out.println(charAt(i));
}
}
