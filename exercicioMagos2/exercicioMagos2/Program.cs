using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
//Aluno: Tasso Luz Saraiva //alu201460266

namespace exercicioMagos2
{
    class Program
    {
        static public Random rand = new Random();

        static void Main(string[] args)
        {
            Mago[] arrayM;
            arrayM = new Mago[10];

            string[] nomeMagos;
            nomeMagos = new string[10] { "Tasso", "Matheus Show", "Lola", "Altamir", "Gui", "Bob Esponja", "Dilma", "Neymar", "Pelé", "Josiane" };

            string[] nomeEscola;
            nomeEscola = new string[3] { "Uniritter", "Escolinha do Barulho", "Skola" };

            for(int i=0; i<arrayM.Length;i++)
            {
                arrayM[i] = new Mago(nomeMagos[i], nomeEscola[rand.Next(0,nomeEscola.Length)], rand.Next(80, 100), 
                    rand.Next(0, 20), rand.Next(0, 20), rand.Next(0, 20), rand.Next(0, 20));
            }

            Batalha batalha1 = new Batalha();
           
            Console.WriteLine("\nEscolha um Mago: ");
            batalha1.personagem1 = escolhaM(arrayM);
            batalha1.personagem2 = arrayM[3];

            batalha1.Lutar();

        }

        static Mago escolhaM(Mago[] array2)
        {
            int posicao;
            for (int i = 0; i < array2.Length; i++ )
            {
                Console.WriteLine((i+1) + " ||" + array2[i].nome + " || " + array2[i].escola);
            }
            posicao = Convert.ToInt32(Console.ReadLine());

            if(posicao > 0 && posicao < array2.Length+1)
            {
                return array2[posicao-1];
            }

            Console.WriteLine("Mago inválido! Informe outro mago!");
            Console.Clear();
            escolhaM(array2);
              return null;
        }
    }
}
