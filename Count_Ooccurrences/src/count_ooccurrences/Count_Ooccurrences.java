/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package count_ooccurrences;
import java.util.Scanner;
/**
 *
 * @author Elkay
 */
public class Count_Ooccurrences {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int count[] = new int[256]; 
        Scanner s = new Scanner(System.in);
        String ss = s.next();
        int len = ss.length();
        for(int i = 0; i<len; i++)
            count[ss.charAt(i)]++;
        
        for(int i = 0; i<256; i++){
            if(count[i]!=0){
                System.out.println((char)i + " " + count[i]);
            }
           
        }
            
    }
    
}
