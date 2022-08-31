import java.io.*;
import java.util.*;
class Atividade25{
    public static void main(String args[]){
        try{
            InputStreamReader ISRin = new InputStreamReader(System.in);
            BufferedReader in = new BufferedReader(ISRin);

            List <Cliente> lista = new LinkedList <Cliente> ();
            System.out.println("Insira o nome: ");
            String nome = in.readLine();

            System.out.println("Insira o telefone: ");
            String telefone = in.readLine();
            while(!nome.equalsIgnoreCase("fim")){
                Cliente c = new Cliente();
                c.setNome(nome);
                c.setTelefone(telefone);
                lista.add(c);

                System.out.println("Insira o nome: ");
                nome = in.readLine();
                
                System.out.println("Insira o telefone: ");
                telefone = in.readLine();
            }

            Iterator it = lista.iterator();
            while(it.hasNext()){
                Cliente cli = (Cliente) it.next();
                System.out.println("Nome: " + cli.getNome() + "\nTelefone: " + cli.getTelefone());
            }
        }catch(IOException e){
            System.out.println(e);
        }
    }
}

class Cliente{
    private String Nome;
    private String Telefone;

    public void setNome(String Nome){
        this.Nome = Nome;
    }    
    public void setTelefone(String Telefone){
        this.Telefone = Telefone;
    }
    public String getNome(){
        return Nome;
    }
    public String getTelefone(){
        return Telefone;
    }    
}