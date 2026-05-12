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
    double norm(const int& power);
    void zeros();
    int getSize();
    int& operator() (const int& idx);
    int operator() (const int& idx) const;
    Vector operator+(const Vector& vec) const;
    Vector& operator=(const Vector& vec);
};