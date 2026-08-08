import java.io.FileInputStream;
import java.security.MessageDigest;
import  java.util.Scanner;

class LBAssignment50q4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter File name: ");
        String FileName = sobj.nextLine();

        try
        {
            FileInputStream fobj = new FileInputStream(FileName);

            MessageDigest md = MessageDigest.getInstance("MD5");

            byte Buffer[] = new byte[1024];
            int iRet = 0;

            while((iRet = fobj.read(Buffer)) != -1)
            {
                md.update(Buffer,0,iRet);
            }    

            byte Digest[] = md.digest();

            System.out.println("CheckSum: ");

            for(int i = 0; i < Digest.length; i++)
            {
                System.out.printf("%02x", Digest[i]);
            }
            System.out.println();

            fobj.close();
        }
        catch(Exception e)
        {
            System.out.println("Unable to calculate checksum");
        }

        sobj.close();
        
    }
}