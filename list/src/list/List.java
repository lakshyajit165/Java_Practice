/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package list;
import java.util.*;
/**
 *
 * @author Elkay
 */
public class List {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        ArrayList list = new ArrayList();
        
        list.add(1);
        list.add(2);
        list.add(3);
        list.remove(2);
        System.out.println(list.toString());
       /*String string = "isn't it a lovely day?";
       String[] split = string.split(" ");
       System.out.println(Arrays.toString(split));*/
       /*Random rnd = new Random();
       int r = rnd.nextInt(5)+1;
       System.out.print(r);*/
    }
    
}
