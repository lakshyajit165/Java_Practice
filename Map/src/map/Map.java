/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package map;
import java.util.*;
/**
 *
 * @author Elkay
 */
public class Map {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        HashMap map = new HashMap();
        map.put(100, "abc");
        map.put(101,"xyz");
        map.put(102, "pqr");
        
        //random number
        Random rand = new Random();
        int rand_num = rand.nextInt(20)+1;
        
        System.out.println(map.get(101));
        System.out.println(map.toString());
        System.out.println(map.size());
        
        System.out.println(rand_num);
    }
    
}
