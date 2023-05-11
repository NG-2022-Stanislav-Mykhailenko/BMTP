#ifndef MODULESMYKHAILENKO_H_INCLUDED
#define MODULESMYKHAILENKO_H_INCLUDED

class ClassLab12_Mykhailenko {
    private:
        float edge;
        unsigned int seeds;
    public:
        ClassLab12_Mykhailenko(float, unsigned int);
        float getVolume();
        int getSeeds();
        bool setEdge(float);
        void setSeeds(unsigned int);
};

#endif // MODULESMYKHAILENKO_H_INCLUDED
