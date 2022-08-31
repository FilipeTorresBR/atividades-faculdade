class Atividade8{
    public static void main(String args[]){
        double r = Math.random() * 10;
        int ir = (int) r;

        switch (ir){
            case 0: case 1: case 2: case 3:
                System.out.println(ir + " está no grupo A");
                break;
            case 4:case 5:case 6:case 7:
                System.out.println(ir + " está no grupo B");
                break;
            case 8:case 9:
                System.out.println(ir + " está no grupo C");
                break;
        }
    }
}