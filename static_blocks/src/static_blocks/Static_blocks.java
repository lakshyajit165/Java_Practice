/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package static_blocks;

/**
 *
 * @author Elkay
 */
public class Static_blocks {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("I am inside Main");
    }
    static{
        System.out.println("I am in the class block");
        String ss[] = null;
        Static_blocks.main(ss);
        System.out.println("I quit the class block");
    }
    
}
