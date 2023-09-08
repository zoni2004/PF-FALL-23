#include <stdio.h>
#include <math.h>

int main()
{
             int Ndistance; //North distance
             int Sdistance; //South distance
             int Wdistance;// West distance
             int NdistanceC; //done entering north distsance
             int SdistanceC;
             int WdistanceC;
             int TNdistance = 0; //sum of total north distance
             int TWdistance =0;
             int TSdistance = 0;
             int Tdistance; //sum of west, north and south distances
             int fuelrate = 2; 
             int fuelconsumed;
             
             do {
             printf ("Enter the distance travelled north \n");
             scanf ("%d", &Ndistance);
             printf ("Press '0' if done with input and anyother number key if not");
             scanf ("%d" ,&NdistanceC);
             TNdistance = TNdistance + Ndistance;
             } while (NdistanceC != 0);
             do {
             printf ("Enter the distance travelled west \n");
             scanf ("%d" ,&Wdistance);
             printf ("Press '0' if done with input and anyother number key if not");
             scanf ("%d" ,&WdistanceC);
             TWdistance = TWdistance + Wdistance;
             } while (WdistanceC != 0);
             
            do {
             printf ("Enter the distance travelled south \n");
             scanf ("%d" ,&Sdistance);
             printf ("Press '0' if done with input and anyother number key if not");
             scanf ("%d" ,&SdistanceC);
             TSdistance = TSdistance + Sdistance;
            } while (SdistanceC != 0);
             Tdistance = TSdistance+TWdistance+TNdistance;
             fuelconsumed = Tdistance * fuelrate;
             printf ("The total distance travelled is: %d \n", Tdistance);
             printf ("The total fuel consumed is: %d \n", fuelconsumed);
             
    return 0;
}
