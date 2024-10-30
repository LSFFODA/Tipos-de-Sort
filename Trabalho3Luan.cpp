#include <iostream>
using namespace std;

void insertionSort(double arr[], int size)
{
    for (int i = 1; i < size; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        // Encontra a posição correta para inserir o elemento atual
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void bubbleSort(double arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(double arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i; 

        // Encontra o indice do menor elemento nao ordenado
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Troca o elemento minimo com o primeiro elemento nao ordenado
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    //Variaveis para calcular o tamanho e o tamanho maximo do array
    const int MAX_TAMANHO = 10000;
    double arr[MAX_TAMANHO];
    int size;

    cout<<"Digite o tamanho do array: ";// Usuario coloca o tamanho do array
    cin>>size;
    cout<<endl;

    cout<<"Digite os valores do array: "<<endl;// For para o usuario colocar as variaveis dentro do array
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    cout<<endl;

    cout << "Array nao-ordenado: ";// For contar do primeiro até o ultimo elemento do vetor para mostrar os elementos do array não-ordenado
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    
    // Se o tamanho que o usuario digitar for maior ou igual a 1 e menor ou igual a 20, o código utilizara o InsertionSort para ordernar o array
    if (size <= 20 && size >= 1){
        cout<<"Array ordenado usando insertionSort: ";
        insertionSort(arr, size);
    }

    // Se o tamanho que o usuario digitar for maior ou igual a 21 e menor ou igual a 30, o código utilizara o BubbleSort para ordernar o array
    else if(size >= 21 && size <= 30) {
        cout<<"Array ordenado usando bubbleSort: ";
        bubbleSort(arr, size);
    }

    // Se o tamanho que o usuario digitar for maior que 30, o código utilizara o SelectionSort para ordernar o array
    else if(size > 30) {
        cout<<"Array ordenado usando selectionSort: ";
        selectionSort(arr, size);
    }

    // Se o tamanho que o usuário digitar for menor que 0, o código retornara ao inicio
    else if(size < 0) {
        cout<<"O valor da quantidade de elemento eh incorreta, fassa uma nova entrada. \n"<<endl;
        main();
    }
    

    // For contar do primeiro até o ultimo elemento do vetor para mostrar os elementos do array ordenado
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;

    return 0;
}