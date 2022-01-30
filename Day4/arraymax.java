import java.io.*;
public class arraymax{
    public static class max{
        int max;
        
    }
    public static max returnmax(int array[],int x)
    {
        max arraymax=new max();
        if(x==1)
        {
            arraymax.max=array[0];
            return arraymax;
        }
        else{
            arraymax.max=array[0];
            for(int i=1;i<x;i++)
            {
                if(array[i]>arraymax.max)
                {
                    arraymax.max=array[i];
                }
            }
        }
        return arraymax;

    }
    public static void main(String args[])
    {
        int array[]={29,13,2,10,14,23,90};
        int n=array.length;
        max arraymax=returnmax(array,n);
        System.out.println("Max element in array is "+ arraymax.max);


    }
}