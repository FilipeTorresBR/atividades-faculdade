import java.io.*;
class Atividade15{
    public static void main(String args[]){

        try{
            InputStreamReader ISRin = new InputStreamReader(System.in);
            BufferedReader in = new BufferedReader(ISRin);
            String s = in.readLine();

            System.out.println(s.replace("a", "#"));
        }catch(IOException e){
            System.out.println(e);
        }

    }
}