#ifndef VISITOR_H_INCLUDED
#define VISITOR_H_INCLUDED

#include "abstract_log.h"
#include <vector>

class Visitor
{
    protected:
        std::vector<Record> orderedLog;
    public:
        void addRecord(Record r)
        {
            this->orderedLog.push_back(r);
        }
        void setOrderedLog(std::vector<Record> v)
        {
            this->orderedLog = v;
        }
        virtual void visit(class AbstractLog *e) = 0;
};

#endif
