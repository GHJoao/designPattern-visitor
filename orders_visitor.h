#ifndef ORDERS_VISITOR_H_INCLUDED
#define ORDERS_VISITOR_H_INCLUDED

#include "abstract_log.h"

class OrdersVisitor: public Visitor
{

    public:
         void visit(AbstractLog *e)
         {
            std::vector<Record>::iterator i;
            std::vector<Record>::iterator j;

            Record aux;

            setOrderedLog(e->getLog());

            for (i = orderedLog.begin(); i < orderedLog.end(); i++)
            {
                for (j= orderedLog.begin(); j < orderedLog.end(); j++)
                {
                    if (i->getTemperature() < j->getTemperature())
                    {
                        aux = *i;
                        *i = *j;
                        *j= aux;
                    }
                }
            }

            e->setAbstractLog(orderedLog);

        }

};

#endif
