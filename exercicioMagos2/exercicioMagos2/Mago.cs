using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
//Aluno: Tasso Luz Saraiva //alu201460266
namespace exercicioMagos2
{
    class Mago
    {
        public string nome, escola;
        private int vida, mana, forca, agilidade, defesa;
        public bool isVivo
        {
            get
            {
                return vida > 0;
            }
        }

        public Mago(string defineNome, string defineEscola, int defineVida, int defineMana, int defineForca, int defineAgilidade, int defineDefesa)
        {
            nome = defineNome;
            escola = defineEscola;
            vida = defineVida;
            mana = defineMana;
            forca = defineForca;
            agilidade = defineAgilidade;
            defesa = defineDefesa;
        }

        public void sofreuDano(int dano)
        {
            this.vida -= dano;
            Console.WriteLine(this.nome + " sofreu " + dano + " de dano!");
        }

        public void Defesa(int dano )
        {
            int danoFinal = (dano - defesa);

            if(danoFinal >=0)
            {
                this.vida -= danoFinal;
                Console.WriteLine(this.nome + " sofreu !" + danoFinal + " de dano!");
            }
             else
            {
                Console.WriteLine(this.nome + " não sofreu dano!");
            }
        }

        internal void Ataque(Mago personagem2)
        {
            personagem2.sofreuDano(this.forca);
            Console.WriteLine(this.nome + " atacou  " + personagem2.nome + " com sucesso!");
            Console.WriteLine("\n");
            
        }

        internal void Defesa(Mago personagem1)
        {
            Defesa(personagem1.forca);
        }
    }
}
