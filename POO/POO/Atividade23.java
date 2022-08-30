class Atividade23{
    public static void main(String args[]){
        Robo.quantos = 0;

        Robo cnc,cnc2;
        System.out.println(Robo.quantos);

        cnc = new Robo(10, 12);
        System.out.println(Robo.quantos);

        cnc = new Robo(11, 12);
        System.out.println(Robo.quantos);

    }
}

class Robo{
    public int x;
    public int y;
    public static int quantos;
    
    public Robo(int ax, int ay){
        x = ax;
        y = ay;
        quantos++;
    }
}