import java .io.*;
import java.util.*;
public class maxinmatrixrow{
    public static void max(int array[][],int a,int b)
    {
        int max=0;
        int result[]=new int[a];
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(array[i][j]>max)
                {
                    max=array[i][j];
                }
            }
            result[i]=max;

        }

        for(int i=0;i<a;i++)
        {
            System.out.print(result[i]+" ");
        }

    }
    public static void main(String []args)
    {
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the order of matrix");
        int x=sc.nextInt();
        int y=sc.nextInt();
        int array[][]=new int[x][y];
        System.out.println("Enter matrix elements");
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                array[i][j]=sc.nextInt();
            }
        }
        System.out.println("Matrix is");
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                System.out.print(array[i][j]+" ");
            }
            System.out.println();
        }
        max(array,x,y);


    }
}