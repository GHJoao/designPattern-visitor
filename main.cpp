#include <iostream>
#include <locale.h>
#include <string.h>

#include "real_log.h"
#include "orders_visitor.h"

using namespace std;

int main()
{
   setlocale(LC_ALL,"Portuguese");

   RealLog* obj1 =  new RealLog();
   Visitor* order = new OrdersVisitor();

   vector<Record> temporaryLog;
   vector<Record>::iterator x;

   obj1->addMeasure(37.8, 1);
   obj1->addMeasure(34.9, 2);
   obj1->addMeasure(41.8, 3);
   obj1->addMeasure(30.7, 4);
   obj1->addMeasure(25.5, 5);
   obj1->addMeasure(31.9, 6);

   temporaryLog = obj1->getLog();

   int time;
   float temperature;

   cout << "--Log Por Horário--" << endl;
   for (x = temporaryLog.begin(); x < temporaryLog.end(); x++)
   {
      time = x->getTime();
      temperature = x->getTemperature();
      cout << time << " h, " << temperature << " Cº" << endl;
   }

   obj1->accept(order);
   temporaryLog = obj1->getLog();

   cout << endl;

   cout << "--Log Ordenado Por Temperatura--" << endl;
   for (x = temporaryLog.begin(); x < temporaryLog.end(); x++)
   {
      time = x->getTime();
      temperature = x->getTemperature();
      cout << time << " h, " << temperature << " Cº" << endl;
   }
}
