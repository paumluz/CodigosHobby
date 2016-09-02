using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Magos
{
    class Arqueiro
    {
        string nome, elemento;
        int hp, flechas, atk, agi, def;

        public Arqueiro(string defineNome, string defineElemento, int defineHp, int defineFlecha, int defineAtk, int defineAgi, int defineDef)
        {
            nome = defineNome;
            elemento = defineElemento;
            hp = defineHp;
            flechas = defineFlecha;
            atk = defineAtk;
            agi = defineAgi;
            def = defineDef;
        }

        public void atacar()
        {
            Console.WriteLine("{0} - Atacou!", nome);
        }

        public void esquivar()
        {
            Console.WriteLine("{0} - Esquivou!", nome);
        }

        public void encantarFlecha()
        {
            Console.WriteLine("{0} - Flecha Elemental!", nome);
        }
    }
}
