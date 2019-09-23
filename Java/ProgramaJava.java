import java.util.Scanner;

public class ProgramaJava 
{
    public static void main(String[] args) {
        //se crea un objeto llamado entrada que recibe los datos
        Scanner entrada = new Scanner (System.in);
        int opcion, numero1, numero2, resultado;
        System.out.println("Bienvenido a mi calculadora");
        System.out.println("Seleccione una operación:\n 1. suma \n 2. resta \n 3. multiplicación \n 4. División");
        
        opcion = entrada.nextInt();
        System.out.println("Ingresa el primer número:");
        numero1 = entrada.nextInt();
        System.out.println("Ingresa el segundo número:");
        numero2 = entrada.nextInt();
        
        
        if (opcion == 1) {
            
           resultado = numero1 + numero2;
           System.out.println("El resultado de la operación: "+resultado);    
             
            
        } else if (opcion == 2) {
            
           resultado = numero1 - numero2;
           System.out.println("El resultado de la operación: "+resultado);
           
        } else if (opcion == 3) {
            
           resultado = numero1 * numero2;
           System.out.println("El resultado de la operación: "+resultado);             
            
        } else if (opcion == 4) {
            
           resultado = numero1 / numero2;
           System.out.println("El resultado de la operación: "+resultado);             
            
        } else {
            System.out.println("no hay opciones disponibles");
        }
        
    }
}
