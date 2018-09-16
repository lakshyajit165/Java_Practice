/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package call_main_by_user;

/**
 *
 * @author Elkay
 */
public class Call_Main_By_User {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("I am inside the main method!");
    }
    static{
        System.out.println("I am in the class block!");
        String ss[] = null;
        Call_Main_By_User.main(ss);
        System.out.println("I quit the class block!");
    }
    
}
