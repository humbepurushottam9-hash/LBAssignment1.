import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

class LBAssignment50q1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name: ");
        String Source = sobj.nextLine();

        System.out.println("Enter Destination File Name: ");
        String Destination = sobj.nextLine();

        try
        {
            FileReader frobj = new FileReader(Source);
            FileWriter fwobj = new FileWriter(Destination);

            int iData = 0;

            while((iData = frobj.read()) != -1)
            {
                fwobj.write(iData);
            }

            frobj.close();
            fwobj.close();

            System.out.println("Data copied Successfully");

        }
        catch(IOException e)
        {
            System.out.println("Unable to copy file");
        }

        sobj.close();
    }
}