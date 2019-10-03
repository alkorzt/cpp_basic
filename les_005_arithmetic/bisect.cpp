#include <iostream>
#include <cmath>

double funct(double x){ return  2 * x - 16;}
double bisect(double beg, double end){return (beg + end) / 2;}

double find_root(double begin_x, double end_x){
    const double EPS = 0.00001;
    double current_x = bisect(begin_x, end_x);
    while(fabs(funct(current_x)) > EPS) {
        if(funct(current_x) > 0) end_x = current_x;
        else begin_x = current_x;
        current_x = bisect(begin_x, end_x);
        std::cout << begin_x << ":" << end_x << ":" << current_x << std::endl; 
  }
    return current_x;
}

int main(){
    std::cout << find_root(0, 100) << std::endl;
}
