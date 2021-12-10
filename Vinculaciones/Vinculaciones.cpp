#include <iostream>
int valor{ 5 }; // variable global

void foo()
{
	std::cout << "valor variable global: " << valor << '\n'; // valor no está oculto, se refiere al valor global
}

int main()
{
	int valor{ 7 }; // oculta a la variable global valor hasta el final de este bloque

	++valor; // incrementa solo a la variable local valor, no a la global

	std::cout << "valor variable local: " << valor << '\n';

	foo();

	return 0;
} // valor local es destruido

























/*#include <iostream>

int main()
{ // bloque externo
	int contenidos{ 5 }; // aquí se inicia la variable contenidos del bloque externo

	{ // bloque anidado
		// contenidos se refiere al contenidos del bloque externo
		std::cout << contenidos << '\n'; // imprime el valor del contenidos del bloque externo

		// en este ejemplo no definimos un contenidos en el bloque interno

		contenidos = 10; // esto se aplica a los contenidos del bloque externo

		std::cout << contenidos << '\n'; // imprime el valor del contenidos del bloque externo
	} // esta modificación del valor del contenidos del bloque externo se mantiene incluso al dejar el bloque

	std::cout << contenidos << '\n'; // imprime el valor del contenidos del bloque externo

	return 0;
} // bloque externo contenidos destruido*/



























/*#include <iostream>

int main()
{ 
	int contenidos{ 5 };
	{
		std::cout << contenidos << '\n';
		int contenidos{ 0 };
		contenidos = 10;
		std::cout << contenidos << '\n';
	}
	std::cout << contenidos << '\n'; 
	return 0;
}*/ 



















/*#include <iostream>

	int main()
	{ // bloque externo
		int contenidos{ 5 }; // éste es el contenidos del bloque externo

		{ // bloque anidado
			// contenidos se refiere al bloque externo contenidos aquí
			std::cout << contenidos << '\n'; // imprime el valor del contenidos del bloque externo

			int contenidos{ 0 }; // define contenidos en el alcance del bloque anidado

			// contenidos ahora se refiere al contenidos del bloque anidado
			// el contenidos del bloque externo se oculta temporalmente

			contenidos = 10; // esto asigna el valor 10 al contenidos del bloque anidado, 
							//no al contenidos del bloque externo

			std::cout << contenidos << '\n'; // imprime el valor del contenidos del bloque anidado
		} // contenidos del bloque anidado es destruido


		std::cout << contenidos << '\n'; // imprime el valor del bloque externo contenidos

		return 0;
	} // bloque externo contenidos destuido*/











	/*static int g_x; // globales no-constant tienen external linkage predeterminada, pero se le puede proporcionar internal linkage a través de la palabra clave static

	const int g_y{ 1 }; // globales const tienen internal linkage predeterminada
	constexpr int g_z{ 2 }; // globales constexpr tienen internal linkage predeterminada

	int main()
	{
		return 0;
	}*/








	/*#include <iostream>
	int main()
	{
		int x{ 2 }; // variable local, no linkage, no vinculada

		{
			int x{ 3 }; // este identificador x se refiere a un objeto diferente que el x previo

		}

		return 0;
	}*/







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

