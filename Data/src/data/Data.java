/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package data;

/**
 *
 * @author Elkay
 */
public class Data {

    /**
     * @param args the command line arguments
     */
    int x;
    
    public static void main(String[] args) {
        // TODO code application logic here
        Data dd = new Data();
        System.out.println(dd.x);
        dd.x+=10;
        
        Data aa = new Data();
        System.out.println(aa.x);
        aa.x+=20;
        
        System.out.println(dd.x + "\t" + aa.x);
        
        swap(dd,aa);
        System.out.println(dd.x + "\t" + aa.x);
        
    }
    static void swap(Data r1, Data r2){
        int temp = r1.x;
        r1.x = r2.x;
        r2.x = temp;
    }
    
}
