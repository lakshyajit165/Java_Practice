/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package string_palin;
import java.util.Scanner;
/**
 *
 * @author Elkay
 */
public class String_Palin {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner s = new Scanner(System.in);
        String ss = s.next();
        int flag = 0;
        int size = ss.length();
        for(int i = 0; i<=size/2; i++){
            if(ss.charAt(i) == ss.charAt(size-1-i))
                continue;
            else{
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            System.out.println("Not a Palidrome");
        else
            System.out.println("It is a Palindrome!");
    }
    
}
