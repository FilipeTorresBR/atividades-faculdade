class Atividade19{
    public static void main(String args[]){
        Runtime rt = Runtime.getRuntime();
        long mem = rt.freeMemory();
        System.out.println("Memoria Livre: " + mem);
        System.gc();
        mem = rt.freeMemory();
        System.out.println("Memoria Livre após execução do garbage collector: " + mem);
    }
}