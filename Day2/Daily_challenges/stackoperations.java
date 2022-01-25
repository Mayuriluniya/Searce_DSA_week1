import java.io.*;
import java.util.*;

public class stackoperations {
    private static void getMax()
    {
        Stack<Integer> stack1 = new Stack<Integer>();
        Stack<Integer> stack2 = new Stack<Integer>();
        
        Scanner sc = new Scanner(System.in);
        
        int N = Integer.parseInt(sc.nextLine());
        int temp = 0;
        
        
        
        while(sc.hasNext())
        {
            String type[] = sc.nextLine().split(" ");
            switch(type[0])
            {
                case "1":
                temp = Integer.parseInt(type[1]);
                stack1.push(temp);
                 if(stack2.isEmpty() || stack2.peek() <= temp)
                     stack2.push(temp);
                break;
                case "2":
                temp = stack1.pop();
                if(temp == stack2.peek())
                    stack2.pop();
                break;
                case "3":
                System.out.println(stack2.peek());
                
            }
            N--;
            while(N-- > 0)
            System.out.println(onlyMaxs.peek());
        
    
            if(N==0)
            {
                System.exit(0);
            }
        }
        
        
        
        
    }
    public static void main(String[] args) {
        getMax();
    }
}