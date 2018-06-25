/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package loops;
import java.util.*;

/**
 *
 * @author Elkay
 */
public class Loops {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            double a = in.nextDouble();
            int b = in.nextInt();
            int n = in.nextInt();
            double s = a;
            
            for(int j=0;j<n;j++){
                s+=Math.pow(2,j)*b;
                String val = Integer.toString((int)s);
                System.out.print(val + " ");
                
            }
            System.out.println();
        }
        in.close();
    }
    
}
