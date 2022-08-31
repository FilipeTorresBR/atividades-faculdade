import java.io.*;
class Atividade13{
    public static void main(String args[]){
        try{
            InputStreamReader ISRin = new InputStreamReader(System.in);
            BufferedReader in = new BufferedReader(ISRin);
            String s = in.readLine();

            while(!s.equalsIgnoreCase("Fim")){
                System.out.println(s);
                s = in.readLine();
            }
        }catch(IOException e){
            System.out.println(e);
        }
    }   
}