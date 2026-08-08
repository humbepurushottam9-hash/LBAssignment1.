import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

class LBAssignment49q2
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

            int iRet = 0;

            while((iRet = frobj.read()) != -1)
            {
                System.out.print((char)iRet);
            }

            frobj.close();
        }
        catch(IOException e)
        {
            System.out.println("Unable to open file.");
        }

        sobj.close();
    }
}
