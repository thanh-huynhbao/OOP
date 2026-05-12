class Vector{
    private:
    int* v;
    int sizeV;
    public:
    Vector(const int& sizeV_);
    ~Vector();
    void allocate();
    void random();
    void print();

};