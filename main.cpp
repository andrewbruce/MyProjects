//
//  main.cpp
//  100doors
//
//  Created by Andrew Bruce on 26/02/2015.
//  Copyright (c) 2015 Andrew Bruce. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;


int main(int argc, const char * argv[]) {
 
    int i=0;
    bool array[100];
    for (i=0;i<100; i++)
    {
        array[i]= false;
    }

    int x=1;
    
    while(x<101)
    {
        for (int j=0;j<100; j++)
        {
            if( ((j+1)% x) == 0)
            {
                array[j]=!array[j];
                
            }
            
        }
        
        x++;
    }
    
    for (i=0;i<100; i++)
    {
        
        cout<<"Door "<<i+1<<": ";
        if(array[i] == 1)
        {
            cout<< "Open"<<endl;
        }
        else
            cout<<"Closed"<<endl;
    }
    
}

    
    
 