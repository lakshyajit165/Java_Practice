/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package non_static_blocks;

/**
 *
 * @author Elkay
 */
public class Non_Static_Blocks {

    /**
     * @param args the command line arguments
     */
    int a = get();
    {
        System.out.println("I am in the object block");
        a++;
    }
    Non_Static_Blocks(){
        System.out.println("Object is constructed");
        a++;
    }
    public int get(){
        System.out.println("I am in the get method");
        return 5;
    }
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("I am in the main menthod!");
        Non_Static_Blocks x = new Non_Static_Blocks();
        System.out.println(x.a);
    }
    
    {
        System.out.println("I am in the 2nd object block!");
    }
}
