/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Elkay
 */
public class Wrapper_Class {
    public static void main(String args[]){
        String s = "22";
        byte b = Byte.parseByte(s);
        b++;
        System.out.println(b);
        int i = Integer.parseInt(s);
        i+=10;
        System.out.println(i);
        double d = Double.parseDouble(s);
        d += 5;
        System.out.println(d);
        String s1 = Byte.toString(b);
        s1 += 1;
        System.out.println(s1);
        String s2 = Integer.toString(i);
        s2 += 1;
        System.out.println(s2);
        String s3 = Double.toString(d);
        s3 += 1;
        System.out.println(s3);
    }
}
