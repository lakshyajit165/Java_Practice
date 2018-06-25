/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package linkedlist;

/**
 *
 * @author Elkay
 */
class Node{
    int data;
    Node next;
}
public class LinkedList {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Node start = new Node();
        Node temp;
        temp = start;
        temp.data = 12;
        temp.next = new Node();
        temp = temp.next;
        temp.data = 31;
        temp.next = new Node();
        temp = temp.next;
        temp.data = 100;
        System.out.println("Print Data\n");
        temp = start;
        while(temp!=null){
            System.out.println(temp.data);
            temp = temp.next;
        }
        }
    }
    
}
