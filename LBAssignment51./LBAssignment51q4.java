import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

class DirectoryData
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String DirName = sobj.nextLine();

        File dobj = new File(DirName);

        if(dobj.exists() && dobj.isDirectory())
        {
            File Arr[] = dobj.listFiles();

            try
            {
                FileWriter fwobj = new FileWriter("Marvellous.txt");

                for(int i = 0; i < Arr.length; i++)
                {
                    if(Arr[i].isFile())
                    {
                        // Write file name
                        fwobj.write("File Name : " + Arr[i].getName());
                        fwobj.write("\n");

                        // Open file for reading
                        FileReader frobj = new FileReader(Arr[i]);

                        int iData = 0;

                        // Copy file data
                        while((iData = frobj.read()) != -1)
                        {
                            fwobj.write(iData);
                        }

                        fwobj.write("\n");
                        fwobj.write("--------------------------------");
                        fwobj.write("\n\n");

                        frobj.close();
                    }
                }

                fwobj.close();

                System.out.println("File names and data copied successfully into Marvellous.txt.");
            }
            catch(IOException e)
            {
                System.out.println("Unable to copy data.");
            }
        }
        else
        {
            System.out.println("Directory does not exist.");
        }

        sobj.close();
    }
}
