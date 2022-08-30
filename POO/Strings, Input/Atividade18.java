import java.io.*;
class Atividade18{
    public static void main(String args[]){
        try{
            InputStreamReader ISRin = new InputStreamReader(System.in);
            BufferedReader in = new BufferedReader(ISRin);

            //System.out.println("O que você gostaria de fazer?\n1 - Quantidade de cidades\n2 - Cadastrar cidades\n3 - Cadastrar distancias entre cidades\n4 - Sair");
            
            System.out.println("Quantas cidades você deseja cadastrar?");
            String s = in.readLine();
            int qtd_cidades = Integer.parseInt(s);
            String [] cidadesArray = new String [qtd_cidades];
            int [][] distancia = new int [qtd_cidades][qtd_cidades];
            for(int x=0; x<qtd_cidades;x++){
                System.out.println("Qual o nome da cidade");
                cidadesArray[x] = in.readLine();
            }
            System.out.println("Agora vamos cadastrar a distancia entre elas.");
            for(int x=0;x<qtd_cidades;x++){
                for(int y=0;y<=x;y++){
                    if(distancia[x][y] == 0 && distancia[y][x] == 0 && x!=y){
                        System.out.println("Qual a distancia da cidade " + x + " para a cidade" + y + "?");
                        s = in.readLine();
                        distancia[x][y] = Integer.parseInt(s);
                        distancia[y][x] = distancia[x][y]; 
                    }
                }
            }
            System.out.println("Consultar alguma cidade\n1 - Sim");
            s = in.readLine();
            int consultar = Integer.parseInt(s);
            

            while(consultar == 1){
                System.out.println("Cidade 1");
                s = in.readLine();
                int cidade1 = Integer.parseInt(s);
            
                System.out.println("Cidade 2");
                s = in.readLine();
                int cidade2 = Integer.parseInt(s);

                System.out.println("A distancia da cidade " + cidadesArray[cidade1] + " para a cidade " + cidadesArray[cidade2] + " é " + distancia[cidade1
                ][cidade2]);
            }


        }catch(IOException e){
            System.out.println(e);
        }


    }
}