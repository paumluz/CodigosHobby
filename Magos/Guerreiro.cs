using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Magos
{
    class Guerreiro
    {
        string nome, arma;
        int hp, mp, atk, agi, def;

        public Guerreiro(string defineNome, string defineArma, int defineHp, int defineMp, int defineAtk, int defineAgi, int defineDef)
        {
            nome = defineNome;
            arma = defineArma;
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

        public void esquiva()
        {
            Console.WriteLine("{0} - Se esquivou!", nome);
        }
    }
}
