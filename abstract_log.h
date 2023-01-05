#ifndef ABSTRACT_LOG_H_INCLUDED
#define ABSTRACT_LOG_H_INCLUDED

#include "record.h"
#include "visitor.h"
#include <vector>

class AbstractLog
{
    protected:
        std::vector<Record> log;

    public:
        void addRecord(Record r)
        {
            this->log.push_back(r);
        }
        void setAbstractLog(std::vector<Record> r)
        {
            this->log = r;
        }
        virtual void accept(Visitor *v) = 0;
        virtual std::vector<Record> getLog() = 0;

};

#endif
