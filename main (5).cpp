/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/* Problema II
Un caracol cae un pozo de H metros de profundidad. Este caracol durante el día asciende una distancia Ld metros, pero durante la noche, al quedarse dormido, resbala y asciende Ln metros. Diseñe un programa que simulando el movimiento del caracol para H, Ld y Ln dados por el usuario. El programa debe arrojar como resultado en cuantos días el caracol sale del pozo (si es que esto sucede). */


#include <iostream>

using namespace std;

int main()
{
    float H, Ld, Ln;
    float days = 0;
    
 cout << "Enter the height of the well : ";
    cin >> H;
    
    cout << "Enter as soon as the snail goes up : ";
    cin >> Ld;
    
    cout << "Enter when the snail slips : ";
    cin >> Ln;
    
    cout << "days: " << (H - Ln) / (Ld - Ln) << endl;
    
    
    return 0;
}
