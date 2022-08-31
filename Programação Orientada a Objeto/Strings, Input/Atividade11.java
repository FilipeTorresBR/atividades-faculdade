import java.io.*;
class Atividade11{
    public static void main(String args[]){
        InputStreamReader ISRin = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ISRin);
        
        try{
            System.out.println("Digite algo");
            String s = in.readLine();
            System.out.println(s);
        }catch(IOException e){
            System.out.println(e);
        }
    }
}