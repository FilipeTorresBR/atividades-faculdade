class Atividade24{
    public static void main(String args[]){
        Pessoa p = new Pessoa("Luis", "231232423");
        //System.out.println("Nome: "+ p.Nome);
        //System.out.println("Telefone: "+ p.Telefone);
        p.mudaNome("Filipe");
        System.out.println("Nome: "+ p.leNome());
        System.out.println("Telefone: "+ p.leTelefone());
        
    }
}
class Pessoa{
    private String Nome;
    private String Telefone;

    Pessoa(){
        Nome = "";
        Telefone = "";
    }
    Pessoa(String N, String T){
        Nome = N;
        Telefone = T;
    }
    public void mudaNome(String Nome){
        this.Nome = Nome; 
    }
    public String leNome(){
        return Nome;
    }
    public String leTelefone(){
        return Telefone;
    }
}