#include <iostream>
int main()
{
    int x{ 2 }; // variable local, no linkage, no vinculada

    {
        int x{ 3 }; // este identificador x se refiere a un objeto diferente que el x previo
        
    }

    return 0;
}







/*#include <iostream>

int main()
{ // bloque externo

    int x{ 5 }; // x entra en alcance y es creado aquí

    { // bloque anidado
        int y{ 7 }; // y entra en alcance y es creado aquí

        // x e y están ambos en alcance aquí
        std::cout << x << " + " << y << " = " << x + y << '\n';
    } // y va fuera de alcance y es destruido aquí

    // y ya no puede ser usado aquí porque está fuera de alcance en este bloque externo

    return 0;
} // x va fuera de alcance y es destruido aquí*/













/*int main() // bloque externo
{
    int x{ 5 }; // x entra en alcance y es creado aquí

    { // bloque anidado
        int y{ 7 }; // y entra en alcance y es creado aquí
    } // y sale de alcance y es destruido aquí

    // y no puede ser usado aquí porque está fuera de alcance en este bloque

    return 0;
} // x va fuera de alcance y es destruido aquí*/

