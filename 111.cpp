#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <ctime>

using namespace std;
struct Person
{
    char name[50];
    int age;
};

int main()
{
    //FILE *f = nullptr;
    //write
//    f = fopen("test.txt", "w");
//    if(f!= nullptr)
//    {
//        fputs("Hello",f);
//        fputs("\n",f);
//        fputs("World!!!",f);
//        fclose(f);
//    }
    // read
//    f = fopen("test.txt", "r");
//    if(f!= nullptr)
//    {
//        char buf[500];
//        while (!feof(f))
//        {
//            fgets(buf,500,f);
//            cout<<buf;
//            buf[0] = 0;
//        }
//        fclose(f);
//    }
//    // read by symbols
//    f = fopen("test.txt", "r");
//    if (f != nullptr)
//    {
//        while (!feof(f))
//        {
//            char s = fgetc(f);
//            if (s != -1)
//                cout << s;
//        }
//        fclose(f);
//    }
//// seek
//    f = fopen("test.txt", "w");
//    if(f!= nullptr)
//    {
//        cout<<ftell(f)<<endl;
//        fputs("Hello world!!!\n",f);
//        cout<<ftell(f)<<endl;
//        fseek(f, 4, SEEK_SET);
//        cout<<ftell(f)<<endl;
//        fputs(" ", f);
//        fclose(f);
//    }
//// task 1
//
//    FILE *f_src = fopen("test.txt", "r");
//    if(f_src!= nullptr)
//    {
//        FILE *f_dest = fopen("task1.txt", "w");
//        if(f_dest!= nullptr)
//        {
//            char buf[500];
//            while (!feof(f_src))
//            {
//                fgets(buf,500,f_src);
//                fputs(buf,f_dest);
//                *buf = 0;
//            }
//            fclose(f_dest);
//        }
//        fclose(f_src);
//    }
//// task 2
//    FILE *f = fopen("test.txt", "r");
//    int size = 0;
//    char **lines = nullptr;
//    if (f != nullptr)
//    {
//        char buf[500];
//        while (!feof(f))
//        {
//            fgets(buf, 500, f);
//            size++;
//        }
//        lines = new char *[size];
//        fseek(f, 0, SEEK_SET);
//        for (int i = 0; i < size; ++i)
//        {
//            fgets(buf, 500, f);
//            lines[i] = new char[strlen(buf) + 1];
//            strcpy(lines[i], buf);
//            *buf = 0;
//        }
//        fclose(f);
//    }
//    f = fopen("task2.txt", "w");
//    if (f != nullptr)
//    {
//        for (int i = size - 1; i >= 0; --i)
//        {
//            fputs(lines[i],f);
//        }
//        fclose(f);
//    }
//
//    for (int i = 0; i < size; ++i)
//    {
//        delete[] lines[i];
//    }
//    delete[] lines;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//    int a[5]{65,66,67,68,69}, b[5]{};
//    FILE *f = fopen("arr.bin", "wb");
//    if(f!= nullptr)
//    {
//        fwrite(a,sizeof(int),5, f);
//        fclose(f);
//    }
//    f = fopen("arr.bin", "rb");
//    if(f!= nullptr)
//    {
//        fread(b,sizeof(int),5, f);
//        fclose(f);
//    }
//    for (int i = 0; i < 5; ++i)
//    {
//        cout<<b[i]<<" ";
//    }
//    cout<<endl;
/*    srand(time(nullptr));
    int size = rand() % 10 + 5;
    int *arr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 26 + 65;
    }
    FILE *f = fopen("arr_dyn.bin", "wb");
    if (f != nullptr)
    {
        fwrite(&size, sizeof(int), 1, f);
        fwrite(arr, sizeof(int), size, f);
        fclose(f);
    }

    delete[] arr;*/

    /*int size = 0;
        int *arr = nullptr;

        FILE *f = fopen("arr_dyn.bin", "rb");
        if (f != nullptr)
        {
            fread(&size, sizeof(int), 1, f);
            arr = new int[size];
            fread(arr, sizeof(int), size, f);
            fclose(f);
        }
        for (int i = 0; i < size; ++i)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        delete[] arr;*/
    Person a{ "Vasya Pupkin", 23 }, b{};
    FILE* f = fopen("person.bin", "wb");
    if (f != nullptr)
    {
        fwrite(&a, sizeof(Person), 1, f);
        fclose(f);
    }

    f = fopen("person.bin", "rb");
    if (f != nullptr)
    {
        fread(&b, sizeof(Person), 1, f);
        fclose(f);
    }
    cout << b.name << " " << b.age << endl;
}


