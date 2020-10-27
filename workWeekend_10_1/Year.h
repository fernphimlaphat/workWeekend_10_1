#include<stdio.h>
#include<string.h> 

const char* Year(int y,int i)
{
	if (i == 1)
	{
		int r = y % 12;
		const char* typ[] = { "Snake", "House", "Goat","Monkey", "Rooster", "Dog", "Pig", "Rat",
						"Ox", "Tiger", "Rabbit", "Dragon" };
		return typ[r];
	}
	else
	{
		y = y + 543;
		int r = y % 12;
		const char* typ[] = { "Snake", "House", "Goat","Monkey", "Rooster", "Dog", "Pig", "Rat",
						"Ox", "Tiger", "Rabbit", "Dragon" };
		return typ[r];
	}
}


//Y
int Input(int typyear)
{
	int year;
	do
	{
		if (typyear == 1)
		{
			printf("Enter your year of birth : ");
			scanf_s("%d", &year);
			if (year > 0 && year <= 2563)
			{
				return year;
			}

			else
			{
				do
				{
					printf("Enter your year of birth : ");
					scanf_s("%d", &year);
					if (year >=0)
					{
						do
						{
							printf("Enter your year of birth : ");
							scanf_s("%d", &year);
						} while (year > 2563);
						
					}
				} while (year <= 0);

				return year;
			}
		}
		else
		{
			printf("Enter your year of birth : ");
			scanf_s("%d", &year);
			if (year > 0 && year <= 2020)
			{

				return year;
			}

			else
			{
				do
				{
					printf("Enter your year of birth : ");
					scanf_s("%d", &year);
					if (year >= 0)
					{
						do
						{
							printf("Enter your year of birth : ");
							scanf_s("%d", &year);
						} while (year > 2563);

					}
				} while (year <= 0);
				return year;
			}
		}

	} while (year <=0);
	
}

//Age
void Name(int typyear)
{
	int year = Input(typyear);

	struct Name
	{
		int old;

	}informaton[5];

	printf("\nYou were born : %d\n", year);
	for (int i = 1; i < 5; i++)
	{
		informaton[i].old = 2563 - year + i;
		
		if (typyear == 1)
		{
			printf("%d BE You are : %d\n",2563+i, informaton[i].old);
		}
		else if(typyear == 2)
		{
			informaton[i].old = 2563 - 543 - year + i;
			printf("%d AD You are : %d\n", 2563-543+i, informaton[i].old);
		}
	}
	
	printf("Your constellation is %s\n", Year(year, typyear));


}

void main2()
{
	int typYear;
	printf("[1]BE\n[2]AD\nSelect typ of year : ");
	scanf_s("%d",&typYear);

	if (typYear == 1)
	{
		Name(typYear);
	}
	else if (typYear == 2)
	{

		Name(typYear);
	}
	else
	{
		do
		{
			printf("[1]BE\n[2]AD\nSelect typ of year : ");
			scanf_s("%d", &typYear);

			if (typYear == 1 || typYear == 2)
			{
				if (typYear == 1)
				{
					Name(typYear);
				}
				else if (typYear == 2)
				{

					Name(typYear);
				}
			}
			if (typYear != 1 && typYear != 2)
			{
				do
				{
					printf("[1]BE\n[2]AD\nSelect typ of year : ");
					scanf_s("%d", &typYear);
					if (typYear == 1 || typYear == 2)
					{
						if (typYear == 1)
						{
							Name(typYear);
						}
						else if (typYear == 2)
						{

							Name(typYear);
						}
					}
				} while (typYear>2);
				
			}
			


		} while (typYear < 1);
		
		

	}
	
}
