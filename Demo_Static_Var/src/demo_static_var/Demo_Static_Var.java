/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package demo_static_var;

/**
 *
 * @author Elkay
 */
public class Demo_Static_Var {

    /**
     * @param args the command line arguments
     */
    static int i = get();
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("I am in the main method");
        i++;
        System.out.println(i);

    }
    static int get(){
        System.out.println("I am in the get method");
        return(10);
    }
    
}
