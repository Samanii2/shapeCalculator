#ifndef SUPERCLASS_H__
#define SUPERCLASS_H__

class shape
{
    protected:
        std::string name;

    public:
        shape( std::string s);
        void setName( std::string s);
        std::string getName() const;
};
#endif