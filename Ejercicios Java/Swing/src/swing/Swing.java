/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package swing;

import javax.swing.*;
/**
 *
 * @author Yoshitomi
 */
public class Swing {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        String nombre;
        JOptionPane.showMessageDialog(null,"Hola mundo");   
        nombre=JOptionPane.showInputDialog("ingrese su nombre");
        JOptionPane.showMessageDialog(null, "Hola "+ nombre+"\ncomo estas!!!");
        
        Panel p=new Panel();
        
        JFrame aplicacion =new JFrame();
     /* 
        
        aplicacion.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        aplicacion.add(p);
        aplicacion.setSize(250,250);
        aplicacion.setVisible(true);
        
*/
        
    }
}
