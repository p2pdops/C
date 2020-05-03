#include <stdio.h>
#include <math.h>
 
struct Point 
{
    int x,y;
};
 
float distance(struct Point p1, struct Point p2) {
    float distance = sqrt(pow(p1.x - p2.x,2) + pow(p1.y - p2.y,2));
   return distance;
}
int main() {
    struct Point a, b;
    a.x = 10;
    b.x = 20;

    a.y = 30;
    b.y = 40;

    printf("%f\n", distance(a,b)); 
    return 0;
}