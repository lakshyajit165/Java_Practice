/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package palindrome;
import java.util.*;
/**
 *
 * @author Elkay
 */
public class Palindrome {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B = "";
        int n = A.length();
        for(int i = n-1; i>=0; i--){
            B += A.charAt(i);
        }
        if(A.equalsIgnoreCase(B)){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
        
        
            
    }
    
}
