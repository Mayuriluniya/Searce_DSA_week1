import java.io.*;
public class movezeorstoend {
    public static void movezeros(int array[],int x)
    {
        int y=0;
        for(int i=0;i<x;i++)
        {
            if(array[i]!=0)
            {
                array[y]=array[i];
                y++;
            }
        }
        for(int i=y;i<x;i++)
        {
            array[i]=0;
            
        }
    }
    public static void main(String []args)
    {
        int array[]={29,0,13,14,0,10,4,2,5,0,0};
        int n=array.length;
        movezeros(array,n);
        System.out.println("Array after moving zeros at the end");
        for(int i=0;i<n;i++)
        {
            System.out.print(array[i]+" ");
        }
    }
    
}
