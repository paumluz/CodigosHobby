using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace referencias
{
    class Program
    {
        static void Main(string[] args)
        {
            int dinheiro = 10;
            ZeraValor(dinheiro);
            Console.WriteLine(ref dinheiro);
        }
        void ZeraValor(ref int valor)
        {
            valor = 0;
        }
    }
}
