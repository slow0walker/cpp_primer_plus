#include<iostream>
struct an_year_old
{
	int year;
};
int main()
{
	an_year_old s01, s02, s03;
	s01.year = 1998;
	an_year_old* pa = &s02;
	pa->year = 1999;
	an_year_old trio[3];
	trio[0].year = 2003;
	std::cout << trio->year << std::endl;
	const an_year_old* arp[3] = { &s01,&s02,&s03 };
	std::cout << arp[1]->year << std::endl;
	return 0;
} 