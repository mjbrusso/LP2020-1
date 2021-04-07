// Adaptado de https://msdn.microsoft.com/en-us/library/dd264739.aspx

using System;

int n1 = 5, n2 = 50, n3 = 500;

//Console.WriteLine("Antes: " + n1 + ' ' + n2 + ' ' + n3);	
fn(n1, out n2, ref n3);
Console.WriteLine("Depois: " + n1 + ' ' + n2 + ' ' + n3);

static void fn(int a,           // Unidirecional de Entrada Variável
                out int b,      // Unidirecional de Saída
                ref int c       // Bidirecional de Entrada e Saída
               )                // C# não tem parâmetro unidirecional de entrada constante
{
    a *= 2;
    b = 100;        // b *= 2; não compila pois é só saída, então não entrou um valor
    c *= 2;
    Console.WriteLine("No método: " + a + ' ' + b + ' ' + c);
}


