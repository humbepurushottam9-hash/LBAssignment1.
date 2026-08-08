import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

class LBAssignment49q1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        FileReader frobj = null;

        System.out.print("Enter file name: ");
        String Fname = sobj.nextLine();

        try
        {
            frobj = new FileReader(Fname);

            System.out.println("File opened successfully.");
        }
        catch(IOException e)
        {
            System.out.println("Unable to open file.");
        }

        sobj.close();
    }
}
