#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];

//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     Array<int> tmp = numbers;
//     Array<int> test(tmp);

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }

int main(void)
{
	try
	{
		std::cout << std::endl << "F I R S T  T E S T: I N T  A R R A Y" << std::endl;
		Array<int>d(10);
		std::cout << "size: " << d.size() << std::endl;
		for (size_t i = 0; i < 2; i++)
			d[i] = i + 1;
		std::cout << "Value: " << d[1] << std::endl;
		Array<int>test(d);
		std::cout << "size: " << d.size() << std::endl;
		for(int i = 0; i < 10; i++)
		{
			d[i] = i;
			std::cout << "Value: " << d[i] << std::endl;
		}
		
		std::cout << std::endl << "S E C O N D  T E S T:  F L O A T  A R R A Y" << std::endl;
    	Array<float>f(10);
		std::cout << "size: " << f.size() << std::endl;
		for(float i = 0.0f; i < 10; i++)
		{
			f[i] = i+0.123f;
			std::cout << "Value: " << f[i] << std::endl;
		}

        std::cout << std::endl << "T H I R D  T E S T:  S T R I N G  A R R A Y" << std::endl;
        Array<std::string>s(5);
        std::cout << "size: " << s.size() << std::endl;
        for (size_t i = 0; i < 5; i++)
        {
            s[i] = "A";
            std::cout << "Value: " << s[i] << std::endl;
        }

		std::cout << std::endl << "F O U R T H  T E S T: O U T  O F  B O U N D S  T E S T" << std::endl;

		Array<float>f2(2);
		std::cout << "size: " << f2.size() << std::endl;
		std::cout << "trying to print value at f2[4]..." << std::endl << f2[4] << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return(0);
}