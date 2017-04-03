#include<iostream>

int main()
{
	int x;
	float y;
	std::cin>>x;
	std::cin>>y;
	if(x%5==0 && (x+0.5)<y)
	{
	y=y-(x+0.50);	
	}
	std::cout<<y;
	return 0;
}
