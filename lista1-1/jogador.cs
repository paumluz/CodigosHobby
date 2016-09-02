using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lista1_1
{
   public class jogador
    {
        public int força, def, vel, atk;
        public float din;
        public string nome;
        public static Random rnd = new Random();

        public jogador(string newNome)
        {
            nome = newNome;
            gerar();
        }

       public void atacar()
       {
           Console.WriteLine("\nJogador Atacou!");
       }

       public void defender()
       {
           Console.WriteLine("\nJogador Defendeu!");
       }

       private void gerar()
       {
           atk = rnd.Next(0, 20);
           def = rnd.Next(0, 20);
           força = rnd.Next(0, 20);
           vel = rnd.Next(0, 20);
           din = rnd.Next(0, 9999);

       }
       public void imprimir()
       {
           Console.WriteLine("||Nome: " + nome);
           Console.WriteLine("||Ataque: " + atk);
           Console.WriteLine("||Defesa: " + def);
           Console.WriteLine("||Força: " + força);
           Console.WriteLine("||Velocidade: " + vel);
           Console.WriteLine("||Riquezas: " + din);
       }
    }
}
