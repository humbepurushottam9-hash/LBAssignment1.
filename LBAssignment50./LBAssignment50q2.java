import java.io.File;
import java.util.Scanner;

class LBAssignment50q2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter File name: ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            if(fobj.isFile())
            {
                System.out.println("It is regular file");
            }
            else
            {
                System.out.println("It is not regular file");
            }    
        }
        else
        {
            System.out.println("File does not exist");
        }  
        
        sobj.close();
    }
}