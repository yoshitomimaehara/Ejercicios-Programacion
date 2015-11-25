/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication5;
import java.util.*;
/**
 *
 * @author Yoshitomi
 */
public class JavaApplication5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int num;
        ArrayList list=new ArrayList();
        Scanner ingreso=new Scanner(System.in);
        do{
        String s=ingreso.next();
        num=Integer.parseInt(s);
        if(num!=0){
        list.add(num);
        }
        }while(num!=0);
        System.out.println("\n");
        for(int i=0;i<list.size();i++){
            System.out.println(list.get(i));
        }
    }
}
