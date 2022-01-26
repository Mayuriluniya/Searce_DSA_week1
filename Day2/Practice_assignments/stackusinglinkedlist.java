import java.io.*;
import java.util.*;
public class stackusinglinkedlist{
    public class Node{
        int data;
        Node link;
        public Node(int data)
        {
            this.data=data;
            this.link=null;
        }
    }
public Node head=null;
//public Node tail=null;
Node top=head;


public void addNodetolist(int data)
{
    Node newNode =new Node(data);
    if(head==null)
    {
        head=newNode;
        
        top=newNode;
    }
    else{
        newNode.link=head;
        head=newNode;
        top=newNode;
        
    }



}
void deleteNodefromlist()
{
    if (top == null) {
        System.out.print("\nStack Underflow");
        return;
    }

    // update the top pointer to point to the next node
    top = top.link;

   


}
void printlist()
{
    Node current=top;
    while(current!=null)
    {
        System.out.println(current.data);
        current=current.link;
    }


}
public static void main(String []args)
{
    stackusinglinkedlist s=new stackusinglinkedlist();
    s.addNodetolist(10);
    s.addNodetolist(20);
    s.addNodetolist(30);
    s.deleteNodefromlist();
    s.deleteNodefromlist();
    s.printlist();


}
}