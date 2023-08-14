// MoveObgect.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>



template<class T>
void move_vectors(T& one, T& two)
{
    two = std::move(one);
};

template<class T>
void print_vectors(std::vector<T>& any)
{
    for (const auto& i : any)
    {
        std::cout << i << '\t';
    }
    std::cout << std::endl;
};

int main()

{std::vector <std::string> one = { "test_string1", "test_string2" };
std::vector <std::string> two;
std::cout << "one" << std::endl;
print_vectors(one);
std::cout << "two" << std::endl;
print_vectors(two);

move_vectors(one, two);
std::cout << "move" << std::endl;
std::cout << "one" << std::endl;
print_vectors(one);
std::cout << "two" << std::endl;
print_vectors(two);
    
}

