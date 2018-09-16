/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tcs_ninja_2018;
import java.util.Scanner;
/**
 *
 * @author Elkay
 */
public class TCS_ninja_2018 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        
        int arr[] = new int[20001];
        for(int i = 0; i<20001; i++){
            if(i % 2 == 0)
                 arr[i] = i;
            else
                 arr[i] = arr[i-1]/2;
        }
        
        System.out.println(arr[n-1]);
    }
    
}
