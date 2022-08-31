class Atividade26{
    public static void main(String args[]){
        System.out.println("Hierarquia e polimorfismo");
        Mamifero mamifero1 = new Elefante();
        System.out.println("Cota diria do Elefante: " + mamifero1.obterCotaDiariaDeLeite());

        Mamifero mamifero2 = new Rato();
        System.out.println("Cota diria do Rato: " + mamifero2.obterCotaDiariaDeLeite());
    }
}

abstract class Mamifero{
    public abstract double obterCotaDiariaDeLeite();
}
class Elefante extends Mamifero{
    public double obterCotaDiariaDeLeite(){
        return 20.0;
    }
}
class Rato extends Mamifero{
    public double obterCotaDiariaDeLeite(){
        return 0.5;
    }
}
