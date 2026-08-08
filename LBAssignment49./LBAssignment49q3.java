import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

class LBAssignment49q3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter File name: ");
        String FileName = sobj.nextLine();

        try
        {
            FileWriter fw = new FileWriter(FileName, true);

            fw.write("\nThis data is added at the end of file");

            fw.close();

            System.out.println("Data written successfully at the end of file");

        }
        catch(IOException e)
        {
            System.out.println("Unable to write data into file");
        }

        sobj.close();
    }
}