/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dis;
import java.io.*;
/**
 *
 * @author Elkay
 */
public class DIS {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException
    {
        // TODO code application logic here
        DataInputStream dis = new DataInputStream(System.in);
        System.out.println("Enter your name");
        String name = dis.readLine();
        System.out.println("Enter the roll");
        int roll = Integer.parseInt(dis.readLine());
        System.out.println("Enter your fees");
        double fees = Double.parseDouble(dis.readLine());
        System.out.println("Name is: "+ name);
        System.out.println("Roll is: "+ roll);
        System.out.println("Fee is: "+ fees);
    }
    
}
