import java.io.File;
import java.util.Scanner;

class LBASsignment50q3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Directory name: ");
        String DirName = sobj.nextLine();

        File dobj = new File(DirName);

        if(dobj.mkdir())
        {
            System.out.println("Directory Created Successfully");
        }
        else
        {
            System.out.println("Unable to create directory");
        } 
        
        sobj.close();
    }
}