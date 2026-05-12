class Matrix{
    private:
    double** A;
    int numRows;
    int numCols;
    public:
    // construct 
    Matrix(const int& numRows_, const int& numCols_);
    ~Matrix();
    void allocate();
    void random();
    void print();
    double& operator() (const int& idxR, const int& idxC);
    double operator() (const int& idxR, const int& idxC) const;
};