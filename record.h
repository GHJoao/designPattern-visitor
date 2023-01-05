#ifndef RECORD_H_INCLUDED
#define RECORD_H_INCLUDED

class Record
{
    private:
        float temperature;
        int time;
    public:
        void setTemperature(float t)
        {
            temperature = t;
        }
        void setTime(int t)
        {
            time = t;
        }
        float getTemperature(void)
        {
            return temperature;
        }
        int getTime(void)
        {
            return time;
        }
};

#endif
