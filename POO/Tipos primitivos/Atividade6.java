class Atividade6{
    public static void main(String args[]){
        int quantidade = 3;

        for(int x = 0; x < quantidade; x++){
            for(int y=quantidade; y > x; y--){
                System.out.print('*');
            }
            System.out.print("\n");
        }
    }
}