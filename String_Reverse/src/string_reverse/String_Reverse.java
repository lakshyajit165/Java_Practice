/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package string_reverse;
import java.util.Scanner;
/**
 *
 * @author Elkay
 */
public class String_Reverse {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner s = new Scanner(System.in);
        StringBuffer ss = new StringBuffer(s.next());
        ss.reverse();
        System.out.println(ss);
        
    }
    
}
