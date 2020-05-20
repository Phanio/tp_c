#ifndef EXAMEN_H
#define EXAMEN_H


class Examen
{
    public:
        Examen();
        Examen(double nte);

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        double Getnote() { return note; }
        void Setnote(double val) { note = val; }
        double Getdure() { return dure; }
        void Setdure(double val) { dure = val; }
       // Date GetdateExamen() { return dateExamen; }
      //  void SetdateExamen(Date val) { dateExamen = val; }

    protected:

    private:
        int id;
        double note;
        double dure;
        //Date dateExamen;
};

#endif // EXAMEN_H
