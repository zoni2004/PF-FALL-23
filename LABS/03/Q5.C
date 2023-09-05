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
             int fuelcomsumed;
             while (NdistanceC != 0) {
             printf ("Enter the distance travelled north \n");
             scanf ("%d\n" &Ndistance);
             printf ("Press '0' if done with input and anyother number key if not");
             scanf ("%d\n" &NdistanceC);
             TNdistance = TWdistance + Ndistance;
             TNdistance = Ndistance;
             }
             while (WdistanceC != 0) {
             printf ("Enter the distance travelled west \n");
             scanf ("%d\n" &Wdistance);
             printf ("Press '0' if done with input and anyother number key if not");
             scanf ("%d\n" &WdistanceC);
             TWdistance = TWdistance + Wdistance;
             TWdistance = Wdistance;
             }
             while (SdistanceC != 0) {
             printf ("Enter the distance travelled south \n");
             scanf ("%d\n" &Sdistance);
             printf ("Press '0' if done with input and anyother number key if not");
             scanf ("%d\n" &SdistanceC);
             TSdistance = TSdistance + Sdistance;
             TSdistance = Sdistance;
             }
             Tdistance = TSdistance+TWdistance+TNdistance;
             fuelconsumed = Tdistance * fuelrate;
             printf ("The total distance travelled is: %d \n", Tdistance);
             printf ("The total fuel consumed is: %d \n", fuelconsumed)
             
    return 0;
}
