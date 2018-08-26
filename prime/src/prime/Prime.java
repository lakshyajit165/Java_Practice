/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package prime;
import java.util.Scanner;
/**
 *
 * @author Elkay
 */
public class Prime {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int flag = 0;
        Scanner s = new Scanner(System.in);
        int number = s.nextInt();
        for(int i = 2; i<number/2; i++)
        {
            if(number%i == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            System.out.println("It is prime!");
        else
            System.out.println("It is not prime!");
        
    }
    
}
