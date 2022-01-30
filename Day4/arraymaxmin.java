import java.io.*;
public class arraymaxmin{
    public static class maxmin{
        int max;
        int min;
        
    }
    public static maxmin returnmaxmin(int array[],int x)
    {
        maxmin arraymaxmin=new maxmin();
        if(x==1)
        {
            arraymaxmin.max=array[0];
            arraymaxmin.min=array[0];
            return arraymaxmin;
        }
        if(array[0]<array[1])
        {
            arraymaxmin.min=array[0];
            arraymaxmin.max=array[1];
        }
        else
        {
            arraymaxmin.min=array[1];
            arraymaxmin.max=array[0];
        }
    
            
        for(int i=2;i<x;i++)
        {
            if(array[i]>arraymaxmin.max)
            {
                arraymaxmin.max=array[i];
            }
            else if(array[i]<arraymaxmin.min)
            {
                arraymaxmin.min=array[i];
            }
        }
        return arraymaxmin;
    }
   

    
    public static void main(String args[])
    {
        int array[]={29,13,2,10,14,23,90};
        int n=array.length;
        maxmin arraymaxmin=returnmaxmin(array,n);
        System.out.println("Max element in array is "+ arraymaxmin.max);
        System.out.println("Min element in array is "+ arraymaxmin.min);


    }
}