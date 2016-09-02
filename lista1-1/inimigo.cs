using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lista1_1
{
   public class inimigo
    {
        public int iforça, idef, ivel, iatk;
        public float idin;
        public string inome;
        public static Random rnd = new Random();

        public inimigo(string newNome)
        {
            inome = newNome;
            gerar();
        }

       public void atacar()
       {
           Console.WriteLine("\nInimigo Atacou!");
       }

       public void defender()
       {
           Console.WriteLine("\nInimigo Defendeu!");
       }

       private void gerar()
       {
           iatk = rnd.Next(0, 20);
           idef = rnd.Next(0, 20);
           iforça = rnd.Next(0, 20);
           ivel = rnd.Next(0, 20);
           idin = rnd.Next(0, 9999);

       }

       public void imprimir()
       {
           Console.WriteLine("||Nome: " + inome);
           Console.WriteLine("||Ataque: " + iatk);
           Console.WriteLine("||Defesa: " + idef);
           Console.WriteLine("||Força: " + iforça);
           Console.WriteLine("||Velocidade: " + ivel);
           Console.WriteLine("||Riquezas: " + idin);
       }
    }
}
