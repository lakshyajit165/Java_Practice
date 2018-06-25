/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hr_loops_;
import java.util.*;
/**
 *
 * @author Elkay
 */
public class Hr_loops_ {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
         Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            double s = a;
            for(int j=0;j<n;j++){
                s+=Math.pow(2,j)*b;
                
                System.out.print((s));
                
            }
            System.out.println();
        }
        in.close();
    }
    
}
