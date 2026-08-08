import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

class DirectoryFiles
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
                        fwobj.write(Arr[i].getName());
                        fwobj.write("\n");
                    }
                }

                fwobj.close();

                System.out.println("File names written into Marvellous.txt successfully.");
            }
            catch(IOException e)
            {
                System.out.println("Unable to create Marvellous.txt.");
            }
        }
        else
        {
            System.out.println("Directory does not exist.");
        }

        sobj.close();
    }
}
