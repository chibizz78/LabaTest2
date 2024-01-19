#include <iostream>
#include <cmath>
#include <iomanip>

int sizechecker()
{
int n;

std::cout << "Enter size of the array: ";

while (true)
{
try
{
if (!(std::cin >> n)) 
{
std::cin.clear();

while (std::cin.get() != '\n');

throw "Size is non digit!";
}
else
if (n <= 0 || n > 10)
throw "Size is out of range!";
else
break;

}

catch (const char* exception)
{
std::cout << exception << '\n';

std::cout << "Type new size: ";
}
}
return n;
}

int keychecker(int n)
{
int f;

std::cout << "Type key to find element: ";

while (true)
{
try
{
if (!(std::cin >> f))
{
std::cin.clear();

while (std::cin.get() != '\n');

throw "Key is non digit!";
}
else
if (f < 0 || f >= n)
throw "Key is out of range!";
else
break;

}

catch (const char* exception)
{
std::cout << exception << '\n';

std::cout << "Type new key: ";
}
}
return f;
}

void finder(int f, int n, int* arr)
{

for (int i = 0; i < n; i++)
{
if (i == f)
{
std::cout << "Found element: " << arr[i];
break;
}
}
}

int main()
{
int n, f;

n = sizechecker();

int* arr = new int[n];

for (int i = 0; i < n; i++)
std::cin >> arr[i];

f = keychecker(n);

finder(f, n, arr);

delete[] arr;

return 0;
}
