using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Magos
{
    class Mago
    {
        string nome, escola;
        int hp, mp, atk, agi, def;

        public Mago(string defineNome, string defineEscola, int defineHp, int defineMp, int defineAtk, int defineAgi, int defineDef)
        {
            nome = defineNome;
            escola = defineEscola;
            hp = defineHp;
            mp = defineMp;
            atk = defineAtk;
            agi = defineAgi;
            def = defineDef;
        }

        public void atacar()
        {
            Console.WriteLine("{0} - Atacou!", nome);   
        }

        public void defender()
        {
            Console.WriteLine("{0} - Defendeu!", nome);
        }

        public void conjurar()
        {
            Console.WriteLine("{0} - Conjurou uma magia!", nome);
        }
    }
}
