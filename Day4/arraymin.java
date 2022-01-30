import java.io.*;
public class arraymin{
    public static class min{
        int min;
        
    }
    public static min returnmin(int array[],int x)
    {
        min arraymin=new min();
        if(x==1)
        {
            arraymin.min=array[0];
            return arraymin;
        }
        else{
            arraymin.min=array[0];
            for(int i=1;i<x;i++)
            {
                if(array[i]<arraymin.min)
                {
                    arraymin.min=array[i];
                }
            }
        }
        return arraymin;

    }
    public static void main(String args[])
    {
        int array[]={29,13,2,10,14,23,90};
        int n=array.length;
        min arraymin=returnmin(array,n);
        System.out.println("Min element in array is "+ arraymin.min);


    }
}