import java.io.File;
import java.io.IOException;
import java.util.Scanner;

class LBAssignment49q4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter File Name: ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        try
        {
            if(fobj.createNewFile())
            {
                System.out.println("File Created Successfully");
            }
            else
            {
                System.out.println("File already exists");
            }    
        }
        catch(IOException e)
        {
            System.out.println("Unable to create file");
        }
        
        sobj.close();
    }
}