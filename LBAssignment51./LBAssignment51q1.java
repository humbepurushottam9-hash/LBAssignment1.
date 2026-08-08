import java.io.File;
import java.util.Scanner;

class LBAssignment51q1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Direcotry name: ");
        String DirName = sobj.nextLine();

        File dobj = new File(DirName);

        if(dobj.exists() && dobj.isDirectory())
        {
            File Arr[] = dobj.listFiles();

            System.out.println("Regular files are: ");

            for(int i = 0; i < Arr.length; i++)
            {
                System.out.println(Arr[i].getName());
            }
        }
        else
        {
            System.out.println("Directory does not exists");
        }    

        sobj.close();
    }
}

