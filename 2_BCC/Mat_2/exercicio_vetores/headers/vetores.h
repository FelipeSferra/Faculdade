//vetores.h
#ifndef Vetores_H
    #define Vetores_H
#endif

class Vetores{
    private:
        float x;
        float y;
        float z;
    public:
        Vetores(): x(0), y(0), z(0) {}
        Vetores(float, float, float);

        float getX(){return this->x;}
        float getY(){return this->y;}
        float getZ(){return this->z;}

        void setX(float x){this->x = x;}
        void setY(float y){this->y = y;}
        void setZ(float z){this->z = z;}
};

Vetores::Vetores(float x, float y, float z){
    setX(x);
    setY(y);
    setZ(z);
}