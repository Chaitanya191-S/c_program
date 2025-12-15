#include<stdio.h>
#include<math.h>

struct point{
       float X;
       float Y;

};
float distance(struct point p1,struct point p2){
        float dX = p1.X - p2.X;
        float dY = p1.Y - p2.Y;
        return sqrt ( dX*dX+dY*dY);

}
int main(){
    struct point a={4,6};
    struct point b={2,4};

    float dist = distance (a,b);

    printf("euclidean distnce = %2.f\n\n",dist);
    return 0;



}

// eculidean distance = short straight linr distance between two points. 
//we are applying ptthagoras theorem to calculate it .