import util.sc
public class estrutura1{
    
    public static void main(String[] args) {

        String nome = "Paulo";
        String idade = "31/02/3001";
        String sexo = "translúcido";

        Pessoa pessoa1 = new Pessoa(nome, idade, sexo);

        System.out.println(pessoa1.nome);
        System.out.println(pessoa1.idade);
        System.out.println(pessoa1.sexo);
    }

}
