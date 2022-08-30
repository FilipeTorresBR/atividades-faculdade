class Atividade5{
    public static void main(String args[]){
        int quantidade = 3;

        for(int x = 0; x < quantidade; x++){
            for(int y=0; y <= x; y++){
                System.out.print('*');
            }
            System.out.print("\n");
        }
    }
}