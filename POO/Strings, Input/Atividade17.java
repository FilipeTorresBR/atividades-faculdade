import java.io.*;
class Atividade17{
    public static void main(String args[]){
        try{
            InputStreamReader ISRin = new InputStreamReader(System.in);
            BufferedReader in = new BufferedReader(ISRin);


            System.out.println("O que voce gostaria de fazer?");                
            System.out.println("1 - Dividir\n2 - Somar\n3 - Subtrair\n4 - Multiplicar\nFim - Sair do programa");
            String s = in.readLine();

            System.out.println("Insira o primeiro numero: ");
            int n1 = Integer.parseInt(in.readLine());
            System.out.println("Insira o segundo numero: ");
            int n2 = Integer.parseInt(in.readLine());
            
            ){   
                switch(s){
                    case "1":
                        try{
                            float resultado = n1 / n2;
                            System.out.println("O resultado é: " + resultado);
                        }catch(ArithmeticException e){
                            System.out.println(e);
                        }
                        break;
                    case "2":
                        try{
                            float resultado = n1 + n2;
                            System.out.println("O resultado é: " + resultado);
                        }catch(ArithmeticException e){
                            System.out.println(e);
                        }
                        break;
                    case "3":
                        try{
                            float resultado = n1 - n2;
                            System.out.println("O resultado é: " + resultado);
                        }catch(ArithmeticException e){
                            System.out.println(e);
                        }     
                        break;           
                    case "4":
                        try{
                            float resultado = n1 * n2;
                            System.out.println("O resultado é: " + resultado);
                        }catch(ArithmeticException e){
                            System.out.println(e);
                        }
                        break;                       

                }
            }else{
                System.out.println("Bye ;)");
            }
        }catch(IOException e){
            System.out.println(e);
        }
    }
}