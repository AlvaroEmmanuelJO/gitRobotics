#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <ctime>

using namespace std;

void printList(float *numbers_list, int list_size);
void sortList(float *numbers_list, int list_size);
void sortList_homework(float *numbers_list, int start, int end);

int main()
{
    const int klist_size = 2000; //Pruebas de funcionamiento (200, 400, 600, 800, 1000, 1200, 1400, 1600, 1800, 2000)

    float numbers[klist_size]; //array for Rand Numbers

    float numbers_homework[klist_size]; //array for Rand Numbers

    const float bound_limit = 10.0f;
    int number_of_experiments = 1000.0;  
    float time_experiments = 0.0;
    float time_experiments_homework = 0.0;

    clock_t begin; //gets current state clock
    clock_t end;

    srand(time(NULL));

    for (int idy = 0; idy < number_of_experiments; idy++)
    {
        for (int idx = 0; idx < klist_size; idx++)
        {
            numbers[idx] = bound_limit * ((float)rand() / (float)RAND_MAX);
            numbers_homework[idx] = numbers[idx];
        }
        //std::cout << "Lista desordenada" << endl;
        //printList(numbers, klist_size);

        //std::cout << endl;
        //std:: cout << "Lista Ordenada Metodo del profesor" << endl; 

        begin = clock();   //Empieza a tomar el timepo de ejecución
        sortList(numbers, klist_size);
        end = clock();     //Termina de tomar el tiempo de ejecución
        //printList(numbers, klist_size);
        //std::cout<<endl;

        time_experiments += (float)(end - begin) / CLOCKS_PER_SEC; //acomulador
        
        //std:: cout << "Lista Ordenada Metodo quicksort" << endl; 
        
        begin = clock();        
        sortList_homework(numbers_homework, 0 ,klist_size);
        end = clock();
        //printList(numbers, klist_size);
        //std::cout << endl;

        time_experiments_homework = +(float)(end - begin) / CLOCKS_PER_SEC; //acomulador
    }
    
    std::cout << "time_experiments = "<< time_experiments / number_of_experiments << "\n"; //Tiempo promedio de ejecución sort
    std::cout << "time_homework = " << time_experiments_homework / number_of_experiments << "\n"; //Tiempo promedio de ejecución quicksort

    return 0;
}

    int Partiton(float *numbers_list, int start, int end){
    int pivot = numbers_list[end];
    int partitionIndex = start;
    for(int i = start; i<end;i++) {
        if(numbers_list[i] <= pivot){
            swap(numbers_list[i], numbers_list[end]);
            partitionIndex++;
        }
    }
    swap(numbers_list[partitionIndex], numbers_list[end]);
    return partitionIndex;
}
    void sortList_homework(float *numbers_list, int start, int end) //Metodo quicksort
    {
        if(start < end){
            int partitionIndex = Partiton(numbers_list, start, end);
            sortList_homework(numbers_list, start, partitionIndex-1);
            sortList_homework(numbers_list, partitionIndex+1, end);
        }
    }
    void sortList(float *numbers_list, int list_size)   //Metodo del profe para ordenar listas
    {
        for (int idx = 0; idx < list_size; idx++)
        {
            for(int idy = idx + 1; idy < list_size; idy++)
            {
                if (numbers_list[idx] > numbers_list[idy])
                {
                    float temporal = numbers_list[idx];
                    numbers_list[idx] = numbers_list[idy];
                    numbers_list[idy] = temporal;                    
                }
            }    
        }
    }    
    void printList(float *numbers_list, int list_size) //Metodo para imprimir listas
    {
        for(int idx = 0; idx < list_size; idx++)
        {
        std::cout << numbers_list[idx] << "  ";
        }   
        std::cout << std::endl;
    }

