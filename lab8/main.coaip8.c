#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
// Ввести массив структур в соответствии с вариантом. Рассортировать массив в
// алфавитном порядке по первому полю, входящему в структуру. В программе реализовать меню:
// 1) Ввод массива структур;
// 2) Сортировка массива структур;
// 3) Поиск в массиве структур по заданному параметру;
// 4) Изменение заданной структуры;
// 5) Удаление структуры из массива;
// 6) Вывод на экран массива структур;
// 7) Выход.
// 9. Структура «Вокзал»: номер поезда, пункт назначения, дни следования, время прибытия,
// время стоянки.

struct station //структура для вокзала
{
	int trainNumber;
	char destination[20];
	char timetable[20];
	int arrivalTime;
	int stoppingTime;
};

struct station trains[5], temp;	//массивы структур
int n = 0;	//переменная, хранящая количество поездов 


void addTrain (void) //ввод массива структур
{
	system("cls");
	fflush(stdin);
	if (n < 5)
	{
		printf("Train %d\n", n + 1);
		
		fputs("Enter train number: ", stdout);
		fflush(stdin);
		scanf("%d", &trains[n].trainNumber);

		fputs("Enter destination: ", stdout);
		fflush(stdin);
		fgets(trains[n].destination, 20, stdin);

		fputs("Enter timetable: ", stdout);
		fflush(stdin);
		fgets(trains[n].timetable, 20, stdin);
	
		fputs("Enter arrival time: ", stdout);
		fflush(stdin);
		scanf("%d", &trains[n].arrivalTime);
	
		fputs("Enter stopping time: ", stdout);
		fflush(stdin);
		scanf("%d", &trains[n].stoppingTime);

		n++;
	}
	else
	{
		printf("The max number of trains cannot be more than 5\n");
	}
	
	printf("Enter 0 to return: "); //чтобы вернуться назад нажмите 0
    int i;
    scanf("%d", &i);
    if(i == 0)
	{
        return;
    }
}

void searchTrain(void)  //Поиск в массиве структур по заданному параметру
{
	system("cls");  
	fflush(stdin);
	int trainNumber;
	printf("Enter train number: ");
	scanf("%d", &trainNumber);
	for(int i = 0; i < 5; i++)
	{
		if(strcmp(trains[i].trainNumber, trainNumber) == 0)
		{
			printf("Available information: \n");
			printf("Train number: %d", trains[i].trainNumber);
			printf("Destination: %s", trains[i].destination);
			printf("Timetable: %s", trains[i].timetable);
			printf("Arrival time: %d", trains[i].arrivalTime);
			printf("\nStopping time: %d\n", trains[i].stoppingTime);
		}
	}
	printf("Enter 0 to return: ");
	int i;
	scanf("%d", &i);
	if(i == 0){
		return;
	}
}

void editTrain(void)  //Изменение заданной структуры
{
	system("cls");  
	fflush(stdin);
	int num;   
	printf("Enter train's number to edit: ");
	scanf("%d", &num);
	if(num > n)
	{
		return;
	}
	getchar();
	
	printf("Enter train number: ", stdout);
	scanf("%d", &trains->trainNumber);

	fputs("Enter destination: ", stdout);
	fgets(trains->destination, 20, stdin);

	fputs("Enter timetable: ", stdout);
	fgets(trains->timetable, 20, stdin);
	
	fputs("Enter arrival time: ", stdout);
	scanf("%d", &trains->arrivalTime);
	
	fputs("Enter stopping time: ", stdout);
	scanf("%d", &trains->stoppingTime);
	
}

void deleteTrain(void) //Удаление структуры из массива
{ 
	system("cls");  
	fflush(stdin);
	int num;
	printf("Enter train number to delete: ");
	scanf("%d", &num);
	if(num > n)
	{	
		return;
	}
	printf("Are you sure you want to delete this train? (0 - No, 1 - Yes): ");
	int i;
	scanf("%d", &i);
	if(i != 0)
	{
		for(int i = (num - 1); i < n; i++)
		{
			trains[i] = trains[i + 1];
		}
		n--;
	}
}


void showAllTrains(void)  //Вывод на экран массива структур
{
	system("cls");  
	fflush(stdin);
	
	if(n == 0)
	{
		printf("Nothing is recorded");
	}
	

	for(int i = 0; i < n - 1; i++) //Сортировка массива структур
	{
		for(int j = i + 1; j < n; j++)
		{
			if(strcmp(trains[i].trainNumber, trains[j].trainNumber) > 0){
				temp = trains[i];
				trains[i] = trains[j];
				trains[j] = temp;
			}
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("Train %d\n", i + 1);
		printf("Enter train number: %d\n", trains[i].trainNumber);
		printf("Enter destination: %s", trains[i].destination);
		printf("Enter timetable: %s", trains[i].timetable);
		printf("Enter arrival time: %d", trains[i].arrivalTime);
		printf("\nEnter stopping time: %d\n", trains[i].stoppingTime);
	}
	
	printf("\nEnter 0 to return: ");
    int i;
    scanf("%d", &i);
    if(i == 0)
	{
        return;
    }
}

void menu(void){
		int isFound;
		while(1){
		system("cls");
		fflush(stdin);
		int trainNumber;
		printf("1.Add train\n");
		printf("2.Search train\n");
		printf("3.Edit train\n");
		printf("4.Delete train\n");
		printf("5.Show all trains\n");
		printf("6.Exit\n");
		printf("Select number: ");
		int i;
		scanf("%d", &i);
		getchar();
		switch(i)
		{
			case 1:	
				addTrain();
				break;
			case 2:
				searchTrain();
				break;
			case 3:
				editTrain();
				break;
			case 4:
				deleteTrain();
				break;
			case 5:
				showAllTrains();
				break;
			case 6:
				return;
		}
	}
}

int main(void)
{
	menu();
}
