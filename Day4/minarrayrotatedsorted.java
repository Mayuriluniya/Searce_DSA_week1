import java.io.*;
public class minarrayrotatedsorted{
    public static int min(int array[],int x,int y)
    {
        int end=array[y];
        
        while(x<y)
        {
        int mid=x+(y-x)/2;
        if(array[mid]>end)
        {
            x=mid+1;
        }
        else{
            y=mid;
        }
    }
        return x;



    }
    public static void main(String []args)
    {
        int array[]={29,2,5,7,10,13,14,24};
        int n=array.length;
        int minindex=min(array,0,n-1);
        System.out.println("Minimum element in rotated sorted array is ="+array[minindex]);



    }
}