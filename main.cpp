#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void sortArray(string[], int);
int searchArray(string[], int, string);

int main(int argc, char *argv[])
{
    const int NUM_NAMES = 21;
    int position;
    string array [NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim", "Griffin,  Jim",
    "Stamey, Marty", "Rose, Geri", "Taylor, Terri",
    "Johnson, Jill", "Allision, Jeff", "Looney, Joe", "Wolfe, Bill",
    "James, Jean", "Weaver, Jim", "Pore, Bob", 
    "Rutherford, Greg", "Javens, Renee", "Harrison, Rose",
    "Setzer, Cathy", "Pike, Gordon", "Holland, Beth" };

    int count;
    
    cout <<"*************************"<<endl;
    cout <<"UNSORTED LIST:"<<endl;
    cout <<"*************************"<<endl<<endl;
    
    for (count=0; count<NUM_NAMES; count++)
    {
          cout<<array[count]<<endl;
          }
          
    sortArray(array, NUM_NAMES);
    
    position= searchArray(array, NUM_NAMES, "Smith, Bart");
        
    cout <<"*************************"<<endl;
    cout <<"SORTED LIST:"<<endl;
    cout <<"*************************"<<endl;
    int index;
    
    for (index=0; index<NUM_NAMES; index++)
    {
          cout<<array[index]<<endl;
          }
    cout<<endl;      
    cout <<"Smith, Bart is number "<<position <<" in the sorted list."<<endl;
    
    

    system("PAUSE");
    return EXIT_SUCCESS;
}

void sortArray(string array[], int size)
{
            bool swap;
            string temp;
            do
            {
                swap = false;
                for (int count = 0; count < (size - 1); count++)
                //for (int count = 0; count < (size - 1); count++)
                {
                    if (array[count] > array[count + 1])
                    {
                                     temp = array[count];
                                     array[count] = array[count + 1];
                                     array[count + 1] = temp;
                                     swap = true;
                    }
                }
            }while (swap);

}

int searchArray(string array[], int numElms, string value) 
{
     int first = 0, last = numElms - 1, middle, position = -1;
     bool found = false;
     while(!found && first <= last)
     {
                  middle = (first + last) / 2;
                  if (array[middle] == value)
                  {
                                    found = true;
                                    position = middle;
                                    }
                  else if (array[middle] > value)
                  {
                       last = middle - 1;
                       }
                  else
                  {
                      first = middle + 1;
                      }
     }
     return position;

}
 



