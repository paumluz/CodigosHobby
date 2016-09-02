using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
//Aluno: Tasso Luz Saraiva //alu201460266
namespace exercicioMagos2
{
    class Batalha
    {
        public Mago personagem1, personagem2;

        public void Lutar()
        {
            ACAO ac = ACAO.ATACAR;
            do{

                ac = escolhaUser();
                switch(ac)
                {
                    case ACAO.ATACAR:
                        personagem1.Ataque(personagem2);
                        personagem2.Ataque(personagem1);
                    break;

                    case ACAO.DEFENDER:
                        personagem1.Defesa(personagem2);
                    break;
                }
            
            }while(personagem1.isVivo && personagem2.isVivo);

            Console.WriteLine("\tBatalha terminou!");
            Console.ReadLine();
            
            if(personagem1.isVivo)
            {
                Console.WriteLine(personagem1 + " VENCEU!");
            }

            else
            {
                Console.WriteLine(personagem2 + " VENCEU!");
            }
        }
        
        private ACAO escolhaUser()
        {
            char resposta;
            Console.WriteLine("\n\tMENU DE JOGO");
            Console.WriteLine("\nEscolha sua AÇÃO: ");
            Console.WriteLine("\nDigite 1 Para Atacar");
            Console.WriteLine("\nDigite 2 Para Defender");
            resposta = Convert.ToChar(Console.ReadLine());
            Console.Clear();

            switch(resposta)
            {
                case '1':

                    return ACAO.ATACAR;              

                case '2':
                    return ACAO.DEFENDER;              

                default: Console.WriteLine("Opção Inválida! Digite novamente!");
                         Console.Clear();
                         Console.ReadLine();
                         escolhaUser();
                break;
            }

            return ACAO.ATACAR;
        }
    }
}

enum ACAO
{
    ATACAR, 
    DEFENDER
}