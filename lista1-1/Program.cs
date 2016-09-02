using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lista1_1
{
    class Program
    {
        static void Main(string[] args)
        {
            //OBJETOS JOGADORES
            jogador[] vjog = new jogador[3];
            
            vjog[0] = new jogador("Jotaro.");
            vjog[1] = new jogador("Josuke.");
            vjog[2] = new jogador("Jolyne.");


            for (int i = 0; i < vjog.Length; i++)
            {
                Console.WriteLine("\n||Jogador ", + i);
                Console.WriteLine("\n================================================================================");
                vjog[i].imprimir();
                vjog[i].atacar();
                vjog[i].defender();
                Console.WriteLine("\nPressione Qualquer Tecla Para Continuar.");
                Console.ReadLine();
                Console.Clear();
            }                 
            
            //OBJETOS INIMIGOS

            inimigo[] vini = new inimigo[3];
            vini[0] = new inimigo("Dio");
            vini[1] = new inimigo("Diavolo");
            vini[2] = new inimigo("Yoshikage Kira");

            for (int i = 0; i < vini.Length; i++ )
            { 
            Console.WriteLine("\n||Inimigo ", + i);
            Console.WriteLine("\n================================================================================");
            vini[i].imprimir();
            vini[i].atacar();
            vini[i].defender();
            Console.WriteLine("\nPressione Qualquer Tecla Para Continuar.");
            Console.ReadLine();
            Console.Clear();
            }

            //Média de forca dos jogadores e dos inimigos;
             mediaForçajogador(vjog);
             mediaForçainimigo(vini);

            //Média de ataque dos jogadores e dos inimigos;
             mediaAtaquejogador(vjog);
             mediaAtaqueinimigo(vini);

            //Média de velocidade dos jogadores e dos inimigos;
             mediaVelocidadejogador(vjog);
             mediaVelocidadeinimigo(vini);

            //Média da defesa dos jogadores e dos inimigos;
             mediaDefesajogador(vjog); 
             mediaDefesainimigo(vini);

            //Soma total de dinheiro dos jogadores e dos inimigos;
             somaDinheirojogadores(vjog);
             somaDinheiroinimigos(vini);

             Console.WriteLine("\nPressione Qualquer Tecla Para Continuar.");
             Console.ReadLine();
             Console.Clear();

            // Informe se são os jogadores ou os inimigos possuem maior média de ataque, de defesa e velocidade:            if(mediaAtaqueinimigo(vini) > mediaAtaquejogador(vjog))            {
                Console.WriteLine("\n");
                Console.WriteLine("||Inimigos possuem maior Média de Ataque!");
            }            else if(mediaAtaqueinimigo(vini) < mediaAtaquejogador(vjog))
            {
                Console.WriteLine("||Jogadores possuem maior Média de Ataque!");
               
            }            else if(mediaAtaqueinimigo(vini) == mediaAtaquejogador(vjog))
            {
                Console.WriteLine("\n");
                Console.WriteLine("||Ambos possuem a mesma Média de Ataque!");
            }            //Médias de defesa
            if (mediaDefesainimigo(vini) > mediaDefesajogador(vjog))
            {
                Console.WriteLine("||Inimigos possuem maior Média de Defesa!");    
            }

            else if (mediaDefesainimigo(vini) < mediaDefesajogador(vjog))
            {
                Console.WriteLine("\n");
                Console.WriteLine("||Jogadores possuem maior Média de Defesa!");
            }

            else if (mediaDefesainimigo(vini) == mediaDefesajogador(vjog))
            {
                Console.WriteLine("\n");
                Console.WriteLine("||Ambos possuem a mesma Média de Defesa!");
            }            //Média das velocidades
            if (mediaVelocidadeinimigo(vini) > mediaVelocidadejogador(vjog))
            {
                Console.WriteLine("\n");
                Console.WriteLine("||Inimigos possuem maior Média de Velocidade!");
            }

            else if (mediaVelocidadeinimigo(vini) < mediaVelocidadejogador(vjog))
            {
                Console.WriteLine("\n");
                Console.WriteLine("||Jogadores possuem maior Média de Velocidade!");
            }

            else if (mediaVelocidadeinimigo(vini) == mediaVelocidadejogador(vjog))
            {
                Console.WriteLine("\n");
                Console.WriteLine("||Ambos possuem a mesma Média de Defesa!");
            }

            Console.WriteLine("\nPressione Qualquer Tecla Para Sair.");
            Console.ReadLine();
            Console.Clear();
            
        }

        // FUNÇÕES DE MÉDIA E SOMA DOS JOGADORES, riar vetores, preenchelos com os objetos das classes desejadas e usar esses vetores para imprimir os dados e também nas funções.

        static float mediaForçajogador (jogador[] vjog)
        {
            float media = 0;
                for (int i = 0; i<vjog.Length;  i++)
                {
                    media += vjog[i].força;
                }

            media = (media / vjog.Length);
            Console.WriteLine("||Média da Força dos Jogadores: " + String.Format("{0:0.00}",(media / vjog.Length)));
            return media;
        }

      
        static float mediaAtaquejogador (jogador[] vjog)
       {
            float media = 0;
                for (int i =0; i<vjog.Length; i++)
                {
                    media += vjog[i].atk;
                }
            
            media = (media / vjog.Length);
            Console.WriteLine("||Média do Ataque dos Jogadores: " + String.Format("{0:0.00}", (media / vjog.Length)));
            return media;
       }

       
        static float mediaVelocidadejogador (jogador[] vjog)
       {
           float media = 0;
           for (int i = 0; i< vjog.Length; i++)
           {
               media += vjog[i].vel;
           }

           media = (media / vjog.Length);
           Console.WriteLine("||Média da Velocidade dos Jogadores: " + String.Format("{0:0.00}", (media / vjog.Length)));
           return media;
       }

        static float mediaDefesajogador (jogador[] vjog)
        {
            float media = 0;
            for (int i =0; i<vjog.Length;i++)
            {
                media += vjog[i].def;
            }

            media = (media / vjog.Length);
            Console.WriteLine("||Média da Defesa dos Jogadores: " + String.Format("{0:0.00}", (media / vjog.Length)));
            return media;
        }

        static float somaDinheirojogadores(jogador[] vjog)
       {
           float soma = 0;
           for (int i = 0; i < vjog.Length; i++)
           {
               soma += vjog[i].din;
           }

           Console.WriteLine("||Soma das Riquezas dos Jogadores: " + soma);
           return soma;
       }

        // FUNÇÕES DE MÉDIA E SOMA DOS INIMIGOS, criar vetores, preenchelos com os objetos das classes desejadas e usar esses vetores para imprimir os dados e também nas funções.

        static float mediaForçainimigo(inimigo[] vini)
        {
            float media = 0;
            for (int i = 0; i < vini.Length; i++)
            {
                media += vini[i].iforça;
            }

            media = (media / vini.Length);
            Console.WriteLine("||Média da Força dos Inimigos: " + String.Format("{0:0.00}", (media / vini.Length)));
            return media;
        }

        static float mediaAtaqueinimigo (inimigo[] vini)
        {
            float media = 0;
            for (int i = 0; i < vini.Length; i++)
            {
                media += vini[i].iatk;
            }

            media = (media / vini.Length);
            Console.WriteLine("||Média do Ataque dos Inimigos: " + String.Format("{0:0.00}",(media / vini.Length)));
            return media;
        }

        static float mediaVelocidadeinimigo(inimigo[] vini)
        {
            float media = 0;
            for (int i = 0; i < vini.Length; i++)
            {
                media += vini[i].ivel;
            }

            media = (media / vini.Length);
            Console.WriteLine("||Média da Velocidade dos Inimigos: " + String.Format("{0:0.00}", (media / vini.Length)));
            return media;
        }

        static float mediaDefesainimigo (inimigo[] vini)
        {
            float media = 0;
            for (int i = 0; i < vini.Length; i++)
            {
                media += vini[i].idef;
            }

            media = (media / vini.Length);
            Console.WriteLine("||Média da Defesa dos Inimigos: " + String.Format("{0:0.00}", (media / vini.Length)));
            return media;
        }

        static float somaDinheiroinimigos(inimigo[] vini)
        {
            float soma = 0;
            for (int i = 0; i < vini.Length; i++)
            {
                soma += vini[i].idin;
            }

            Console.WriteLine("||Soma das Riquezas dos Inimigos: " + soma);
            return soma;
        }
    }
}

