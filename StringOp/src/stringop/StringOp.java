/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


package stringop;
import java.io.*;
import java.util.*;

/**
 *
 * @author Elkay
 */
public class StringOp {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        int length = A.length() + B.length();
        int flag = A.compareTo(B);
       
        String output1 = A.substring(0, 1).toUpperCase() + A.substring(1);
        String output2 = B.substring(0, 1).toUpperCase() + B.substring(1);
        System.out.println(length);
        
        if(flag > 0)
            System.out.println("Yes");
        else
            System.out.println("No");
        
        System.out.println(output1 + " " + output2);
    }
    
}
