// C# Script
// Adaptado de https://msdn.microsoft.com/en-us/library/dd264739.aspx

using System;
float bmi = CalculateBMI(70.0f, 1.75f); // Posicional
Console.WriteLine(bmi);

bmi = CalculateBMI(massa: 64f, altura: 1.50f);  // Por palavra-chave ("named arguments" em C#)
Console.WriteLine(bmi);
bmi = CalculateBMI(altura: 1.50f, massa: 64f);
Console.WriteLine(bmi);

bmi = CalculateBMI(80f, altura: 1.83f);
Console.WriteLine(bmi);

// bmi = CalculateBMI(massa: 80f, 1.83f); // error CS1738: Named arguments must appear after the positional arguments

static float CalculateBMI(float massa, float altura)
{
    return massa / (altura * altura);
}

