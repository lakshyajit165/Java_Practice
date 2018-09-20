/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package string_rev_norm;
import java.util.Scanner;
/**
 *
 * @author Elkay
 */
public class String_Rev_Norm {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner ss = new Scanner(System.in);
        String s = ss.next();
        String Rev = "";
        int size = s.length();
        for(int i = size-1; i>=0; i--){
            Rev += s.charAt(i);
        }
        System.out.println(Rev);
    }
    
}
