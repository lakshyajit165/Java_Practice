/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java_constructors;

/**
 *
 * @author Elkay
 */
public class Java_Constructors {

    /**
     * @param args the command line arguments
     */
    
    int data = get();
    
    public Java_Constructors(){
        data++;
        System.out.println("I am in the constructor");
    }    
    public int get(){
        System.out.println("I am in the get method");
        return 10;
    }

    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Java_Constructors d= new Java_Constructors();
        System.out.println("Data Value for the first object is "+ d.data);
        
        Java_Constructors d2= new Java_Constructors();
        d2.data+=3;
        System.out.println("Data Value for the 2nd object is "+d2.data);
    }
    
}
