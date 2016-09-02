using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// Nome: Tasso Luz Saraiva, Análise e Desenvolvimento de Sistemas.

namespace Magos
{
    class Program
    {
        static void Main(string[] args)
        {
            //Magos
            Console.WriteLine("=====MAGOS=====");   

            Mago mGandalf = new Mago("Gandalf", "Maia", 250, 400, 20, 98, 120);
                mGandalf.atacar();
                mGandalf.defender();
                mGandalf.conjurar();
                Console.WriteLine("\n");
            
            Mago harryP = new Mago("Harry Potter", "Hogwarts", 190, 300, 30, 102, 108);
                harryP.atacar();
                harryP.defender();
                harryP.conjurar();
                Console.WriteLine("\n");    

            Mago mestreMago = new Mago("Mestre dos Magos", "Caverna do Dragão", 400, 320, 10, 60, 112);
                mestreMago.atacar();
                mestreMago.defender();
                mestreMago.conjurar();
                Console.WriteLine("\n");
            
            Mago mickeyM = new Mago("Mickey Mouse", "Disney", 224, 190, 90, 200, 100);
                mickeyM.atacar();
                mickeyM.defender();
                mickeyM.conjurar();
                Console.WriteLine("\n");
                
            Mago mSaruman = new Mago("Saruman", "Mordor", 280, 400, 22, 94, 120);
                mSaruman.atacar();
                mSaruman.defender();
                mSaruman.conjurar();
                Console.WriteLine("\n");

            Console.WriteLine("Pressione uma tecla para continuar...");
            Console.ReadLine();
            Console.Clear();

            //Guerreiros
            Console.WriteLine("=====GUERREIROS=====");

            Guerreiro gFrodo = new Guerreiro("Frodo", "Punhal", 200, 20, 220, 190, 110);
            gFrodo.atacar();
            gFrodo.defender();
            gFrodo.esquiva();
            Console.WriteLine("\n");

            Guerreiro gLink = new Guerreiro("Link", "Espada", 220, 36, 210, 250, 120);
            gLink.atacar();
            gLink.defender();
            gLink.esquiva();
            Console.WriteLine("\n");  

            Guerreiro gGimli = new Guerreiro("Gimli", "Machado", 300, 10, 240, 200, 100);
            gGimli.atacar();
            gGimli.defender();
            gGimli.esquiva();
            Console.WriteLine("\n");  

            Console.WriteLine("Pressione uma tecla para sair...");
            Console.ReadLine();
            Console.Clear();

            //Arqueiros

            Arqueiro aLegolas = new Arqueiro("Legolas", "Vento", 120, 50, 300, 300, 40);
            aLegolas.atacar();
            aLegolas.esquivar();
            aLegolas.encantarFlecha();
            Console.WriteLine("\n");  

            Arqueiro aZelda = new Arqueiro("Zelda", "Água", 220, 35, 230, 200, 60);
            aZelda.atacar();
            aZelda.esquivar();
            aZelda.encantarFlecha();
            Console.WriteLine("\n");  

            Arqueiro aEllie = new Arqueiro("Ellie", "Fogo", 190, 40, 220, 290, 100);
            aEllie.atacar();
            aEllie.esquivar();
            aEllie.encantarFlecha();
            Console.WriteLine("\n");  

            Console.WriteLine("Pressione uma tecla para sair...");
            Console.ReadLine();
            Console.Clear();
        }
    }
}
