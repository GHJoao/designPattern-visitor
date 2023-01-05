#ifndef REAL_LOG_H_INCLUDED
#define REAL_LOG_H_INCLUDED

#include "abstract_log.h"
#include "visitor.h"

class RealLog : public AbstractLog
{
    public:
        void accept(Visitor *v)
        {
            v->visit(this);
        }
        std::vector<Record> getLog(void)
        {
            return this->log;
        }
        void addMeasure(float tmp, int hour)
        {
            Record measuring;
            measuring.setTemperature(tmp);
            measuring.setTime(hour);
            addRecord(measuring);
        }

};

#endif
