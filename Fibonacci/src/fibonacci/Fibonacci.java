/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fibonacci;
import java.util.Scanner;
/**
 *
 * @author Elkay
 */
public class Fibonacci {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        Fibo(n);
        
    }
    public static void Fibo(int x){
        
        int a = 0, b = 1,nt;
        if(x == 1)
             System.out.print(x+" ");
        else{
            
             System.out.print(a+" "+b+" ");
            
                for(int i = 2; i<x; i++){
                    nt = a + b;
                    a = b;
                    b = nt;
                    System.out.print(nt+" ");
                
            }
        }
    }
    
}
