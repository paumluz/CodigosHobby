using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lista1_2final
{
    public class Conta
    {
        public string nomeCliente;
        public double saldo;

        public Conta()
        {

        }

        //Método que preenche as contas em si
        public void Registro()
        {
            Console.WriteLine("Por favor, informe o Nome: ");
            nomeCliente = Console.ReadLine();

            Console.WriteLine("Por favor, informe o Saldo: ");
            saldo = Convert.ToInt32(Console.Read());

        } 
    }
}
