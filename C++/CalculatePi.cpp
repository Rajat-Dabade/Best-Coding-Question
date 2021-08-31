#include <iostream>
#include <random> //for random functions
#include <time.h> //for time function
using namespace std;

// function for calculating pi value
float estimate_pi(int n){
    float num_point_circle = 0;
    float num_point_total = 0;
    
    // srand() sets the starting point for producing a series of pseudo-random integers.
    // Due to time(0) pseudo-random number vary for every program call.
    srand((unsigned) time(0)); 
    // From experiments, found that srand(1630384394) gives most accurate results for pi value (3.14159).
    
    for(long i=0; i<n; i++){
        float x = (float)rand() / (float)RAND_MAX;
        float y = (float)rand() / (float)RAND_MAX;
        float distance = x*x+y*y;
        if(distance <= 1){
            num_point_circle++;
        }
        num_point_total++;
    }
    return 4 * num_point_circle/num_point_total;
}

//main function
int main()
{
    float pi = estimate_pi(10000000); //called estimate_pi
    cout<<pi<<endl;
}