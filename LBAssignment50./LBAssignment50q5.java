import java.io.File;
import java.util.Scanner;

class LBAssignment50q5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Directory name: ");
        String DirName = sobj.nextLine();

        File dobj = new File(DirName);

        if(dobj.exists() && dobj.isDirectory())
        {
            File Arr[] = dobj.listFiles();

            System.out.println("Files and their file sizes");

            for(int i = 0; i< Arr.length; i++)
            {
                if(Arr[i].isFile())
                {
                    System.out.println("File Name: "+Arr[i].getName());
                    System.out.println("File Size: "+Arr[i].length() + "bytes");
                    System.out.println();
                }
            }
        }
        else
        {
            System.out.println("Directory does not exists");
        }   
        
        sobj.close();
    }
}