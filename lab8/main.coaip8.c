#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TRAINS 100  // Максимальное количество поездов

// Структура "Вокзал"
struct TrainStation {
    int trainNumber;
    char destination[100];
    char daysOfOperation[50];
    char arrivalTime[10];
    char parkingTime[10];
};

// Функция для ввода массива структур
void inputTrains(struct TrainStation trains[], int size) {
    printf("Enter information about the trains:\n");
    for (int i = 0; i < size; i++) {
        printf("Train %d:\n", i + 1);
        printf("Train number: ");
        scanf("%d", &trains[i].trainNumber);
        printf("Destination: ");
        fflush(stdin);  // Очищаем буфер ввода перед считыванием строки
        fgets(trains[i].destination, sizeof(trains[i].destination), stdin);
        trains[i].destination[strcspn(trains[i].destination, "\n")] = '\0';  // Удаляем символ новой строки из ввода
        printf("Days of operation: ");
        fflush(stdin);
        fgets(trains[i].daysOfOperation, sizeof(trains[i].daysOfOperation), stdin);
        trains[i].daysOfOperation[strcspn(trains[i].daysOfOperation, "\n")] = '\0';
        printf("Arrival time: ");
        fflush(stdin);
        fgets(trains[i].arrivalTime, sizeof(trains[i].arrivalTime), stdin);
        trains[i].arrivalTime[strcspn(trains[i].arrivalTime, "\n")] = '\0';
        printf("Parking time: ");
        fflush(stdin);
        fgets(trains[i].parkingTime, sizeof(trains[i].parkingTime), stdin);
        trains[i].parkingTime[strcspn(trains[i].parkingTime, "\n")] = '\0';
        printf("\n");
    }
}

// Функция для сортировки массива структур по номеру поезда
void sortTrains(struct TrainStation trains[], int size) {
    struct TrainStation temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (trains[i].trainNumber > trains[j].trainNumber) {
                temp = trains[i];
                trains[i] = trains[j];
                trains[j] = temp;
            }
        }
    }
    printf("Array of structures sorted by train number.\n");
}

// Функция для поиска структуры по номеру поезда
void searchTrain(struct TrainStation trains[], int size, int trainNumber) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (trains[i].trainNumber == trainNumber) {
            printf("Train with number %d:\n", trainNumber);
            printf("Destination: %s\n", trains[i].destination);
            printf("Days of operation: %s\n", trains[i].daysOfOperation);
            printf("Arrival time: %s\n", trains[i].arrivalTime);
            printf("Parking time: %s\n", trains[i].parkingTime);
            printf("\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Train with number %d not found.\n", trainNumber);
    }
}

// Функция для изменения структуры по номеру поезда
void modifyTrain(struct TrainStation trains[], int size, int trainNumber) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (trains[i].trainNumber == trainNumber) {
            printf("Enter new information for train with number %d:\n", trainNumber);
            printf("New destination: ");
            fflush(stdin);
            fgets(trains[i].destination, sizeof(trains[i].destination), stdin);
            trains[i].destination[strcspn(trains[i].destination, "\n")] = '\0';
            printf("New days of operation: ");
            fflush(stdin);
            fgets(trains[i].daysOfOperation, sizeof(trains[i].daysOfOperation), stdin);
            trains[i].daysOfOperation[strcspn(trains[i].daysOfOperation, "\n")] = '\0';
            printf("New arrival time: ");
            fflush(stdin);
            fgets(trains[i].arrivalTime, sizeof(trains[i].arrivalTime), stdin);
            trains[i].arrivalTime[strcspn(trains[i].arrivalTime, "\n")] = '\0';
            printf("New parking time: ");
            fflush(stdin);
            fgets(trains[i].parkingTime, sizeof(trains[i].parkingTime), stdin);
            trains[i].parkingTime[strcspn(trains[i].parkingTime, "\n")] = '\0';
            printf("Train with number %d successfully modified. \n", trainNumber);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Train with number %d not found.\n", trainNumber);
    }
}

// Функция для удаления структуры по номеру поезда
void deleteTrain(struct TrainStation trains[], int *size, int trainNumber) {
    int found = 0;
    for (int i = 0; i < *size; i++) {
        if (trains[i].trainNumber == trainNumber) {
            for (int j = i; j < *size - 1; j++) {
                trains[j] = trains[j + 1];
            }
            (*size)--;
            printf("Train with number %d successfully deleted.\n", trainNumber);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Train with number %d not found.\n", trainNumber);
    }
}

// Функция для вывода массива структур
void displayTrains(struct TrainStation trains[], int size) {
    printf("Array of structures:\n");
    for (int i = 0; i < size; i++) {
        printf("Train %d:\n", i + 1);
        printf("Train number: %d\n", trains[i].trainNumber);
        printf("Destination: %s\n", trains[i].destination);
        printf("Days of operation: %s\n", trains[i].daysOfOperation);
        printf("Arrival time: %s\n", trains[i].arrivalTime);
        printf("Parking time: %s\n", trains[i].parkingTime);
        printf("\n");
    }
}

int main() {
    struct TrainStation trains[MAX_TRAINS];
    int size = 0;
    int choice, trainNumber;

    do {
        printf("Menu:\n");
        printf("1) Input an array of structures\n");
        printf("2) Sort the array of structures\n");
        printf("3) Search in the array of structures by train number\n");
        printf("4) Modify a structure by train number\n");
        printf("5) Delete a structure from the array\n");
        printf("6) Display the array of structures\n");
        printf("7) Exit\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of trains: ");
                scanf("%d", &size);
                inputTrains(trains, size);
                break;
            case 2:
                sortTrains(trains, size);
                break;
            case 3:
                printf("Enter the train number to search: ");
                scanf("%d", &trainNumber);
                searchTrain(trains, size, trainNumber);
                break;
            case 4:
                printf("Enter the train number to modify: ");
                scanf("%d", &trainNumber);
                modifyTrain(trains, size, trainNumber);
                break;
            case 5:
                printf("Enter the train number to delete: ");
                scanf("%d", &trainNumber);
                deleteTrain(trains, &size, trainNumber);
                break;
            case 6:
                displayTrains(trains, size);
                break;
            case 7:
                printf("Program terminated.\n");
                break;
            default:
                printf("Invalid operation choice. Please try again.\n");
                break;
        }

        printf("\n");
    } while (choice != 7);

    return 0;
}
