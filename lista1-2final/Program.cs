using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lista1_2final
{
    class Program
    {
        static void Main(string[] args)
        {
            float contador;
            Banco bancoExemplo = new Banco();
            Conta contaExemplo = new Conta();

            //Chama o método que define o número de contas
            contador = bancoExemplo.novoArray();
            Console.WriteLine("Numero de Contas: " + contador);
            Console.WriteLine("============================================");
            Console.WriteLine("Pressione qualquer tecla para continuar...");
            Console.ReadLine();
            Console.Clear();

            //Preencher o Array
             for (int i = 0; i <contador; i++)
            {
                contaExemplo = new Conta();
                contaExemplo.Registro();

                Banco.arrayContas[i] = contaExemplo; 
                Console.WriteLine("\n=========================================");
                Console.ReadLine();
            }

            //Mostra qual tem mais dinheiro
             double maiorSaldo = 0;
             int posicaoCliente = 0;

             for (int j = 0; j < contador; j++)
             {
                     if (Banco.arrayContas[j].saldo > maiorSaldo)
                     {
                         maiorSaldo = Banco.arrayContas[j].saldo;
                         posicaoCliente = j;
                     }
              }

             Console.WriteLine("\nO cliente com mais Saldo na conta é: " + Banco.arrayContas[posicaoCliente].nomeCliente);
             Console.WriteLine("============================================");
             Console.WriteLine("Pressione qualquer tecla para sair...");
             Console.ReadLine();
             Console.Clear(); 
       
         }

    }
    }



