#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
int main(void)
{
	int n;
    int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    last_digit = abs(n) % 10;

    if (last_digit > 5){
        cout << "Last digit of "<< n << " is " << last_digit << " and is greater than 5";
    }
    else if (last_digit == 0){
        cout << "Last digit of "<< n << " is " << last_digit << " and is 0";
    }
    else{
        cout << "Last digit of "<< n << " is " << last_digit << " and is less than 6 and not 0";
    }
    

	return (0);
}