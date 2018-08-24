/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package armstrong;
import java.util.Scanner;
/**
 *
 * @author Elkay
 */
public class Armstrong {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int temp,d,sum=0;
        temp = n;
        while(n!=0){
            d = n % 10;
            sum += d*d*d;
            n /= 10;
        }
        if(sum == temp)
            System.out.println("Armstrong number!");
        else
            System.out.println("Not an Armstrong number");
        
    }
    
}
