public class Abc
{
    public static void main(String args[])
    {
        int i,j;
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
            {
                if(i==j || j+i==10)
                {   
                    if(i>5)
                    {
                      System.out.print(10-i);

                    }
                    else
                    System.out.print(i);
                }
                else
                {
                    System.out.print(" ");
                }

            }
            System.out.print("\n");
        }
    }
}