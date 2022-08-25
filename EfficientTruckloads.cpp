#include "EfficientTruckloads.h"
#include <iostream>
#include <vector>

using namespace std;

EfficientTruckloads::EfficientTruckloads(){
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){//numCrates will be between 2 and 10,000, inclusive. loadSize will be be between 1 and (numCrates - 1), inclusive.
		/*

15

7	8

4	3	4	4

2	2	2	1	2	2	2	2

(1	1)	(1	1)	(1	1)	1	(1	1)	(1	1)	(1	1)	(1	1)



                     14

            7	                7

        4	    3	        4	    3                       2

    (2	    2)	    3	(2	    2)	    3                   4
    */

        if (loadSize >= numCrates) return 1;
        /*
            if(numList.size()<=0){
        numList.push_back(numCrates);
        std::cout<<tempList[0];
    }else{
        for(int i = 0; i < numList.size(); i ++){
                    std::cout<<tempList[0];
            if(numList[i]>loadSize){
                if(numList[i] % 2 == 0){
                    tempList.push_back(numList[i]/2);
                }else{
                    tempList.push_back((numList[i]/2)+1);
                }
            }
        }
    }
    numList = tempList;
    for(int i = 0; i < numList.size(); i ++){
        if(numList[i]<=loadSize){
            counter++;
            check = true;
        }else{
            check = false;
        }
    }
    if(check == true){
        return counter;
    }
    numTrucks (numCrates , loadSize);
*/
		return numTrucks(numCrates/2 + numCrates%2, loadSize) + numTrucks(numCrates/2, loadSize);

}
EfficientTruckloads::~EfficientTruckloads(){

}


