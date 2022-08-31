import java.io.*;
import java.util.*;
class SistemaBanco{
    public static main(String args[]){
        try{
            InputStreamReader ISRin = new InputStreamReader(System.in);
            BufferedReader in = new BufferedReader(ISRin);

            List <Cliente> listaClientes = new LinkedList <Cliente> ();
            List <Conta> listaClientes = new LinkedList <Conta> ();
            System.out.println("0 - Sair\n1 - Cadastrar cliente");
            String menu_cadastro = in.readLine();
            String menu_conta = valueOf("");
            String generic_input = valueOf("");
            System.out.println("Insira o nome: ");
            nome = in.readLine();
            
            System.out.println("Insira o email: ");
            email = in.readLine();
            while(!menu_cadastro.equalsIgnoreCase('0') || !menu_cadastro.equalsIgnoreCase('sair') ){
                Cliente cliente = new Cliente();
                cliente.setNome(nome);
                cliente.setEmail(email); 
                
                System.out.println("Voce deseja criar uma conta?:\n1 - Sim, 0 - Não");
                menu_conta = in.readLine();
                while(!menu_conta.equalsIgnoreCase('0')){
                    System.out.println("Criar conta corrente ou conta poupança?:\n0 - Corrente, 1 - Poupança");
                    generic_input = in.readLine();
                    if(generic_input.equalsIgnoreCase('0')){
                        System.out.println("Contas Corrente estão sujeitas ao CPMF de 0,38% por transação");
                        cliente =
                    }else{

                    }
                }   

                listaClientes.add(cliente);
            }            
        }catch(IOException e){
            System.out.println(e);
        }
    }
}

class Cliente{
    private nome;
    private email;

    public void setNome(String Nome){
        this.nome = Nome;
    }
    public void setEmail(String Email){
        this.email = Email;
    }
}
abstract class Conta extends Cliente{
    private double saldo = 0.0;

    public void setDepositar(double Saldo){
        this.saldo += Saldo;
    }
    public double getSaldo(){
        return saldo;
    }
}
class ContaCorrente extends Conta{
    private double limite;
    
    public void double getSaldo(){
        //subtrair cpmf
        return saldo + limite;
    }
}
class ContaPoupanca extends Conta{
    private double limite;
    
    public void double getSaldo(){
        return saldo;
    }
}