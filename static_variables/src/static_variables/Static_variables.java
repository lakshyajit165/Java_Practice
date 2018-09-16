/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package static_variables;

/**
 *
 * @author Elkay
 */
public class Static_variables {

    /**
     * @param args the command line arguments
     */
    static int i = get();
    public static void main(String[] args) {
        // TODO code application logic here
       i++;
       System.out.println("I am in the main method!");
       System.out.println(i);
    }
    
    static int get(){
        System.out.println("I am in the get Method!");
        return 10;
    }
    
}
