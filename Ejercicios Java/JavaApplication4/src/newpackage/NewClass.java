/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package newpackage;

import java.util.*;

/**
 *
 * @author Yoshitomi
 */
public class NewClass {
        public static void main(String[] args){
        Scanner s=new Scanner(System.in);
	String input=s.nextLine();
	int a=Integer.parseInt(input);
	input = s.nextLine();
	int b=Integer.parseInt(input);
	System.out.println(suma(a,b));
    }
	
	public static int suma(int a,int b){
		return (a+b);
	}
}
