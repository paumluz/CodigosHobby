using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lista1_2final
{
    public class Banco
    {
        //Array de contas 
        public static Conta[] arrayContas = new Conta[250];
        public Banco()
        {
        }

        //Método que inicializará o array
        public float novoArray()
        {
            int num;
            Console.WriteLine("Digite o número total de contas: ");
            num = Convert.ToInt32(Console.ReadLine());
            return num;
        }

    }
}
