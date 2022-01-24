import java.io.*;
import java.util.*;
public class singlylinkedlist{
    class Node{
        int data;
        Node link;
        public Node(int data)
        {
            this.data=data;
            this.link=null;
        }
    }
        public Node head=null;
        public Node tail=null;
        public void nodeList(int data)
        {
            Node newNode=new Node(data);
            if(head==null)
            {
                head=newNode;
                tail=newNode;
            }
            else{
                tail.link=newNode;
                tail=newNode;
            }
        }
        public void printLinkedList()
        {
            Node traverse =head;
            if(head==null)
            {
                System.out.println("Linked list is empty");
                return;
            }
            while(traverse!=null)
            {
                System.out.println(traverse.data+" ");
                current=traverse.link;
            }
        }
        public static void main(String []args)
    {
        singlylinkedlist list=new singlylinkedlist();
        System.out.println("Enter the number of linked list entries\n");
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        System.out.println("Enter the data values of each node in the singly linked list.\n");
        for(int i=0;i<n;i++)
        {
            list.nodeList(input.nextInt());

        }
        input.close();
        Sytsem.out.println("data elements of each node in singly linked list are\n");
        list.printLinkedList();
    }
}