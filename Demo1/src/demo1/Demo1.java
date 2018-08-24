/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package demo1;

/**
 *
 * @author Elkay
 */
public class Demo1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        call(args);
    }
    public static void call(String ss[]){
        System.out.println("Retrieving the command line arguments\n");
        int size = ss.length;
        for(int i = 0; i<size; i++){
            System.out.println(ss[i]);
        }
    }
    
}
