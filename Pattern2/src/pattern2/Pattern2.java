/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pattern2;

/**
 *
 * @author Elkay
 */
public class Pattern2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        for(int i = 1; i<=4; i++){
            for(int k = 1; k<=(4-i); k++)
                System.out.print(" ");
            for(int j = 1; j<=i; j++)
                System.out.print("*");
            for(int l = 2; l<=i; l++)
                System.out.print("*");
            
            System.out.println(" ");
        }
    }
    
}
